#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter the character array (string): ");
    char data[10000];
    scanf("%s", data);

    char string_input[10000];
    printf("Enter the string to make: ");
    scanf("%s", string_input);

    int lenmain = strlen(data);
    int lenmake = strlen(string_input);

    int freq[26] = {0};

    for (int i = 0; i < lenmain; i++)
    {
        freq[data[i] - 97]++;
    }
    for (int i = 0; i < lenmake; i++)
    {
        if (freq[string_input[i] - 97] > 0)
        {
            freq[string_input[i] - 97]--;
        }
        else
        {
            printf("Word cannot be formed\n");
            return 0;
        }
    }
    printf("Word can be formed\n");
    return 0;
}