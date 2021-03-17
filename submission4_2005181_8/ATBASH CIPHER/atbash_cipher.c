#include "atbash_cipher.h"
#include <stdlib.h>
#include <string.h>
#define ATBASH(x) (25 - x + 'a' * 2)

int main(){

char *atbash_encode(const char *input)
{
    int len = strlen(input);
    len += len / 5 + 1;
    char *cipher = (char *) malloc(len);
    memset(cipher, 0, len);
    int index = 0, group_counter = 0;
    while (*input) {
        int c = *input;
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
        if (c >= 'a' && c <= 'z') {
            if (group_counter > 0 && group_counter % 5 == 0) {
                cipher[index++] = ' ';
            }
            cipher[index++] = ATBASH(c);
            group_counter++;
        }
        if (c >= '0' && c <= '9') {
            if (group_counter > 0 && group_counter % 5 == 0) {
                cipher[index++] = ' ';
            }
            cipher[index++] = c;
            group_counter++;
        }
        input++;
    }
    if (cipher[index - 1] == ' ') {
        cipher[index - 1] = '\0';
    }
    return cipher;
}

char *atbash_decode(const char *input)
{
    int len = strlen(input) + 1;
    char *plain = (char *) malloc(len);
    memset(plain, 0, len);
    int index = 0;
    while (*input) {
        if (*input >= 'a' && *input <= 'z') {
            plain[index++] = ATBASH(*input);
        }
        if (*input >= '0' && *input <= '9') {
            plain[index++] = *input;
        }
        input++;
    }
    return plain;
}
return 0;
}
