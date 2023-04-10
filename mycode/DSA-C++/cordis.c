#include <math.h>
#include <stdio.h>
int main()
{
    int x = 2;
    int n = 5;
    double final = 1.0;
    for (double i = 1; i <= n; i++){

        final = final +(1/pow(x, i));
    }
    printf("output==%.4f", final);
    return 0;
}