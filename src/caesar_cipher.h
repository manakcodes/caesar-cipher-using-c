#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#pragma once

#define SHIFT_FACTOR 3
#define TOTAL_ALPHABETS 26
#define UPPERCASE_ANCHOR 'A'
#define LOWERCASE_ANCHOR 'a'

#define ERROR_MEMORY_ALLOCATION_FAILURE "\nERROR_MEMORY_ALLOCATION_FAILURE!!\nSOMETHING WENT WRONG\nABORTING()\n"

typedef struct
{
    size_t TextSize;
    char *InputString;
    char *EncryptedString;
    char *DecryptedString;
} CaesarCipher;

bool IsValidString(char *);
char *InputString(size_t size);

bool IsValidString(char *str)
{
    int len = strlen(str);

    // check if every char of the string is uppercase english alphabet char
    // only
    for (int i = 0; i < len; i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == ' ' || str[i] == '*'))
        {
            return false;
        }
    }

    return true;
}

char *InputString(size_t size)
{
    char *InputMessage = (char *)(malloc((size + 1) * sizeof(char)));
    if (InputMessage == NULL) {
        printf(ERROR_MEMORY_ALLOCATION_FAILURE);
        abort();
    }

    while (1)
    {
        printf("ENTER A STRING (MAX %zu CHARACTERS):\n", size);

        // read the input from the console
        fgets(InputMessage, size + 1, stdin);

        // clear the input buffer
        int ch = 0;
        while ((ch = getchar()) != '\n' && (ch != EOF))
        {
            // infinite loop to consume input buffer
        }

        // check the length of the str entered by the user to check
        // if user actually entered something or just pressed the ENTER key
        int len = strlen(InputMessage);

        // check if the length of the str is valid
        if (len > 0 && InputMessage[len - 1] == '\n')
        {
            // if the last element of the str is a newline '\n\
            // replace the last char of str with the NULL terminator
            InputMessage[len - 1] = '\0';
        }

        // find the current length of the str
        len = strlen(InputMessage);

        // check if the str is valid or not
        bool valid = IsValidString(InputMessage);

        // if length of the string is 0
        // (which means the user pressed the ENTER key)
        // or if the str is invalid
        if (len == 0 || (!valid))
        {

            // print a message to show the user error
            printf("\nENTER A VALID STRING\n");
            printf("\n(USER EITHER ENTERED NEWLINE OR INVALID CHAR)\n");
            printf("VALID CHARACTERS ARE : [A-Z], [a-z] AND [' ']\n");

            // continue statement to redirect the control to the start of
            // the loop
            continue;
        }

        // if the string is valid return it, otherwise the infinite loop
        // will handle it
        if (valid)
        {
            return InputMessage;
        }
    }
}
