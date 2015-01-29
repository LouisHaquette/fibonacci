#include "fibonacci.h"

void fibonacci_computing(unsigned int *lastTerm, unsigned int *oldTerm)
{
    unsigned int tmp_oldTerm = *oldTerm;
    *oldTerm = *lastTerm;

    *lastTerm = tmp_oldTerm + *lastTerm;

    return;
}

void fibonacci(unsigned int nbr_terms)
{
    unsigned int i = 0;

    unsigned int lastTerm = 0;
    unsigned int oldTerm = 1;

    for (i = 0 ; i < nbr_terms ; i++) {
        fibonacci_computing(&lastTerm, &oldTerm);
        printf("%d", lastTerm);

        if (i + 1 != nbr_terms) {
            printf(" - ");
        } else {
            printf("\n");
        }
    }

    printf("le rapport entre %d et %d (%d / %d) = %lf\n",
           lastTerm, oldTerm, lastTerm, oldTerm, (double) lastTerm / oldTerm);

    return;
}
