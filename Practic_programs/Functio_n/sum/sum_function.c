#include<stdio.h>
int mysum(int x, int y)
{
    printf("adding two numbers\n");
    return x+y;
}

int main()
{
    int a;
    a = mysum(7,13);
    printf("%d\n",a);
    return 0;
}