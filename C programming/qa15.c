// write a program to pass two strings into the function using pointer and check wheather strings are anagram or not

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

// Function to check if two strings are anagrams
int areAnagrams(char *str1, char *str2) {
    int freq[26] = {0}; // Array to store the frequency of each character

    // Calculate frequency of characters in first string
    while (*str1) {
        if (*str1 >= 'a' && *str1 <= 'z') {
            freq[*str1 - 'a']++;
        }
        str1++;
    }

    // Subtract frequency of characters in second string
    while (*str2) {
        if (*str2 >= 'a' && *str2 <= 'z') {
            freq[*str2 - 'a']--;
        }
        str2++;
    }

    // Check if frequencies are all zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0; // Not anagrams
        }
    }
    return 1; // Anagrams
}

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
