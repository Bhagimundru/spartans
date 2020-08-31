/*generate all the possible subsets of A={1,2,3}*/
#include <stdio.h>

int main()
{
    int i,j;
    int A[3]={1,2,3};
    for(i=0;i<8;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            if((i&(1<<j))==(1<<j))
             printf(“%d”,A[j]);
        }
    }
}
