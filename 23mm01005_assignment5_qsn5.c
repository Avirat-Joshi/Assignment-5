#include <stdio.h>
void main()
{
    int s = 0, a;
    char ch;
    printf("Provide the number ");
    scanf("%d", &a);
    if (a % 2 == 0)
        s += a;
    for (int i = 0;; i++)
    {
        printf("Do you want to continue ");
        getchar();
        scanf("%c", &ch);
        if (ch == 'Y' || ch == 'y')
        {
            printf("Provide the number ");
            scanf("%d", &a);
            if (a % 2 == 0)
                s += a;
            continue;
        }
        if (ch == 'N' || ch == 'n')
            break;
        else
            printf("Not a valid input");
    }
    printf("The sum is: %d", s);
}







// while (1)
// {
//     printf("\nDo you want to continue? ");
//     getchar();
//     scanf("%c", &ch);
//     if (ch == 'N' || ch == 'n')
//     {
//         printf("Sum is %d", s);
//         break;
//     }
//     else if (ch == 'Y' || ch == 'y')
//     {
//         printf("Enter a number ");
//         scanf("%d", &a);
//         if (a % 2 == 0)
//             s += a;
//     }
//     else
//     {
//         printf("Invalid input, please retry");
//     }
