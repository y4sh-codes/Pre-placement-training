#include <stdio.h>
#include <string.h>

void reverseString(char *str, int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    reverseString(str, n);
    printf("Reversed string: %s\n", str);
    return 0;
}