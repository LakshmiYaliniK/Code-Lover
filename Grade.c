
#include <stdio.h>
int main() 
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>=85 &&marks<=100)
    {
        printf("You scored Grade A");
    }
    else if(marks>=70 &&marks<=84)
    { 
        printf("You scored Grade B");
    }
    else if(marks>=55 &&marks<=69)
    {
        printf("You scored Grade C");
    }
    else if(marks>=40 &&marks<=54)
    {
        printf("You scored Grade D");
    }
    else
    {
        printf("You scored Grade F");
    }
    return 0;
}
   
