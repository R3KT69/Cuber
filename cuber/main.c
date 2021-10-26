#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num1, num2;
    bool programClose = false;
    char userInput;

    printf("(N) To close the program. Enter to continue: ");

    while (programClose != true)
    {
        scanf("%c", &userInput);

        if  (userInput == 'N')
        {
            break;
        } else
        {
            printf(">> ");
            scanf("%d", &num1);
            printf("To the power of: ");
            scanf("%d", &num2);
        }

        printf("%d \n", cuber(num1,num2));
    }

    return 0;
}

int cuber(int baseNum, int maxNum)
{
    int result = 1;

    for (int i = 1; i <= maxNum; i++)
    {
        result = result * baseNum;
    }

    return result;
}
