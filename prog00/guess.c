#include <stdlib.h>
#include "guessing.h"

unsigned int guess_the_number(void)
{
    unsigned int ub = 99999;
    unsigned int lb = 0;

    unsigned int combination;
    int eval;

    do {
        combination = (lb + ub) / 2;
        eval = evaluate(combination);

        if (eval == 1) {
            lb = combination;
        } else if (eval == -1) {
            ub = combination;
        }

    } while (eval != 0);

    return combination;
}

unsigned int bogo_the_number(void)
{
    unsigned int combination;
    int eval;

    do {

        combination = rand() % 99999 + 0;
        eval = evaluate(combination);

    } while (eval != 0);

    return combination;
}