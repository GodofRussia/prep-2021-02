#include "is-simple-utils.h"
#include "num-erupter-utils.h"
#include "utils.h"


#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3
#define TST_INUM_IMPL   4


/* NOTE(stitaevskiy):
 * We use `atoi` function just for simplification and code reducing.
 * This function doesn't report conversation errors.
 * For safety program we recommend using `strtol` and its analogs.
 * (See `man atoi` and `man strtol` for more info).
 *
 * const char str_num[] = "1234";
 * char* end = NULL;
 * int val = (int) strtol(str_num, &end, 0);
 * if (end != '\0') {
 *     //ERROR
 * }
 *
 * */

int main(int argc, char* argv[]) {
    if (argc < 3) {
        return ERR_ARGS_COUNT;
    }
    char* end = NULL;
    int Test_case =  (int) strtol(argv[1], &end, 0);;
    const char* data;
    data = argv[2];

    switch (Test_case) {
        case TST_FOO_FIX: {
            size_t ticks_count = timer_from( (int) strtol(data, &end, 0));
            printf("%lu\n", (unsigned long) ticks_count);
            break;
        }
        case TST_FOO_IMPL: {
            if (argc == 4) {
                int res = custom_pow( (int) strtol(data, &end, 0), (int) strtol(argv[3], &end, 0));    // 
                printf("%d\n", res);
            } 
	    else {
                return ERR_ARGS_COUNT;
            }
	    break;
        }
        case TST_MOD_IMPL: {
            int num = (int) strtol(data, &end, 0);
	    int doom = is_simple(num);
	    printf("%d\n", doom); 
	    break;
            // TODO: Print to stdout `1` if `num` is prime number and `0` otherwise

        }
	case TST_INUM_IMPL: {
	    //int n = (int) strtol(data, &end, 0);
	    vyvod((int) strtol(data, &end, 0), (int) strtol(data, &end, 0));
	    printf("\n");
	    break; 
	}
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
