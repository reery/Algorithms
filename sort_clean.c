#include <stdio.h>
#include <string.h>
#define SIZE 100
#define LINES 1000
#define TMP 100
#define MAXFIELDS 3

int main(void){
    int toSort[LINES][MAXFIELDS][TMP];
    int line = 0, i = 0, j = 0, k = 0;
    char tempSize[SIZE];
    int x = 0, y = 0, z = 0, a = 0;
    char icomp[20] = "relativeDomainName:\0";
    char jcomp[10] = "zoneName:\0";
    char kcomp[9] = "aRecord:\0";
    int counter = 0;
    
    while ((tempSize[x] = getchar()) != EOF) {
        if (tempSize[x] == ':') {
		tempSize[x+1] = '\0';
            //abc
            if((strcmp(tempSize, icomp)) == 0){
                k = 0;
                while (getchar() != ' ')
                    continue;
                while ((toSort[line][0][k] = getchar()) != '\n') {
                    k++;
                }
	
		toSort[line][0][k+1] = '\0';
		
                counter++;
                if (counter == MAXFIELDS){
                    counter = 0;
                    line++;
                }
		memset(tempSize, 0, sizeof tempSize);
                x = 0;
                continue;
            }
            //def
            if((strcmp(tempSize, jcomp)) == 0){
                k = 0;
                while (getchar() != ' ')
                        continue;
                while ((toSort[line][1][k] = getchar()) != '\n') {
                    k++;
                }

		toSort[line][1][k+1] = '\0';               

		counter++;
                if (counter == MAXFIELDS){
                    counter = 0;
                    line++;
                }
		memset(tempSize, 0, sizeof tempSize);
                x = 0;
                continue;
            }
            //ghi
            if((strcmp(tempSize, kcomp)) == 0){
                k = 0;
                while (getchar() != ' ')
                        continue;
                while ((toSort[line][2][k] = getchar()) != '\n') {
                k++;
                }

         	toSort[line][2][k+1] = '\0';

		counter++;
                if (counter == MAXFIELDS){
                    counter = 0;
                    line++;
                }
		memset(tempSize, 0, sizeof tempSize);
                x = 0;
                continue;
            }
        }
	if (tempSize[x] == ' '){
                printf("\nFound invalid character. Aborting.\n");
                return 0;
        }
        x++;
    }
    
    for (y = 0; y <= line; y++){
        for (z = 0; z < MAXFIELDS; z++){
            for (a = 0; toSort[y][z][a] != '\0'; a++){
                printf("%c", toSort[y][z][a]);
            }
        }
    }
    return 0;
}
