#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calculatePrimeSum(int i) {
    double sum = 0.0;
    for (int j = 1; j <= i; j++) {
        double term = cos(M_PI * ((double)(tgamma(j) + 1) / j)) + .0001;
        term = term * term;
        sum += floor(term);
    }
    return sum;
}

double willansFormula(int n) {
    double sum = 1.0;
    for (int i = 1; i <= (1 << n); i++) {
        double denominator = calculatePrimeSum(i);
        double fraction = n / denominator;
        double root = pow(fraction, 1.0 / n);
        sum += floor(root);
    }
    return sum;
}

int main(int argc, char *argv[]) {
    if (argc != 2){
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    double result = willansFormula(n);
    printf("f(%d) = %.6f\n", n, result);
    return 0;
}
