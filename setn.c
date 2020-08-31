/*set the nth bit of the given number and print the answer*/
#include <stdio.h>

int main()
{
    int n,i,x;
    printf("enter n");
    scanf("%d",&n);
    printf("enter which bit");
    scanf("%d",&i);
    x=(n|(1<<(i-1)));
    printf("%d",x);

}
