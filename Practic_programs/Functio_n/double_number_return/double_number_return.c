#include<stdio.h>
int myfriend(int x)
{
    printf("Your double\n");
    return 2*x;
}
int main()
{
    int a;
    a = myfriend(5);
    printf("%d\n",a);
    return 0;
}