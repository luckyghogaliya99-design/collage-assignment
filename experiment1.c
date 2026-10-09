#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    double salary;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("\n--- Entered Details ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);
    printf("Salary: %.2lf\n", salary);

    return 0;
}
