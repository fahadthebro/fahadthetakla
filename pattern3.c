#include<stdio.h>
int main()
{
    int N,i,j,raw,col;
    scanf("%d",&raw);
    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}


