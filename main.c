#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milesTraveled, gallonsOfGasUsed, milesPerGallon;

    printf("Enter miles traveled: ");
    scanf("%f", &milesTraveled);

    printf("Enter gallons of gas used: ");
    scanf("%f", &gallonsOfGasUsed);

    milesPerGallon = milesTraveled/gallonsOfGasUsed;

    printf("Miles per gallon): %.2f", milesPerGallon);
    
    if(milesPerGallon<25)
    {
        printf("Could be better.\n");
    }
    else
    {
        printf("Good, keep improving your vehicle!\n")
    }
    
    return 0;
}
