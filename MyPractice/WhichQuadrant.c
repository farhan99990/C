#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>0&&b>0)
    {
        printf("First Quadrant(both values are positive)");
    }
    else if(a<0&&b>0)
    {
        printf("Second Quadrant(First valur is negetive and second value is positive)");
    }
    else if(a<0&&b<0)
    {
        printf("Third Quadrant(both values are negetive)");
    }
    else
    {
        printf("Fourth Quadrant(First valur is positive and second value is negetive)");
    }

    return 0;

}