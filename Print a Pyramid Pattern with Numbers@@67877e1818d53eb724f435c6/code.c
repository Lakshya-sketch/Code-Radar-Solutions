#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    { 
        for (int j = 1; j <= n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("%d");
        }

        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}