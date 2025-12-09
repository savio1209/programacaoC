#include <stdio.h>

int main() {

    int i = 1;

    do 
    {
        printf("%d\n", i); // será executada apenas uma vez.
        i++;

    } while (i == 5); // condição falsa, mas garantida para ser executada.

    return 0;
}