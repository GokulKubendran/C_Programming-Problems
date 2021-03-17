#ifndef ROMAN_H_INCLUDED
#define ROMAN_H_INCLUDED
void roman(int n)
{
    int th,h,t,o;
    th = n / 1000;
    h = (n-(th*1000))/100;
    t = (n%100)/10;
    o = n % 10;

    for(int i = 0 && th != 0 ; i < th ; i++)
    {
        printf("M");
    }
    switch(h)
    {
    case 1:
        {
            printf("C");
            break;
        }
    case 2:
        {
            printf("CC");
            break;
        }
    case 3:
        {
            printf("CCC");
            break;
        }
    case 4:
        {
            printf("CD");
            break;
        }
    case 5:
        {
            printf("D");
            break;
        }
    case 6:
        {
            printf("DC");
            break;
        }
    case 7:
        {
            printf("DCC");
            break;
        }
    case 8:
        {
            printf("DCCC");
            break;
        }
    case 9:
        {
            printf("CM");
            break;
        }
    default:
        printf("");

    }
    switch(t)
    {
    case 1:
        {
            printf("X");
            break;
        }
    case 2:
        {
            printf("XX");
            break;
        }
    case 3:
        {
            printf("XXX");
            break;
        }
    case 4:
        {
            printf("XL");
            break;
        }
    case 5:
        {
            printf("L");
            break;
        }
    case 6:
        {
            printf("LX");
            break;
        }
    case 7:
        {
            printf("LXX");
            break;
        }
    case 8:
        {
            printf("LXXX");
            break;
        }
    case 9:
        {
            printf("XC");
            break;
        }
    default:
        printf("");

    }
    switch(o)
    {
    case 1:
        {
            printf("I");
            break;
        }
    case 2:
        {
            printf("II");
            break;
        }
    case 3:
        {
            printf("III");
            break;
        }
    case 4:
        {
            printf("IV");
            break;
        }
    case 5:
        {
            printf("V");
            break;
        }
    case 6:
        {
            printf("VI");
            break;
        }
    case 7:
        {
            printf("VII");
            break;
        }
    case 8:
        {
            printf("VIII");
            break;
        }
    case 9:
        {
            printf("IX");
            break;
        }
    default:
        printf("");

    }

    printf("%d %d %d %d\n",th,h,t,o);
}




#endif // ROMAN_H_INCLUDED
