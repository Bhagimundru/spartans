/*Divide the number without using / operator*/
#include <stdio.h>

int main()
{
    int i;
    int q=0;
    int v=0;
    int dividend=45;
    int divisor=7;
    for(i=32;i>=0;i--)
    {
        if ((v+(divisor<<i))<=dividend)
        {
            v=(v+(divisor<<i));
            q=(q|(1<<i));
        }
    }
    printf("%d",q);
}


