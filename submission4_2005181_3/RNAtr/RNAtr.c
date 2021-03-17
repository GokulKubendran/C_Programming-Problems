#include "RNAtr.h"

int main()
{
    char dna[MAX];
    printf("!!!!ENTER DNA in UPPERCASE!!!!!");
    printf("\n\nEnter DNA strand to transcript : ");//DNA strand
    scanf("%s", dna);

    //Transcript the DNA strand
    for(int i = 0 ; i<strlen(dna) ; i++)
    {
        if(dna[i] == 'G')
        {
            dna[i] = 'C';
        }
        else if(dna[i] == 'C')
        {
            dna[i] = 'G';
        }
        else if(dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        else if(dna[i] == 'A')
        {
            dna[i] = 'U';
        }
        else
        {
            printf("INVALID INPUT");
        }
    }

    printf("\nThe RNA transcript is : %s", dna);

    return 0;
}
