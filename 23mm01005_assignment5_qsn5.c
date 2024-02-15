#include <stdio.h>
void main()
{
    int s = 0, a;
    char ch;
    printf("Enter a number ");
    scanf("%d", &a);
    if (a % 2 == 0)
        s += a;
    while (1)
    {
        printf("\nDo you want to continue? ");
        getchar();
        scanf("%c", &ch);
        if (ch == 'N' || ch == 'n')
        {
            printf("Sum is %d", s);
            break;
        }
        else if (ch == 'Y' || ch == 'y')
        {
            printf("Enter a number ");
            scanf("%d", &a);
            if (a % 2 == 0)
                s += a;
        }
        else
        {
            printf("Invalid input, please retry");
        }
    }
}