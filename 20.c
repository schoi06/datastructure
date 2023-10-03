#include <stdio.h>
#include <string.h>
#include <ctype.h>

void make_plural(char* input, int len) {
    char str[13] = "";
    int str_len = 0;
    
   
    strncpy(str, input, len-1);
    str_len = strlen(str);
   // printf("len: %ld\n", strlen(str));
    
    if(str[str_len-1] == 's') { 
        str[str_len] = 'e';
        str[str_len+1] = 's';
        str[str_len+2] = '\0';
    }
    else {    
        str[str_len] = 's';
        str[str_len+1] = '\0';
    }    
    
    printf("%s\n", str);    
}

int main() {
    char input[11];

    fgets(input, sizeof(input), stdin);

    make_plural(input, strlen(input));

    return 0;
}


