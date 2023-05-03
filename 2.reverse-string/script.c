/*
    Reverse the provided string and return the reversed string.

        For example, "hello" should become "olleh".
*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int len = strlen(str);

    /*
        Note that in the case where "Hello" is an input the half of length will be 2 (5/2). By default "int" will round down.
        In addition, also by saying this loop is less than 2 or (len < 2). The "Hello" input will only have TWO iterations (0 and 1, where 2 in non inclusive).
    */
    for (int i = 0; i < len / 2; i++)
    {
        printf("BEFORE: \n");
        printf("Length: %d\n", len);
        printf("Length divided by 2: %d\n", len / 2);
        /*
            Grab the first char on first iteration (In case of "Hello" input)
            Grab the second char on second iteration (In case of "Hello" input)
            etc.
        */
        printf("str[%d]: %c\n", i, str[i]);
        /*
            Grab the last char on first iteration (In case of "Hello" input)
            Grab the second last char on second iteration (In case of "Hello" input)
            etc.
        */
        printf("str[%d]: %c\n", len - i - 1, str[len - i - 1]);

        // Reverse happens
        // Take the char on the current iteration and store it to the temp var
        char temp = str[i];
        /*
            In the case of "Hello" as input:
                // Reassign the value of the char at the current iteration with the last char in string if first iteration
        */
        str[i] = str[len - i - 1];
        /*
            Set the value of the last char to temp effectively swapping the first with last, second with second last etc..
        */
        str[len - i - 1] = temp;

        printf("AFTER: \n");
        printf("Length: %d\n", len);
        printf("Length divided by 2: %d\n", len / 2);
        printf("str[%d]: %c\n", i, str[i]);
        printf("str[%d]: %c\n", len - i - 1, str[len - i - 1]);

        printf("MY VARIABLES: \n");
        printf("temp current char: %c\n", temp);
        printf("Current iteration value of str[i] is: %c\n", str[i]);
        printf("Current iteration value from back of str[len - i - 1] is: %c\n", str[len - i - 1]);
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
    Length: 5
    Length divided by 2: 2
    str[0]: H
    str[4]: o
    AFTER:
    Length: 5
    Length divided by 2: 2
    str[0]: o
    str[4]: H
    MY VARIABLES:
    temp current char: H
    Current iteration value of str[i] is: o
    Current iteration value from back of str[len - i - 1] is: H
    BEFORE:
    Length: 5
    Length divided by 2: 2
    str[1]: e
    str[3]: l
    AFTER:
    Length: 5
    Length divided by 2: 2
    str[1]: l
    str[3]: e
    MY VARIABLES:
    temp current char: e
    Current iteration value of str[i] is: l
    Current iteration value from back of str[len - i - 1] is: e
    Reversed string is: olleH
*/
