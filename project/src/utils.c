#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    for (int i = 0; i <= from; ++i) {
        ++counter;
        printf("%d", (from - i));
	if (i != from) 
	    printf(" ");
    }
    if (from >= 0) printf("\n");
    return counter;
}



int custom_pow(int base, int power) {
    if (power == 0) 
	return 1;
    int res = 1; 
    int pow = power;
    if (pow > 0)
	while (pow) {
	    res *= base;
	    --pow;
	}
    else
	while (pow) 
	{
	   res /= base;
	   ++pow;
        }
    return res;
}

