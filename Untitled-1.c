#include <stdio.h>
#include <string.h>
void main()
{
    char str[10],rev[100];
    printf("enter the string:");
    scanf("%s",str);
    strcpy(rev,str);
    strrev(rev);
    if(strcmp(str,rev)==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}