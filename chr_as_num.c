#include <stdio.h>

int main(){

    char ch = 'A';
    printf("The character %c has character code %d\n", ch ,ch);
    
    for(; ch <= 'Z'; ++ch){
        printf("%2c", ch);
    }
    printf("\n");
    printf("%ld", sizeof(int));
    printf("\n");
    return 0;
}
