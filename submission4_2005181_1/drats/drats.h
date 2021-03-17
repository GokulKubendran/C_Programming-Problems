#ifndef DRATS_H_INCLUDED
#define DRATS_H_INCLUDED

void points(float x,float y)
{
    float distance = sqrt(pow(x,2) + pow(y,2));
    if (distance <= 1)
    {
        printf("points earned: 10");
    }
    if (distance>1 && distance <= 5)
        {
            printf("points earned: 5");
        }
    if (distance >5 && distance <= 10)
    {
        printf("points earned : 1");
    }
    if (distance>10)
    {
        printf("points earned : 0");
    }
}


#endif // DRATS_H_INCLUDED
