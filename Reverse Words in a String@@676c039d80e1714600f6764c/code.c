#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[100]; 
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    int i = 0, start = 0, end, len = strlen(str);
    while (i <= len) {
        
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            for (int j = end; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ') {
                printf(" ");
            }
            start = i + 1;
        }
        i++;
    }

    printf("\n");
    return 0;
}
