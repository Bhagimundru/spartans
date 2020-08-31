/*Find whether the nth bit is set or not of the given number*/
#include <stdio.h>

int main()
{
  int n;
  int x;
  int i;
  printf("enter num");
  scanf("%d",&n);
  printf("enter which bit");
  scanf("%d",&i);
  x=set(n,i);
  printf("%d",x);
}
int set(int n,int i)
{
    if(n&(1<<(i-1))==0)
    return 0;
    else
    return 1;
}
