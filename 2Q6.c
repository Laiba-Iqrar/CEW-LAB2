#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    //A dd the inches
    result.inches = d1.inches + d2.inches;

    // If the sum of inches exceeds 12, carry over to feet
    if (result.inches >= 12) {
        result.inches -= 12;
        result.feet = d1.feet + d2.feet + 1;
    } else {
        result.feet = d1.feet + d2.feet;
    }
    return result;
}

int main() {
    struct Distance distance1, distance2, sum;
    // Input the first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inches);

    // Input the second distance
    printf("Enter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inches);
    sum = addDistances(distance1, distance2);
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);
    return 0;
}
