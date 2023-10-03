#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_last_strings(char* input, int len) {
    
    if(input[len-3] == 'e') 
        printf("er\n");
    
    if(input[len-4] == 'i') 
        printf("ist\n");
}

int main() {
    char input[20];

    fgets(input, sizeof(input), stdin);

    print_last_strings(input, strlen(input));

    return 0;
}