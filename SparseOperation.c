
#include <stdio.h>

int main()
{
    //How to check whether a matrix is sparse matricx
    int a[3][3] = {{1,0,0},{2,3,0},{5,0,0}};
    int sp[3][10];
    int m,n,s,ch = 0,sz=0,k=0;
    m = 3;
    n = 3;
    s = (m*n)/2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
                sz++;
                sp[0][k] = i;
                sp[1][k] = j;
                sp[2][k] = a[i][j];
                k++;
            }
            else
            ch++;
        }
}
            
    if(ch > s){
        printf("It is a sparse matrix");
    }
    else{
        printf("Not a spanse matrix");
    }
    printf("\n Sparse matrix represented in different forms are -> \n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<sz; j++)
            printf("%d ", sp[i][j]);
 
        printf("\n");
    }
    
    
    return 0;
}



