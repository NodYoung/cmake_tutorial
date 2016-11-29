#include <stdio.h>
#include <stdlib.h>
#include "math/MathFunctions.hpp"


int main(int argc, char* argv[]){
    if(argc < 3){
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%f ^ %d is %f \n", base, exponent, result);
    return 0;
}
