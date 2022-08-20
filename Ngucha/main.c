#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerOne;
    int integerTwo;
    int out = 1;
    printf("Input an Integer: ");
    scanf("%d", &integerOne);

    printf("\nInput a second integer: ");
    scanf("%d", &integerTwo);

    while (integerTwo != 0) {
        out *= integerOne;
        --integerTwo;}

    printf("\nResult = %d",out);
    return 0;
}
