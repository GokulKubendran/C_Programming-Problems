#include <stdio.h>
#include <stdlib.h>
#include "isogram.h"
int main(void){

    printf("enter a word: \n");
    char s[26];
    gets(s);
    int ans = check(s);
    if(ans == 1){
        printf("word is not a isogram\n");
     }
     else{
        printf("word is a isogram");
     }

    return 0;
}
