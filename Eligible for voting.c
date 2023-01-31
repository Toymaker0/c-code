#include <stdio.h>

void main()

{
    char Age [10];

    printf("Enter ur age");
    scanf("%d",&Age);
    
    if (Age < 18)
    {
        printf("You are not eligible for voting");
    }
    else 
    {
        printf("You are Eligible for voting");
    }
    
    }