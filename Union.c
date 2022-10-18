#include <stdio.h>

int main()
{
    int a[20],b[20],c[20],i,j,k=0,n1,n2;
    printf("enter the number of element in set A:\n");
    scanf("%d",&n1);
    printf("enter the elements of set A:\n");
    for(i=0;i<n1;i++)
     scanf("%d",&a[i]);
     
     printf("enter the number of element in set B:\n");
    scanf("%d",&n2);
    printf("enter the elements of set B:\n");
    for(i=0;i<n2;i++)
     scanf("%d",&b[i]);
     
  
   for(i=0;i<n1;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
    
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}

