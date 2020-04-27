#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // validating command line arguments
     if(argc < 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    if(argc > 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for(int i = 0; argv[1][i] != '\0'; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    printf("Key: %i\n", key);
    
    // taking input from user
    string plainText = get_string("Enter text: ");
    
    // converting into ciphertext
    for(int i = 0; plainText[i] != '\0'; i++)
    {
        if(plainText[i] >= 97 && plainText[i] <= 122)
        {
            int c = plainText[i] - 97;
            int cText = (c + key) % 26;
            int cipherText = cText + 97;
            plainText[i] = (char) cipherText;
        }
        if(plainText[i] >= 65 && plainText[i] <= 90)
        {
            int c = plainText[i] - 65;
            int cText = (c + key) % 26;
            int cipherText = cText + 65;
            plainText[i] = (char) cipherText;
        }
    }
    printf("ciphertext: %s\n", plainText);
}