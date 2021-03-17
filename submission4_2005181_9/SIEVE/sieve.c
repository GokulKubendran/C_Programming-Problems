#include "sieve.h"

uint32_t sieve(uint32_t limit, uint32_t * primes, size_t max_primes) {
    if (limit == 1) {
        return 0;
    } else if (limit == 2) {
        primes[0] = 2;
        return 1;
    }

    uint32_t *numbers = malloc((limit-1) * sizeof(uint32_t)), *p = numbers+limit-1;
    while (p >= numbers)
        *(p--) = 1;

    uint32_t prime_count = 0;
    for (uint32_t i = 2; i <= limit; i++) {
        if (numbers[i-2]) {
            primes[prime_count++] = i;
            if (prime_count == max_primes)
                break;
            for (uint32_t j = i * 2; j <= limit; j += i) {
                numbers[j-2] = 0;
            }
        }
    }
    return prime_count;
}
