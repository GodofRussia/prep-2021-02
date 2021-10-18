#include "num-erupter-utils.h" 

void vyvod(int n, int num) {
    if (n < 1)
	vyvod(n + 1, num);
    else if (n != 1)
	vyvod(n - 1, num);
    printf("%d", n);
    if (n != num)
	printf(" ");
    return;
}
