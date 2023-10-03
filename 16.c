#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_num(char* input, int len) {
    char ch[10] = "";
    int j = 0;
    
    for (int i=0; i<len; i++) {
        if (!isdigit(input[i])) {
            ch[j++] = input[i];
        }
    }
    memset (input,'\0', len);
    strncpy(input, ch, strlen(ch));
}

int main() {
    char input[10];
    int len;

    fgets(input, sizeof(input), stdin);

    len = strlen(input);
    remove_num(input, len);
    printf("%s\n", input);

    return 0;
}