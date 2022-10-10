#include<stdio.h>
int main()
{
    int N,i,j,raw,k;
    scanf("%d",&raw);
    for(i=1;i<=raw;i++)
    {
        for(j=i;j<=raw-1;j++){
                printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}

