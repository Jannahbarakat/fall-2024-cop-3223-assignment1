#include <stdio.h>
#include <math.h>

#define pi 3.14159

double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char** argv) {
    // argc is the number of arguments passed in
    // argv is the array of arguments passed in
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}

//Bonus for getting User Input
double askForUserInput() {
    double value;
    printf("Please enter a value:");
    scanf("%lf", &value);
    return value;
}

//Calculating distance betwen 2 points
double calculateDistance() {
    //Asking what the 2 points are
    printf("Enter coordinates of the first point (x1,y1):\n");
    double x1 = askForUserInput();
    double y1 = askForUserInput();

    printf("Enter coordinates of the second point (x2,y2):\n");
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    //Using the distance formula to calculate the distance
    double distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    //Outputs
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1,y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x1,y1);
    printf("The distance between the two points is %.2f\n", distance);

    //Give the distance answer
    return distance;
}

//Calculating Perimeter/Circumference of a Circle
double calculatePerimeter(){
    double diameter = calculateDistance();
    double perimeter = pi*diameter;
    
    //Output results
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    //How difficult I found this function from 1-5
    return 3.0;
}

//Calculating area of the circle
double calculateArea() {
    double diameter = calculateDistance();

    //Calculate the area
    double radius = diameter / 2;
    double area = pi*radius*radius;
    
    //Output results
    printf("The area of the city encompassed by your request is %.2f\n", area);

    //How difficult I found this function from 1-5
    return 3.0;
}

//Calculating width
double calculateWidth() {
    //Get the two points
    printf("Enter the coordinates for Point #1 (x1, y2):\n");
    double x1 = askForUserInput();
    double y1 = askForUserInput();

    printf("Enter coordinates for Point #2 (x2, y2):\n");
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    //Calculate Floating-Point Absolute Value
    double width = fabs(x2 - x1);

    //Output results
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    //How difficult I found this function from 1-5
    return 3.0;
}

//Calculate height
double calculateHeight() {
    //Asking what the 2 points are
    printf("Enter coordinates for Point #1 (x1, y1):\n");
    double x1 = askForUserInput();
    double y1 = askForUserInput();

    printf("Enter coordinates for Point #2 (x2, y2):\n");
    double x2 = askForUserInput();
    double y2 = askForUserInput();

    //Calculate Floating-Point Absolute Value
    double height = fabs(y2-y1);

    //Output results
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1,y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2,y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    //How difficult I found this function from 1-5
    return 3.0;

}
