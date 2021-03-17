#ifndef ACRONYM_H_INCLUDED
#define ACRONYM_H_INCLUDED

void abbreviate(const char *phrase)
{
    int n,j=0;
    char p[200];
    n=strlen(phrase);
    for(int i=0;i<n;i++)
    {
        if(isupper(phrase[i]))
        {
            p[j]=phrase[i];
            j++;
        }
    }
    p[j]='\0';
    printf("%s",p);

}


#endif // ACRONYM_H_INCLUDED
