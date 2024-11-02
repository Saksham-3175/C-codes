// C program to print:
// 1. Area of a rectangle using inputs by user.
// 2. Area of a circle using inputs by user.
//  3. Volume of cylinder using inputs by user.
//  4. Celcius to Farenheit conversion using inputs by user.
//  5. Simple interest using inputs by user.

#include <stdio.h>
#include <math.h>

// Function for Area of rectangle
void area_of_rectangle()
{
  float length, breadth, area;
  printf("Enter the length and breadth of the rectangle: ");
  scanf("%f %f", &length, &breadth);
  area = length * breadth;
  printf("The area of the rectangle is %.2f\n", area);
}
// Function for Area of circle
void area_of_circle()
{
  float radius, area;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area = 3.14 * radius * radius;
  printf("The area of the circle is %.2f\n", area);
}

// Function for Volume of cylinder
void volume_of_cylinder()
{
  float radius, height, volume;
  printf("Enter the radius and height of the cylinder: ");
  scanf("%f %f", &radius, &height);
  volume = 3.14 * radius * radius * height;
  printf("The volume of the cylinder is %.2f\n", volume);
}

// Function to convert Celcius to Farenheit
void celcius_to_farenheit()
{
  float celcius, farenheit;
  printf("Enter the temperature in Celcius: ");
  scanf("%f", &celcius);
  farenheit = (celcius * 9 / 5) + 32;
  printf("The temperature in Farenheit is %.2f\n", farenheit);
}

// Function for Simple Interest
void simple_interest()
{
  float principal, rate, time, interest;
  printf("Enter the principal, rate and time: ");
  scanf("%f %f %f", &principal, &rate, &time);
  interest = (principal * rate * time) / 100;
  printf("The simple interest is %.2f\n", interest);
}

// Main funciton
int main()
{
  int choice;

  while (1)
  {
    // Printing the options.
    printf("0. Exit\n");
    printf("1. Area of Rectangle\n");
    printf("2. Area of Cirlce\n");
    printf("3. Volume of Cylinder\n");
    printf("4. Celcius to Farenheit\n");
    printf("5. Simple Interest\n");

    // Prompting the user to enter a choice.
    printf("Enter your choice or 0 to exit: ");
    scanf("%d", &choice);

    // Handling the user's choice.
    switch (choice)
    {
    case 0:
      printf("Quitting\n");
      return 0;

    case 1:
      area_of_rectangle();
      break;

    case 2:
      area_of_circle();
      break;

    case 3:
      volume_of_cylinder();
      break;

    case 4:
      celcius_to_farenheit();
      break;

    case 5:
      simple_interest();
      break;

    default:
      printf("Invalid Choice\n");
      break;
    }
  }
  return 0;
}