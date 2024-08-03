#include<stdio.h>
int main()
{
    int i,j;
     for(i=3;i>=1;i--)
    {
        for(j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d",2*i-j);
            }
        }
        printf("\n");
        
    }

    return 0;
}