#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i % 2 == 1)
        {
            sum += i;
        }
        else if(i % 2 == 0)
        {
            sum -= i;
        }

    }
    
    printf("%d",sum);

    return 0;

}