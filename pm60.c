#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    for(i=0;i<n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
    }
    return 0;
}
