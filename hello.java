//To use scan function, you have to import this.
import java.util.Scanner;
//To use Set function you have to import this.
import java.util.Set;
//To import Java utility classes(Covers utility classes such as map, scanner etc.).
import java.util.*;
//P.S. very important to import this.
public class hello{
    public static void main(String[] args){
        //All operators and Data types are similar to C++
        //Scanner is also treated as a Data Type.
        int a=125;
        int b=12;
        //TypeCasting
        double ans=(double)a/b;
        //Print Function
        System.out.println("a/b= "+ans);
        //Input Function
        Scanner sc = new Scanner(System.in);
        //To avoid an error: Resource Leak you can close the scanner but further inputs are not possible.
        // sc.close();
        //nextInt() for integer,next() for String and so on.
        String scanned = sc.next();
        //String inputs are always preferred to avoid errors.
        //And later convert it as per the need.
        int x=Integer.parseInt(scanned);
        //That's how you convert string to integer.
        //That also does not solve the complete error problem. To overcome this we can check first hand if it's integer or not.
        System.out.println("The scanned value is: "+scanned+" And Integer Type: "+x);
        /*-------------------------------------------------------------------------- */
        //Comparison Operators(Just Like C/C++)
        // > < == >= <= !=
        //For Strings only == and != are defined.
        //(For Strings) == works differently than as may you have thought.
        // For comparing two strings we could use s1.equals(s2).
        int y=12,z=13;
        //In Java boolean is strictly boolean.
        //e.g. boolean c=0 will give you an error.
        //Output is by default taking boolean operator, maybe because of comparison operator.
        System.out.println((y<z));
        //Conjuction operators
        // && , || and !
        /*---------------------------------------------------*/
        /* CONDITIONALS*/
        //Straightforward like C/C++
        String s1="Hello";
        String s2="Hello";
        if(s1.equals(s2)){
            System.out.println("Both Strings are equal");
        }
        else{
            System.out.println("Both Strings are not equal"); 
        }
        /*-------------------------------------- */
        //ARRAYS
        //Syntax
        int[] newArr= new int[5];
        newArr[0]=1;
        newArr[1]=2;
        newArr[2]=3;
        newArr[3]=4;
        newArr[4]=5;
        System.out.println("The Third value of Array(newArr): "+newArr[2]);
        //Another Simple Way is:
        //But no value inside [].
        //By default if there's no value then it will be null. 
        int arr[]={1,2,3,4,5};
        //or
        int[] arr2={1,2,3,4,5};
        //To get array length
        int len=arr2.length ;
        System.out.println("The Fourth value of Array(arr): "+arr[3]);
        System.out.println("Length of Array(arr2): "+len);
        /*---------------------------------- */
        //LOOPS
        int count=0;
        //For Loops
        for(int i=0;i<10;i++){
            count++;
        }
        System.out.println("Count: " + count);
        //To traverse an array(simpler method)
        for (int i : arr2) {
            //Break(JUST LIKE C!)
            if(arr2[i]==4){
                break;
            }
        }
        //while loops
        int num=0;
        while(num!=10){
         num=sc.nextInt();
         System.out.println(num);
        }
        //Do while loop
        //It must be executed once
        do {
        num=sc.nextInt();
        System.out.println(num);            
        } while (num!=12);
        /*-----------------------------------------------*/
        //Sets/Lists
        /*Set- It is an unordered collection of objects in which duplicate values cannot be stored.
        It is an interface that implements the mathematical set.*/
        //Syntax Set<Obj> set = new HashSet<Obj> (); 
        //For more refer GFG
        Set<Integer> set = new HashSet<Integer> ();
        //To add an element in the set        
        set.add(5);
        set.add(1);
        set.add(12);
        set.add(5);
        //To remove an element
        set.remove(12);
        System.out.println("Printing the above set: ,"+set);
        //To check if an element is present in the set or not.
        System.out.println(set.contains(5));
        //To clear(Delete all!!)
        set.clear();
        //To check if set is empty or not
        boolean empty = set.isEmpty();
        //For size of Set
        int size_set=set.size();
        System.out.println("Size of Set: "+size_set+"\nEmpty : "+empty);
        //There are different kind of sets such as HashSet, TreeSet etc.
        //Set allows to find an element in constant time O(1).
        //There are much more to set !!
        /*-----------------------------------*/
        //List
        /*The List interface in Java provides a way to store the ordered collection
        * Since List preserves the insertion order, it allows positional access and insertion of elements. 
        */
        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(1);
        list.add(2);
        list.add(3);
        System.out.println("The List is: "+list);
        //See it's in an order.
        //There's also something called sublist.
        //There's also LinkedList..
        LinkedList<Integer> linked_list=new LinkedList<Integer>();
        linked_list.add(12);
        linked_list.add(11);
        /*--------------------------------------------*/
        //MAPS
        //Kinda like list but instead of indexes you use key values.
        //Maps are perfect to use for key-value association mapping such as dictionaries.
        //Maps cannot have duplicate keys.
        //e.g. A map of error codes and their descriptions.
        //Syntax
        //Although maps can be intialized like this.
        //Map hm= new HashMap();
        //Better way to do this would be.
        Map<Integer,String> hm = new HashMap<Integer,String>();
        hm.put(404,"Not Found");
        hm.put(401,"Unauthorized");
        System.out.println("The Map: "+hm);
        //TO find value associated to a key
        String s404=hm.get(404);
        System.out.println(s404);
        //Learn all methods at GFG.
        //HashMap - No Guarantee for order.
        //Alternately we can use LinkedHashMap(more at GFG).
        //To remove a particular value from map.
        hm.remove(404);
        //To remove all entries from the map.
        hm.clear();
        sc.close();
        /*Made by Kundan */
        /*That's all in this more(Objects,Classes etc.) in next program. */
    }
}
         