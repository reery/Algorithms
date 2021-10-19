#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

int main(void){
        int i = 0, j = 0, k = 0;
		int ch = 1;
		int line = 1;
		
		while (1){
				if (line >= 1){				
					printf("    <hosts>\n");
					printf("      <host/>\n");
					printf("      <domain>");
					
					for (i = 0; (ch = getchar()) != '\0'; i++){
						if (ch == EOF)
							return 0;
					
						if (isalpha(ch)){
							printf("%c", ch);
							continue;
						}
						
						if (ch == '\n')
							break;
					}
					
					if (ch == '\n'){
						ch = '.';
						putchar(ch);
					}
					
					for (i = 0; (ch = getchar()) != '\0'; i++){
						if (isalpha(ch) || ispunct(ch)){
							printf("%c", ch);
							continue;
						}
						if (ch == '\n')
							break;
					}
					
					printf("</domain>");
					putchar(ch);
					printf("      <rr>A</rr>\n");
					printf("      <ip>");
					
					for (i = 0; (ch = getchar()) != '\0'; i++){
						if (isalnum(ch) || ispunct(ch)){
							printf("%c", ch);
							continue;
						}
						if (ch == '\n')
							break;
					}
					
					printf("</ip>\n");
					printf("      <mxprio/>\n");
					printf("      <mx/>\n");
					printf("      <descr/>\n");
					printf("    </hosts>\n");

					line++;
				}
		}
	return 0;
}