#include <stdio.h>
int lcmsolve(int x, int y);
int main()
{
    int num1, num2, lCM;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    if(num1 > num2)
        lCM = lcmsolve(num2, num1);
    else
        lCM = lcmsolve(num1, num2);
 
    printf("LCM of %d and %d = %d", num1, num2, lCM);
 
    return 0;
}
 
int lcmsolve(int x, int y)
{
    static int multiple = 0;
    multiple += y;
 
    if((multiple % x == 0) && (multiple % y == 0))
    {
        return multiple;
    }
    else
    {
        return lcmsolve(x, y);
    }
}
