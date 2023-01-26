#include <stdio.h>
void main()
{
    char name[20], address[20] , age[20];
    
    printf("what is ur name ?\n");
    scanf("%s",&name);
    printf ("hai %s can i know ur age\n" ,name);
    scanf("%s",&age);
    printf("where are u from\n");
    scanf("%s",&address);
    printf("we can make u a short Bio \n iam %s of %s yrs ols  \n and from %s",name ,age,address);
}