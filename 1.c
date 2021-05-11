#include<stdio.h>
int main(){

    int A[3][3],i,j;
    int a,b,c,d,e,f,g,h,k;
    long det;

    printf("\nEnter the 9 elements of the matrix:");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
        
    }
    a = A[0][0]; 
    b = A[0][1];
    c = A[0][2];
    d = A[1][0];
    e = A[1][1];
    f = A[1][2];
    g = A[2][0];
    h = A[2][1];
    k = A[2][2];

    det = (a*(e*k - f*h)) - (b*(d*k - f*g)) + (c*(d*h - e*g));
    printf("\ndeterminant of matrix A = %ld",det);
    



    return(0);
    
    
    
    

}