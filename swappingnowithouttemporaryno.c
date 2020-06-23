#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number for swapping:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping, value of two number:%d\n%d",a,b);
    return 0;
}
