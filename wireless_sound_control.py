from math import hypot
from sre_constants import SUCCESS
import cv2
import mediapipe as mp

frame_width,frame_height = 640,480

cv_obj = cv2.VideoCapture(0)
hand = mp.solutions.hands.Hands()

from ctypes import cast, POINTER
from comtypes import CLSCTX_ALL
from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume
devices = AudioUtilities.GetSpeakers()
interface = devices.Activate(
    IAudioEndpointVolume._iid_, CLSCTX_ALL, None)
volume = cast(interface, POINTER(IAudioEndpointVolume))


while True:
    succes, frame = cv_obj.read()

    #BGR RGB
    frame_reverse = cv2.cvtColor(frame,cv2.COLOR_BGR2RGB)

    results = hand.process(frame_reverse)
    
    if results.multi_hand_landmarks:
        
        k = {id_finger:points for id_finger,points in enumerate(results.multi_hand_landmarks[0].landmark)}
        x1,y1 = int(k[4].x*frame_width) , int(k[4].y*frame_height)
        x2,y2 = int(k[8].x*frame_width) , int(k[8].y*frame_height)
        
        cv2.circle(frame,(x1,y1),5,(0,255,0),10)  
        cv2.circle(frame,(x2,y2),5,(0,255,0),10) 
        cv2.line(frame,(x1,y1),(x2,y2),(0,0,255),10) 
   
        length_between_finger = hypot(x2-x1,y2-y1)

        sound_value = (65.25+((length_between_finger/175)*-65.25))*-1

        if sound_value>0:
            volume.SetMasterVolumeLevel(0, None)
        elif sound_value<-65.25:
            volume.SetMasterVolumeLevel(-65.25, None)    
        else:
            volume.SetMasterVolumeLevel(sound_value, None)



    cv2.imshow("windows",frame)
    cv2.waitKey(1)

