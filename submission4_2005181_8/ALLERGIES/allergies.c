#include "allergies.h"
#include <stdlib.h>
#include <stdio.h>
bool is_allergic_to(int allergy, int score)
{
    return score & (1 << allergy);
}

allergen_list_t get_allergens(int score)
{
    allergen_list_t result = { 0 };
    int count = 0;
    for (int i=0; i<ALLERGEN_COUNT; i++)
        {
        if ((1<<i) & score) {
            result.allergens[i] = true;
            count++;
        }
    }
    result.count = count;
    return result;
}
