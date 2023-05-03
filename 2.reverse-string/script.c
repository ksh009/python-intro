/*
    Reverse the provided string and return the reversed string.

        For example, "hello" should become "olleh".
*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        printf("BEFORE: \n");
        printf("Length: %d\n", len);
        printf("Length divided by 2: %d\n", len / 2);
        printf("str[%d]: %c\n", i, str[i]);
        printf("str[%d]: %c\n", len - i - 1, str[len - i - 1]);

        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;

        printf("AFTER: \n");
        printf("Length: %d\n", len);
        printf("Length divided by 2: %d\n", len / 2);
        printf("str[%d]: %c\n", i, str[i]);
        printf("str[%d]: %c\n", len - i - 1, str[len - i - 1]);
    }
}

int main()
{
    char myString[100];
    printf("Enter a string: ");
    scanf("%s", myString);

    reverseString(myString);

    printf("Reversed string is: %s\n", myString);

    return 0;
}

/*
    Enter a string: Hello
    BEFORE:
    str[0]: H
    str[4]: o
    AFTER:
    str[0]: o
    str[4]: H
    BEFORE:
    str[1]: e
    str[3]: l
    AFTER:
    str[1]: l
    str[3]: e
    Reversed string is: olleH
*/
