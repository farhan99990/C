#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += pow(i,i);
    }
    printf("%d",sum);

    return 0;

}