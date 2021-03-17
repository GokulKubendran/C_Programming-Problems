#ifndef BEER_H_INCLUDED
#define BEER_H_INCLUDED
void beer(int b)
{

    while(b > 1)
    {
        printf("%d bottles of beer on the wall,",b);
        printf("%d bottles of beer.\n",b);
        printf("Take one down and pass it around,");
        b--;
        printf("%d bottles of beer on the wall.\n\n",b);
    }
    printf("%d bottle of beer on the wall,",b);
    printf("%d bottle of beer.\n",b);
    printf("Take it down and pass it around,");
    printf("no more bottles of beer on the wall.\n\n");
    printf("No more bottles of beer on the wall, no more bottles of beer.\n");
    printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");
}


#endif // BEER_H_INCLUDED
