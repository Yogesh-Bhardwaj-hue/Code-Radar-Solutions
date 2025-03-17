#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left, right, isPalindrome = 1; 
    scanf("%s", str);
    int length = strlen(str);
    left = 0;
    right = length - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; 
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}