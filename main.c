#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milesTraveled, gallonsOfGasUsed;

    printf("Enter miles traveled: ");
    scanf("%f", &milesTraveled);

    printf"Enter gallons of gas used: ");
    scanf("%f", &gallonsOfGasUsed);

    float milesPerGallon = milesTraveled/gallonsOfGasUsed;

    printf("Miles per gallon (mpg): %.2f", milePerGallon);
    return 0;
}
