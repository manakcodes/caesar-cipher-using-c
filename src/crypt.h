#include "caesar_cipher.h"
#include "encrypt_caesar.h"
#include "decrypt_caesar.h"

#pragma once

void crypt()
{
    CaesarCipher *cc = (CaesarCipher *)(malloc(sizeof(CaesarCipher)));

    printf("\nENTER THE NUMBER OF CHAR YOU WANT TO CIPHER OR DECIPHER : \n");
    scanf("%zu", &cc->TextSize);
    getchar();

    cc->InputString = InputString(cc->TextSize);

    cc->EncryptedString = GetEncryptedString(cc->InputString);
    cc->DecryptedString = GetDecryptedString(cc->InputString);

    printf("\n\n\tCHOICE\t\n\n");
    printf("1.ENCRYPT\n2.DECRYPT\n\n");

    while (1)
    {

        int UserChoice = 0;
        printf("\nENTER CHOICE (1 / 2) ? : ");
        scanf("%d", &UserChoice);

        if (UserChoice != 1 && UserChoice != 2)
        {
            printf("\nINVALID CHOICE !!\n");
            printf("\nVALID CHOICE (1 / 2)\n");
            continue;
        }

        if (UserChoice == 1)
        {

            printf("\nORIGINAL MESSAGE : \n%s\n", cc->InputString);
            printf("\nENCRYPTED MESSAGE : \n%s\n", cc->EncryptedString);
            break;
        }

        if (UserChoice == 2)
        {
            printf("\nORIGINAL MESSAGE   : \n%s\n", cc->InputString);
            printf("\nDECRYPTED MESSAGE : \n%s\n", cc->DecryptedString);
            break;
        }
    }
    free(cc->InputString);
    free(cc->EncryptedString);
    free(cc->DecryptedString);
    free(cc);
}