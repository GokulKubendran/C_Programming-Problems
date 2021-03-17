#ifndef HAMMING_H_INCLUDED
#define HAMMING_H_INCLUDED

int compute(const char *lhs, const char *rhs)
{
    int len,flag=0;
    len=strlen(lhs);
    for(int i=0;i<len+1;i++)
    {
        if(lhs[i]!=rhs[i])
        {
            flag++;
        }
    }
    return flag;

}

#endif // HAMMING_H_INCLUDED
