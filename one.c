/*Count the no.of ones in the given binary number*/

#include <stdio.h>
int main()
{
  int n;
  int x;
  printf("enter num");
  scanf("%d",&n);
  x=count(n);
  printf("%d",x);
}
  int count(int n)
  {
      int count=0;
      while(n)
     {
         n=(n&(n-1));
         count++;
     }
     return count;
  }
