#include "caesar_cipher.h"
#pragma once

char *GetEncryptedString(char *InputString)
{
    int size = strlen(InputString);
    char *EncryptedString = (char *)(malloc((size + 1) * (sizeof(char))));

    if (EncryptedString == NULL)
    {
        printf(ERROR_MEMORY_ALLOCATION_FAILURE);
        abort();
    }

    for (int i = 0; i < size; i++)
    {
        char CharScanned = InputString[i];
        if (CharScanned >= 'A' && CharScanned <= 'Z')
        {
            EncryptedString[i] = (((CharScanned - UPPERCASE_ANCHOR + SHIFT_FACTOR) % TOTAL_ALPHABETS) + UPPERCASE_ANCHOR);
        }

        if (CharScanned >= 'a' && CharScanned <= 'z')
        {
            EncryptedString[i] = (((CharScanned - LOWERCASE_ANCHOR + SHIFT_FACTOR) % TOTAL_ALPHABETS) + LOWERCASE_ANCHOR);
        }

        if (CharScanned == ' ')
        {
            EncryptedString[i] = ' ';
        }
    }

    EncryptedString[size] = '\0';
    return EncryptedString;
}