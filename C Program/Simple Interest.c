#include<stdio.h>

int main()
{
    int p,r,n,si;
    printf("Enter Principle, Rate of interest & Time :");
    scanf("%d%d%d",&p,&r,&n);
    si=(p*r*n)/100;
    
    printf("Simple Interest is :%d",si);
    return 0;
}
