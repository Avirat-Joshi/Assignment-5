#include <stdio.h>
int main()
{
    int n[10], temp;
    printf("Enter 10 numbers ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &n[i]);
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (n[i] > n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d\t", n[i]);

    return 0;
}