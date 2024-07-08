#include <stdio.h>
int main()
{
    // 1 sq m = 10.763910417 sq foot
    // Declare all the variables
    float a, b;                     // Conversion variables
    float cmsTokms = 0.00001;       // centimeter to kilometer
    float kmsTomls = 0.62137119;    // kilometer to miles
    float mtrTofet = 0.3280839895;  // meter to feet
    float fetTokms = 0.0003048;     // feet to kiometers
    float mtrTosqft = 10.763910417; // meter to squarefoot
    char q;                         // To end the program
    char input;                     // To select among the options.
    // Starting Prompt

    while (1)
    {
        printf("1. Centimeters to Kilometers\n");
        printf("2. Kilometers to Miles\n");
        printf("3. Meters to Feet\n");
        printf("4. feet to kiometers\n");
        printf("5. Meter to Squarefoot\n");
        printf("Press q to quit\n");
        scanf("%c", &input);

        switch (input)
        {

        case 'q':
            printf("Quitting");
            goto end;
            break;

        case '1':
            printf("Enter the unit to convert: \n");
            scanf("%f", &a);
            b = a * cmsTokms;
            printf("%f cm is %f km", a, b);
            break;

        case '2':
            printf("Enter the unit to convert: \n");
            scanf("%f", &a);
            b = a * kmsTomls;
            printf("%f km is %f ml", a, b);
            break;

        case '3':
            printf("Enter the unit to convert: \n");
            scanf("%f", &a);
            b = a * mtrTofet;
            printf("%f mtr is %f ft", a, b);
            break;

        case '4':
            printf("Enter the unit to convert: \n");
            scanf("%f", &a);
            b = a * fetTokms;
            printf("%f ft is %f km", a, b);
            break;

        case '5':
            printf("Enter the unit to convert: \n");
            scanf("%f", &a);
            b = a * a * mtrTosqft;
            printf("%f mtr is %f sqft", a, b);
            break;

        default:
            break;
        }
    }

end:

    return 0;
}