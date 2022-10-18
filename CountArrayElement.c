#include<stdio.h>
int main ()
{
    int arr[]={43,33,56,54,88,99};
    int n,i;
    n=sizeof(arr)/sizeof (int);
    printf("Total number of array :%d \n",n);
    for(i=0;i<n;i++)
    printf("Number of elemets eneterd are :%d \n",arr[i]);
    return 0;

    
}
