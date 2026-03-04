#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    int i = 0;
    int* memoryaddres = NULL;

    printf("Introduce an integer: ");
    scanf("%d", &number);

    memoryaddres = (int*)malloc(sizeof(int) * number);

    if (memoryaddres == NULL) {
        printf("Memery issue :c\n");
    } else {
        for (i = 0; i < number; i++) {
            memoryaddres[i] = i;
            printf("Stored value %d at %p\n", i, &memoryaddres[i]);
        }

        /*
        //Using memory as list what really does is getting the address
         from malloc and using i*<dataype> (the datatype is defined by the type of pointer at the begining) to asign the value to the corresponding offset
         memoryadress[0 * 4] = Add '0' to my initial memory offset -> ...9e0
         memoryadress[1 * 4] = Add '4' to my initial memory offset -> ...9e4
         memoryadress[2 * 4] = Add '8' to my initial memory offset -> ...9e8
         memoryadress[3 * 4] = Add '12' to my initial memory offset -> ...9ec
         ..
        */

        free(memoryaddres);
        memoryaddres = NULL;
    }

    return 0;
}