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

        free(memoryaddres);
        memoryaddres = NULL;
    }

    return 0;
}