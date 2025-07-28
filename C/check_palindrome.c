#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    
    if (isPalindrome(str, n))
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");
    return 0;
}