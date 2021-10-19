#include <stdio.h>

int main(void){
    char a[5] = "a123\0";
    char b[5] = "b456\0";
    char c[5] = "c789\0";
    
    printf("a = '%s'\n", a);
    printf("b = '%s'\n", b);
    printf("c = '%s'\n", c);

    return 0;
}
