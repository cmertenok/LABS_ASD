#include <stdio.h>
#include <math.h>
#define A 5

int main(){
    double X[A];
    double sum;
    double x = 4.337;
    X[0] = x;
    for (int i = 1; i < A; i++) {
        sum = 0;
        for (int k = 1; k <= i; k++) {
            sum += (pow(-1, k + 1)) * (pow(x - 1, k) / k) * (pow(x, k));
            X[i] = sum;
        }
    }
    printf("Result: %f", sum);
    return 0;
}