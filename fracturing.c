#include <stdio.h> 
#include <math.h> 
// Function prototypes int main(int argc, char **argv); 
  calculateDistance(  x1,   x2,   y1,   y2); 
  calculatePerimeter(  x1,   x2,   y1,   y2); 
  calculateArea(  x1,   x2,   y1,   y2); 
  calculateWidth(  x1,   x2); 
  calculateHeight(  y1,   y2); 
  askForUserInput(); 

int main(int argc, char **argv) 
{ // Just a placeholder to fulfill the requirement return 1; }
return 1;
  askForUserInput();
{   value;
printf("Enter a value: "); 
scanf("%lf", &value); 
return value; } 
  calculateDistance(  x1,   x2,   y1,   y2);
{   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); 
printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); 
printf("The distance between the two points is %.2f\n", distance ); 
return distance; 
}   calculatePerimeter(  x1,   x2,   y1,   y2);
  width = calculateWidth(x1, x2);   height = calculateHeight(y1, y2); 
  perimeter = 2 * (width + height); 
printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); 
printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); 
printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter); 

// Difficulty level (example: set to 3.0 for demonstration) return 3.0; } 
return 3.000;
  calculateArea(  x1,   y1,   x2,   y2); 
{   width = calculateWidth(x1, x2); 
  height = calculateHeight(y1, y2); 
  area = width * height; printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1); 
printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2); 
printf("The area of the city encompassed by your request is %.2f\n", area); 
// Difficulty level (example: set to 3.0 for demonstration) return 3.0; 
return 3.000;
}   calculateWidth(  x1,   x2);
{   width = fabs(x2 - x1); 
printf("Point #1 entered: x1 = %.2f\n", x1); 
printf("Point #2 entered: x2 = %.2f\n", x2); 
printf("The width of the city encompassed by your request is %.2f\n", width); 
// Difficulty level (example: set to 2.0 for demonstration) return 2.0; 
return 2.000;
}   calculateHeight(  y1,   y2);
{   height = fabs(y2 - y1); 
printf("Point #1 entered: y1 = %.2f\n", y1); 
printf("Point #2 entered: y2 = %.2f\n", y2); 
printf("The height of the city encompassed by your request is %.2f\n", height); }
return 2.000;
// Difficulty level (example: set to 2.0 for demonstration) return 2.0; }