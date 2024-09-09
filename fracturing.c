//********************************************************
// fracturing.c
// Author: Kenny Singh
// Class: COP 3223, Professor Parra
// Purpose: This simple program asks the user for coordinates and provides the area 
//and perimeter of a city. 
// The main purpose of this assignment is to see if I can
// Use the math.h function to solve the area and perimeter.
// Use the double function to collect input from the user.
// Use the printf function to display output to the user.
// Use scanf 
// Write a complete C program that interacts with the user via the terminal.
// Input: None
//
// Output: (to the command line) A breif Message
// //********************************************************
#include <stdio.h> 
#include <math.h> 

#ifndef M_PI
  #define M_PI 3.14159265358979323846  // Define M_PI if not available
#endif
// Function prototypes int main(int argc, char **argv); 
  calculateDistance( int x1, int x2, int y1, int y2); 
  calculatePerimeter( int x1,  int x2, int  y1, int  y2); 
  calculateArea( int x1, int  x2,  int y1, int  y2); 
  calculateWidth( int x1, int  x2); 
  calculateHeight( int y1, int y2); 
  askForUserInput(); 

int main(int argc, char **argv) 
{ // Just a placeholder to fulfill the requirement return 1; }
return 1;
 askForUserInput();
 int value;
printf("Enter a value: "); 
scanf("%lf", &value);
return value; }
{ double void askForUserInput(double *x1, double *x2, double *y1, double *y2) {
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", x1, y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", x2, y2);
}
  double calculateDistance=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); 
printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); 
printf("The distance between the two points is %.2f\n", int distance ); 
return int distance; 
}   
{calculatePerimeter( int x1,  int x2, int y1, int y2);
  double width = calculateWidth(x1, x2);  double height = calculateHeight(y1, y2); 
  double perimeter = 2 * (width + height); 
printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); 
printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); 
printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter); 

// Difficulty level (example: set to 3.0 for demonstration) return 3.0; } 
return 3.000;}
 { calculateArea( int x1, int y1, int x2, int y2); 
   double width = calculateWidth(x1, x2); 
  double height = calculateHeight(y1, y2); 
    double area = calculateCircleArea(x1, x2, y1, y2);
    double calculateCircleArea(double x1, double x2, double y1, double y2) 

// Function to ask for user input
{ void askForUserInput(double *x1, double *x2, double *y1, double *y2) {
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", x1, y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", x2, y2);
}

// Function to calculate the distance (which is the radius in this case)
double calculateDistance(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the area of the circle using the radius
double calculateCircleArea(double x1, double x2, double y1, double y2) {
    double radius = calculateDistance(x1, x2, y1, y2);
    return M_PI * radius * radius;  // Area formula: π * r^2
}

int main(int argc, char **argv) 

    double radius = calculateDistance(x1, x2, y1, y2);
    return M_PI * radius * radius;  // Area formula: π * r^2
}
    printf("The area of the circle is %.2f\n", area);
printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); 
printf("The area of the city encompassed by your request is %.2f\n", area); 
// Difficulty level (example: set to 3.0 for demonstration) return 3.0; 
return 3.000;
}   
calculateWidth( x1,   x2);
{   width = fabs(x2 - x1); 
printf("Point #1 entered: x1 = %.2f\n", x1); 
printf("Point #2 entered: x2 = %.2f\n", x2); 
printf("The width of the city encompassed by your request is %.2f\n", width); 
// Difficulty level (example: set to 2.0 for demonstration) return 2.0; 
return 2.000;
}   
calculateHeight( int y1, int y2);
 { height = fabs(y2 - y1); 
printf("Point #1 entered: y1 = %.2f\n", y1); 
printf("Point #2 entered: y2 = %.2f\n", y2); 
printf("The height of the city encompassed by your request is %.2f\n", height); 
return 2.000;}
// Difficulty level (example: set to 2.0 for demonstration) return 2.0; }