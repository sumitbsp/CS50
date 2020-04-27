#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string line = get_string("Enter a string of text: ");

    int letters = 0;


    // counting letters
    for (int i = 0; line[i] != '\0'; i++)
    {
        if(isalpha(line[i]))
        {
            letters++;
        }
    }

    // counting words
    int words = 0;
    if(isalpha(line[0]))
    {
        words++;
    }
    for (int i = 0; line[i] != '\0'; i++)
    {

        if(line[i] == 32 && isalpha(line[i + 1]))
        {
            words++;
        }
    }

    // counting sentences
    int sentences = 0;

    for (int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == 33 || line[i] == 46 || line[i] == 63 || line[i] == 58)
        {
            sentences++;
        }
    }

    // calculatin average letter and sentences per 100 words
    float avgLetters = ((float)letters / (float)words) * 100;
    float avgSentences = ((float)sentences / (float)words) * 100;

    int index = round(0.0588 * avgLetters - 0.296 * avgSentences - 15.8);

    // printing out grade
    if(index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    if(index > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    printf("Grade %i\n", index);
}
