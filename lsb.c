/*Find the right most bit in the binary represntation of the given number*/
#include <stdio.h>

int main()
{
    int n;
    int x;
    printf("enter num");
    scanf("%d",&n);
    x=((n^(n-1))&n);
    printf("%d",x);
    
}
