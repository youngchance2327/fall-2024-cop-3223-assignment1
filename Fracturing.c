//********************************************************
// Fracturing.c(assignment 1)
// Author: Chance Young
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: uses various functions to calculate properties of a circle, including distance, perimeter, area, width, and height between two points. 
// Input: (x1,y1),(x2,y2)
//
// Output: properties of a circle, including distance, perimeter, area, width, and height between two points. 
// //********************************************************
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

// Function to calculate the perimeter (circumference of the circle)
double calculatePerimeter(double distance) {
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the circle %.2f\n", perimeter);
    return 3.0;  // Difficulty on a scale from 1.0 to 5.0
}

// Function to calculate the area of the circle
double calculateArea(double distance) {
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the circle %.2f\n", area);
    return 2.5;  // Difficulty on a scale from 1.0 to 5.0
}

// Function to calculate the width (diameter in this case)
double calculateWidth(double distance) {
    printf("The width of the circle %.2f\n", distance);
    return 1.0;  // Difficulty on a scale from 1.0 to 5.0
}

// Function to calculate the height (same as width since it's a circle)
double calculateHeight(double distance) {
    printf("The height of the circle %.2f\n", distance);
    return 1.0;  // Difficulty on a scale from 1.0 to 5.0
}



// Main function
int main(int argc, char **argv) {
    double x1, y1, x2, y2;

    // Get user input for points directly using scanf
    printf("Enter x1 for Point #1: ");
    scanf("%lf", &x1);
    printf("Enter y1 for Point #1: ");
    scanf("%lf", &y1);
    printf("Enter x2 for Point #2: ");
    scanf("%lf", &x2);
    printf("Enter y2 for Point #2: ");
    scanf("%lf", &y2);

    // Perform calculations based on the points
    double distance = calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0;
}