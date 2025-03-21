#include <stdio.h>
#include <string.h>

int main() {
    #include <stdio.h>

int main() {
    char str[100];
    char result[100]; 
    int i = 0, j = 0;
    fgets(str);  
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0'; 
}
    int len = strlen(result);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    printf("\n");
    return 0;
}
