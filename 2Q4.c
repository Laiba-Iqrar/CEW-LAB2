#include <stdio.h>

int main() {
    char sentence[1000];
    int i;

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sentence);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - ('a' - 'A');
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] + ('a' - 'A');
        }
    }

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
