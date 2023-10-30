#include <stdlib.h>
#include "guessing.h"

unsigned int guess_the_number(void)
{
    // Implementierung einer binären Suche.
    unsigned int ub = 99999; // Wir setzen eine obere Schranke auf 99999, da dies der maximale Code sein kann.
    unsigned int lb = 0; // Wir setzen die untere Schranke auf 0.

    unsigned int combination; // Variable zum Finden der Mitte zwischen ub und lb.
    int eval; // Variable, die im Folgenden zum Aufrufen von evaluate genutzt wird.

    do {
        combination = (lb + ub) / 2;
        eval = evaluate(combination); // Wir evaluieren, ob die Mitte zwischen lb und ub die gesuchte Zahl ist.

        if (eval == 1) { // Wenn sie größer ist als die gesuchte Zahl, wird die untere Grenze auf die combination gesetzt, da die gesuchte Zahl ja auf keinen Fall kleiner sein kann.
            lb = combination;
        } else if (eval == -1) { // Wenn sie kleiner ist als die gesuchte Zahl, wird die obere Grenze angepasst.
            ub = combination;
        }

    } while (eval != 0); // Wenn eval 0 ist, enstpricht combination der gesuchten Zahl und wir beenden die Schleife.

    return combination; // Hierhin kommen wir nur, wenn eval = 0 ist und somit wenn combination der gesuchten Zahl entspricht. combination wird also ausgegeben.
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
