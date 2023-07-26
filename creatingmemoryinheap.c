#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0]=30;p[1]=22;p[2]=55;p[3]=8;p[4]=76;
    for(int i = 0; i<=4 ; i++)
    {
        printf("Using pointer element at index %d in given array is %d \n",i,p[i]);
    }
    return 0;
}