#include <stdio.h>
#include <ctype.h>
#define ARRAY_ROWS 6
#define ARRAY_COLUMNS 40

void printThaShizzle(char array[ARRAY_ROWS][ARRAY_COLUMNS]);

int main(void) {
  char array[ARRAY_ROWS][ARRAY_COLUMNS] = { "Tokyo", "London", "Rome", "Donlon", "Kyoto", "Paris" };
  char new_array[ARRAY_ROWS][ARRAY_COLUMNS];

  printThaShizzle(array);
  putchar('\n');

  int word_length = 0;
  int i, j;
  int k, l;
  int m, n;

  for(i = 0, k = 0; i < ARRAY_ROWS; i++, k++) {
    for(j = 0, l = 0; array[i][j] != '\0'; j++, l++) {
      for(m = 0; m < ARRAY_ROWS; m++) {
        for(n = 0; n < ARRAY_COLUMNS; n++) {

        }
      }



    }
  }



  return 0;
}

void printThaShizzle(char array[ARRAY_ROWS][ARRAY_COLUMNS]) {
  int i, j;

  for(i = 0; i < ARRAY_ROWS; i++) {
    for(j = 0; array[i][j] != '\0'; j++) {
      putchar(array[i][j]);
    }

    putchar('\n');
  }

}
