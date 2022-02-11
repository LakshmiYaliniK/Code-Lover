#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("Before swapping a is %d and b is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a is %d and b is %d",a,b);
    return 0;
}
