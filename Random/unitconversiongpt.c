#include <stdio.h>

int main() {
    // Conversion constants
    float cmsTokms = 0.00001;      // centimeter to kilometer
    float kmsTomls = 0.62137119;   // kilometer to miles
    float mtrTofet = 0.3280839895; // meter to feet
    float fetTokms = 0.0003048;    // feet to kilometers
    float mtrTosqft = 10.763910417;// meter to squarefoot

    char input;  // To select among the options
    float a, b;  // Conversion variables

    while (1) {
        // Display conversion options
        printf("1. Centimeters to Kilometers\n");
        printf("2. Kilometers to Miles\n");
        printf("3. Meters to Feet\n");
        printf("4. Feet to Kilometers\n");
        printf("5. Meters to Squarefoot\n");
        printf("Press q to quit\n");

        // Read user input
        scanf(" %c", &input); // Note the space before %c to consume any leftover whitespace

        // Check user input and perform conversions
        switch (input) {
            case 'q':
                printf("Quitting\n");
                return 0;

            case '1':
                printf("Enter the unit to convert: \n");
                scanf("%f", &a);
                b = a * cmsTokms;
                printf("%f cm is %f km\n", a, b);
                break;

            case '2':
                printf("Enter the unit to convert: \n");
                scanf("%f", &a);
                b = a * kmsTomls;
                printf("%f km is %f miles\n", a, b);
                break;

            case '3':
                printf("Enter the unit to convert: \n");
                scanf("%f", &a);
                b = a * mtrTofet;
                printf("%f meters is %f feet\n", a, b);
                break;

            case '4':
                printf("Enter the unit to convert: \n");
                scanf("%f", &a);
                b = a * fetTokms;
                printf("%f feet is %f km\n", a, b);
                break;

            case '5':
                printf("Enter the unit to convert: \n");
                scanf("%f", &a);
                b = a * a * mtrTosqft;
                printf("%f square meters is %f square feet\n", a, b);
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }

        // Ask if the user wants to quit or perform another conversion
        printf("Quit or Another conversion (q for quit, any other key for another conversion)?\n");
        scanf(" %c", &input);
        if (input == 'q') {
            printf("Quitting\n");
            break;
        }
    }

    return 0;
}
