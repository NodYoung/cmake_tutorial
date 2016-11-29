#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include "math/MathFunctions.h"
#include "math.h"


int main(int argc, char* argv[]){
    if(argc < 3){
        //print version info
        printf("%s Version %d.%d \n", argv[0], Demo_VERSION_MAJOR, Demo_VERSION_MINOR);
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    #ifdef HAVE_POW 
        printf("Now we use the standard library. \n");
        double result = pow(base, exponent);
    #else
         printf("Now we use our own Math library. \n");
        double result = power(base, exponent);
    #endif
    printf("%f ^ %d is %f \n", base, exponent, result);
    return 0;
}
