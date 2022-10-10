#include<stdio.h>
int main()
{
    int N,i,j,raw,col;
    scanf("%d %d",&raw,&col);
    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++){
            printf("* ");
        }
        printf("\n");
    }
}

