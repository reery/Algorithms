#include <stdio.h>
#include <string.h>
#define SIZE 1000000
#define LINES 10000
#define TMP 100
#define MAXFIELDS 3

int main(void){
    char toSort[LINES][MAXFIELDS][TMP];
    int line = 0, i = 0, j = 0, k = 0;
    char tempSize[SIZE];
    int x = 0, y = 0, z = 0, a = 0;
    char icomp[5] = "abc:\0";
    char jcomp[5] = "def:\0";
    char kcomp[5] = "ghi:\0";
    int counter = 0;
    
    printf("Reading file...\n");
    
    while ((tempSize[x] = getchar()) != EOF) {
        if (tempSize[x] == ':') {
            //printf("\nComparing '%s'\n", tempSize);

            //abc
            printf("\nComparing '%s' to '%s', result is %d.\n", tempSize, icomp, strcmp(tempSize, icomp));
            if((strcmp(tempSize, icomp)) == 0){
                k = 0;
                while (getchar() != ' ')
                    continue;
                while ((toSort[line][0][k] = getchar()) != '\n') {
                    k++;
                }
                printf("\nI found '%s' and recorded it to %d-0.", toSort[line][0], line);
                counter++;
                if (counter == MAXFIELDS){
                    counter = 0;
                    line++;
                }
                x = 0;
                continue;
            }
            //def
            printf("\nComparing '%s' to '%s', result is %d.\n", tempSize, jcomp, strcmp(tempSize, jcomp));
            if((strcmp(tempSize, jcomp)) == 0){
                k = 0;
                while (getchar() != ' ')
                        continue;
                while ((toSort[line][1][k] = getchar()) != '\n') {
                    k++;
                }
                printf("\nI found '%s' and recorded it to %d-1.", toSort[line][1], line);
                counter++;
                if (counter == MAXFIELDS){
                    counter = 0;
                    line++;
                }
                x = 0;
                continue;
            }
            //ghi
            printf("\nComparing '%s' to '%s', result is %d.\n", tempSize, kcomp, strcmp(tempSize, kcomp));
            if((strcmp(tempSize, kcomp)) == 0){
                k = 0;
                while (getchar() != ' ')
                        continue;
                while ((toSort[line][2][k] = getchar()) != '\n') {
                k++;
                }
                printf("\nI found '%s' and recorded it to %d-2.", toSort[line][2], line);
                counter++;
                if (counter == MAXFIELDS){
                    counter = 0;
                    line++;
                }
                x = 0;
                continue;
            }
        }
        x++;
    }
    printf("Printing file...\n");
    
    for (y = 0; y <= line; y++){
        for (z = 0; z < MAXFIELDS; z++){
            for (a = 0; a < TMP; a++){
                printf("%c", toSort[y][z][a]);
            }
        }
    }
    return 0;
}
