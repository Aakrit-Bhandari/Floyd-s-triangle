// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        if (i % 2 != 0)
        {
            int k = 1;
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                {
                    printf("%d", k);
                }
                if (j % 2 != 0)
                {
                    printf("%d", k - 1);
                }
                else
                {
                    printf("%d", k);
                }
            }
        }
        else
        {
            int p = 1;
            for (int l = 0; l <= i; l++)
            {
                if (i % 2 == 0)
                {
                    printf("%d", p);
                }
                else
                {
                    printf("%d", p - 1);
                }
            }
        }
    }
}