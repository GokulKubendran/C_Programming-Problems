#ifndef ISOGRAM_H_INCLUDED
#define ISOGRAM_H_INCLUDED

int check(char *s)
{

    int flag=0;
    int a[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            a[s[i]-'A']++;
        if(s[i]>='a' && s[i]<='z')
            a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
        if(a[i]>1)
            flag=1;
    if(flag==1)
        return 0;
    else
        return 1;
}


#endif // ISOGRAM_H_INCLUDED
