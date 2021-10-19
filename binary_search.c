#include <stdio.h>
#include <stdlib.h>

#define RANDOM_NUMBERS_AMOUNT 10

// Better use seperate function for allocating memory.
// Used to print address for debugging
// printf("Address to pointer 2: %p\n", (void*)&pToRandomNumberArray);

int generateSortedNumbers(int ** pToRandomNumberArray) {
    *pToRandomNumberArray = (int*) malloc(RANDOM_NUMBERS_AMOUNT * sizeof(int));

    if(*pToRandomNumberArray == NULL) {
        puts("ERROR: Could not allocate memory with malloc().");
        return 0;
    }

    for(int i = 0; i < RANDOM_NUMBERS_AMOUNT; i++) {
        (*pToRandomNumberArray)[i] = i;
    }

    return 1;
}

void printAllocatedArray(int ** pToRandomNumbersArray) {
    puts("Printing the array of the allocated memory:");

    for(int i = 0; i < RANDOM_NUMBERS_AMOUNT; i++) {
        printf("%i\n", (*pToRandomNumbersArray)[i]);
    }
}

void binarySearch(int numberToFind, int arraySize, int * pToRandomNumbersArray) {
    int iterations = 0;

    if(numberToFind > pToRandomNumbersArray[(arraySize - 1)/ 2]) {
        puts("The number is greater than half the array size.");
    } else {
        puts("The number is smaller than half the array size.");
    }
}

int main(void) {
    int * pToRandomNumberArray;
    printf("Address to pointer 1: %p\n", (void*)&pToRandomNumberArray);
    if(generateSortedNumbers(&pToRandomNumberArray)) {
        printAllocatedArray(&pToRandomNumberArray);
        free(pToRandomNumberArray);
    } else {
        return 1;
    }

    binarySearch(3, RANDOM_NUMBERS_AMOUNT, pToRandomNumberArray);
    free(pToRandomNumberArray);
    return 0;
}

