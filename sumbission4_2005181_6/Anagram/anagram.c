#include <stdio.h>
#include <string.h>
#include "anagram.h"

static inline char *tolowerString(char *stringtolower)
{
    int lengthofString = strlen(stringtolower);
    for(int i=0;i<lengthofString;i++)
    {
        char temp = stringtolower[i];
        temp = tolower(temp);
        stringtolower[i] = temp;
    }

    return stringtolower;
}

void anagrams_for(char *word, struct candidates *candidates)
{
    if (strcmp(tolowerString(candidates->candidate->word),tolowerString(word))==0)
    {
        candidates->candidate->is_anagram = NOT_ANAGRAM;
        printf("Duplicate Not anagram : %d\n",NOT_ANAGRAM);
    }
    else
    {
    for(size_t i=0;i<candidates->count;i++)
    {
        size_t lengthString = strlen(candidates->candidate[i].word);
        int lengthCount = 0;
        for(size_t j=0;j<strlen(word);j++)
        {
            char tempWord = word[j];
            tempWord = tolower(tempWord);
            for(size_t k=0;k<lengthString;k++)
            {
                char tempCandidateWord = candidates->candidate[i].word[k];
                tempCandidateWord = tolower(tempCandidateWord);
                if(tempCandidateWord==tempWord)
                {
                    lengthCount++;
                    candidates->candidate[i].word[k] = '0';
                    break;

                }
            }

        }


        if(lengthCount == strlen(word) && lengthCount == lengthString)
        {
            candidates->candidate[i].is_anagram = IS_ANAGRAM;
            printf("Is anagram  : %d\n",IS_ANAGRAM);
        }
        else
        {
            candidates->candidate[i].is_anagram = NOT_ANAGRAM;
            printf("Not anagram : %d\n",NOT_ANAGRAM);
        }
    }
    }

}
