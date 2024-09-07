//********************************************************
// fracturing.c
// Author: Julia Keating
// Date: 9/6/2024
// Class: COP 3223, Professor Parra
// Purpose: Learn how to write a program that will house 
// many internal functions
// Input: Coordinate Points
//
// Output: Distance between points, perimeter, area, height, 
// width
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159


double askForXPoint() {
    double xPoint;
    printf("Insert your x coordinate: ");
    scanf("%lf", &xPoint);
 
    return xPoint;

}

double askForYPoint() {
    double yPoint;
    printf("Insert your y coordinate: ");
    scanf("%lf", &yPoint);
 
    return yPoint;

}

double distanceFormula(double x1, double y1, double x2, double y2) {

    double distance = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);

    return distance;

}

double calculateDistanceBetweenPoints() {

    double xPointOne = askForXPoint();
    double yPointOne = askForYPoint();
    double xPointTwo = askForXPoint();
    double yPointTwo = askForYPoint();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\n", xPointOne, yPointOne, xPointTwo, yPointTwo);
    double distanceBetweenPoints = distanceFormula(xPointOne, yPointOne, xPointTwo, yPointTwo);
    
    return distanceBetweenPoints;
    
}

double calculateDistance() {

    double distance = calculateDistanceBetweenPoints();
    printf("The distance between the two points is %f\n", distance);

    return distance;

}

double calculatePerimeter() {

    double diameter = calculateDistanceBetweenPoints();
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 4.0;

}

double calculateArea() {

     double diameter = calculateDistanceBetweenPoints();
     double radius = diameter/2;
     double area = PI * pow(radius, 2);
     printf("The area of the city encompassed by your request is %f\n", area);

     return 3.0;

}

double calculateWidth() {

    double diameter = calculateDistanceBetweenPoints();
    printf("The width of the city encompassed by your request is %f\n", diameter);

    return 1.0;

}

double calculateHeight() {

    double diameter = calculateDistanceBetweenPoints();
    printf("The height of the city encompassed by your request is %f\n", diameter);

    return 1.0;

}


int main(int argc, char **argv) {
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;

}
