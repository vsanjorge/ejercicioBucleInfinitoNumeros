#include <stdio.h>

int main(void) {
  char muy_corto = 0;
    short corto = 0;
    int largo = 0;
    long muy_largo = 0;
    for (;;){
        muy_corto++;
        corto++;
        largo++;
        muy_largo++;
        printf("%d\t",muy_corto);
        printf("%d\t",corto);
        printf("%d\t",largo);
        printf("%lu\n",muy_largo);
    }
    return 0;
}