#include <stdio.h>
#include <stdlib.h>

#include "fibonacci.h"

int main(int argc, char *argv[])
{
    int nbr_terms = strtol(argv[argc - 1], NULL, 10);

    fibonacci(nbr_terms);

    getchar();
    return 0;
}
