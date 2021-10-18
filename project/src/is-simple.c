#include "is-simple-utils.h"

int is_simple (int num) {
    if (num == 1 || num == 0) return 0;
    int res = 1;
    for (int i = 2; i < num; ++i) 
	if (!(num % i)) res = 0;
    return res;
}
