#include<stdio.h>
#include<math.h>

int shat_present(int n);
int dgsum(int n);
int last_dig_prime(int n);

int main()
{
    int n;
    scanf("%d",&n);

    if(shat_present(n)==1 && dgsum(n)>10 && last_dig_prime(n)==1)
    {
        printf("Farhan's Number\n");
    }
    else
    {
        printf("Not Farhan's number");
    }

    return 0;
}



int shat_present(int n)
{
    while (n>0)
    {
        if(n%10 == 7)
            return 1;
        n /= 10;
    }
    
}

int dgsum(int n)
{
    int sum=0;
    while (n>0)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
    
}

int last_dig_prime(int n)
{
    int ld = n%10;
    if(ld==2 || ld==3 ||ld==5 || ld==7)
        return 1;
    else
        return 0;
    
}