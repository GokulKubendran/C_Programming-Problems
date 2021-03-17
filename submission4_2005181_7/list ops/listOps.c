
#include <stdio.h>
#include <stdlib.h>
#include"listOps.h"

int main()
{
    int ch;
    while(1) // To continuously perform the operations.
    {
        printf("Single Linked List Operations : \n");
        printf("1. Append \n");
        printf("2. length\n");
        printf("3. concatenate \n");
        printf("4. reverse \n");
        printf("5. Display \n");
        printf("6. Quit \n");

        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: append();
            break;


            case 2: len = length();
                    printf("Length : %d\n\n",len);
            break;

            case 3: concatenate();
            break;

            case 4: reverse();
            break;

            case 5 : display();
            break;

            case 6:  exit(1);
            break;



            default:
            printf("Invalid Input.\n\n");

        }

    }
    return 0;
}
