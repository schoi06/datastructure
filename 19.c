#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_ZONe(char* input, int len) {
    int count = 0;
    char temp[5];
    
    strncpy(temp, input, 4);
    //printf("%s\n", temp);
    
    for(int i=0; i<len; i+=4) {
        if(!strncmp(temp,"ZONe", 4))
            count++;
        input += 4;
        strncpy(temp, input, 4);
        //printf("%s\n", temp);
    }
    printf("%d\n", count);
}

int main() {
    char input[13];

    fgets(input, sizeof(input), stdin);

    find_ZONe(input, strlen(input));

    return 0;
}