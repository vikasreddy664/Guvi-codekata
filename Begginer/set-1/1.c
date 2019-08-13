#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
        printf("\nPositive");
    else if(n==0)
        printf("\nZero");
    else
        printf("\nNegative");
    return 0;
}
