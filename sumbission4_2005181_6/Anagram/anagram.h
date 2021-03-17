#ifndef ANAGRAM_H_INCLUDED
#define ANAGRAM_H_INCLUDED


#define MAX_STR_LEN 20

#include<stddef.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

enum anagram_status {
   UNCHECKED = -1,
   NOT_ANAGRAM = 0,
   IS_ANAGRAM = 1
};

struct candidate {
   enum anagram_status is_anagram;
   char *word;
};

struct candidates {
   struct candidate *candidate;
   size_t count;
};


void anagrams_for(char *word, struct candidates *candidates);


#endif // ANAGRAM_H_INCLUDED
