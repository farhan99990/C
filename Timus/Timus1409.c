#include<stdio.h>
int main()
{
    int H, L, C;
    scanf("%d %d",&H,&L);
    C= (H+L)-1;
    printf("%d %d",C-H, C-L);
    
    return 0;
}