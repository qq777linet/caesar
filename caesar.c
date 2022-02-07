#include <cs50.h>
#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, string argv[])
{
    if (argc == 2) 
    {
            string key = argv[1];
            int key_length = strlen(key);
            int Key = atoi(key);
            int kkey = Key % 26;
            for (int i = 0; i < key_length; i++)
            {
                if (isdigit(key[i]))
                {

                }
                else
                {
                    goto LOOP1;
                }
            }
            string plaintext = get_string("plaintext: ");
            int length = strlen(plaintext);
            printf("ciphertext: ");
            for (int i = 0; i<strlen(plaintext); i++)
            {
                char cx = plaintext[i];
                if (cx >= 65 && cx <= 90)
                    {
                        int ix = cx + kkey;
                        if (ix>90)
                            {
                                ix = ix - 90 + 64;
                                char ccx = ix;
                                printf("%c",ccx);
                            }
                        else 
                            {
                                char ccx = ix;
                                printf("%c",ccx);  
                            }
                    } 
                else if (cx >= 97 && cx <= 122)
                    {
                        int ix = cx + kkey ;
                        if (ix >122)
                            {
                                ix = ix - 122 + 96;
                                char ccx = ix;
                                printf("%c", ccx);
                            }
                        else 
                            {
                                char ccx = ix;
                                printf("%c", ccx);   
                            }
                    }
                else
                    {
                        printf("%c", cx);
                    }
            }
            printf ("\n");

    }
    
    else
    {
        LOOP1: ;
        printf("Usage: ./caesar key\n");
        return 1;
    }
}


