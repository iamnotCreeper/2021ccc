#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");

    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)printf(" ");
        for(int k=1;k<=n;k++)printf("*");
        printf("\n");
    }
}
