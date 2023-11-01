#include <stdio.h>

int main() {
    int b = 1;
    int a;

    printf("Enter a number: \n");
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        int c = i + b;
        b = b + 1;
        printf("Value: %d\n", c);
    }

    return 0;
}
