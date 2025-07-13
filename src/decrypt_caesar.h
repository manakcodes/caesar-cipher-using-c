#include "caesar_cipher.h"
#pragma once

char *GetDecryptedString(char *InputString)
{
    int size = strlen(InputString);
    char *DecryptedString = (char *)(malloc((size + 1) * (sizeof(char))));

    if (DecryptedString == NULL)
    {
        printf(ERROR_MEMORY_ALLOCATION_FAILURE);
        abort();
    }

    for (int i = 0; i < size; i++)
    {
        char CharScanned = InputString[i];
        if (CharScanned >= 'A' && CharScanned <= 'Z')
        {
            DecryptedString[i] = (((CharScanned - UPPERCASE_ANCHOR - SHIFT_FACTOR) + TOTAL_ALPHABETS) % TOTAL_ALPHABETS) + UPPERCASE_ANCHOR;
        }
        if (CharScanned >= 'a' && CharScanned <= 'z')
        {
            DecryptedString[i] = (((CharScanned - LOWERCASE_ANCHOR - SHIFT_FACTOR) + TOTAL_ALPHABETS) % TOTAL_ALPHABETS) + LOWERCASE_ANCHOR;
        }

        if (CharScanned == ' ')
        {
            DecryptedString[i] = ' ';
        }
    }

    DecryptedString[size] = '\0';
    return DecryptedString;
}
