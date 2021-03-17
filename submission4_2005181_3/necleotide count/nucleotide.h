#ifndef NUCLEOTIDE_H_INCLUDED
#define NUCLEOTIDE_H_INCLUDED


int flag[4]={0};
int *count(const char *dna_strand)
{
    int len;
    len=strlen(dna_strand);
    for(int i=0;i<len+1;i++)
    {
    if(dna_strand[i]=='A')
    {
        flag[0]++;
    }
    else if(dna_strand[i]=='C')
    {
        flag[1]++;
    }
    else if(dna_strand[i]=='G')
    {
        flag[2]++;
    }
    else if(dna_strand[i]=='T')
    {
        flag[3]++;
    }
    }
    return flag;

}
#endif // NUCLEOTIDE_H_INCLUDED
