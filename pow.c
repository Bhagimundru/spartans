/*Find if given number n is power of 2 or not*/
#include <stdio.h>

int main()
{
    int n;
    int x;
    printf("enter num");
    scanf("%d",&n);
    x=powtwo(n);
    printf("%d",x);
}
int powtwo(int n)
{
    if((n&(n-1))==0)
         return 1;
    else
        return 0;
    }    
}
