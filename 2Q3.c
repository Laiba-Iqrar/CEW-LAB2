#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, b = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            b = 1;
            break;
        }
    }
    // If both strings are of different lengths, they are not equal
    if (str1[i] != '\0' || str2[i] != '\0') {
        b = 1;
    }
    if (b == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}
