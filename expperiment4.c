Log in
Sign up for free
You said:
To write a C program that demonstrates the use of basic input/output functions (scanf and printf) for handling different data types such as int, float, char, and double.

ChatGPT said:
C Program to Demonstrate scanf() and printf() in C
This program demonstrates basic input and output functions in C using different data types: int, float, char, and double.

Program
c

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
Sample Output
text
Enter your age: 20
Enter your height in meters: 1.75
Enter your grade: A
Enter your salary: 25000.50

--- Entered Details ---
Age: 20
Height: 1.75 meters
Grade: A
Salary: 25000.50
Explanation
Data type

Format specifier

Purpose

int

%d

Reads or displays an integer

float

%f

Reads or displays a floating-point number

char

%c

Reads or displays a single character

double

%lf in scanf()

Reads a double-precision number

double

%f in printf()

Displays a double-precision number

scanf() accepts input from the user.

printf() displays output on the screen.

The & operator passes the address of a variable to scanf().

The space before %c in scanf(" %c", &grade) skips whitespace left over from previous input.

%.2f displays a floating-point value with two digits after the decimal point.

Result: The program successfully demonstrates the use of scanf() and printf() to input and output values of the int, float, char, and double data types.


You said:
To write a C program to calculate the area of a circle for a given radius.

ChatGPT said:
C Program to Calculate the Area of a Circle
Program
c

#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
Sample Output
text
Enter the radius of the circle: 5
Area of the circle = 78.54
Formula

A
=
π
r
2
Explanation
#include <stdio.h> includes the standard input/output library.

float radius, area; declares variables to store the radius and area.

const float PI = 3.14159; defines the value of pi.

scanf("%f", &radius); accepts the radius from the user.

area = PI * radius * radius; calculates the area.

printf() displays the calculated area to two decimal places.

Result: The program successfully calculates and displays the area of a circle for a given radius.


You said:
To write a C program to calculate the average of three numbers.

ChatGPT said:
C Program to Calculate the Average of Three Numbers
Program
c

#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("Average = %.2f\n", average);

    return 0;
}
Sample Output
text
Enter three numbers: 10 20 30
Average = 20.00
Formula
Average
=
num1
+
num2
+
num3
3
Average= 
3
num1+num2+num3
​
 

Learn more
Explanation
#include <stdio.h> includes the standard input/output library.

float num1, num2, num3, average; declares variables to store the three numbers and their average.

scanf("%f %f %f", &num1, &num2, &num3); accepts three numbers from the user.

average = (num1 + num2 + num3) / 3; calculates the average.

printf("%.2f", average); displays the average up to two decimal places.



#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
