#include <stdio.h>
#include <math.h>

double funcos(double e, double x);
long double factorial(int n); 
int main() 
{
    double e, x;
    scanf("%lf %lf", &e, &x);

    double cosx = funcos(e, x);
    printf("cos(%lf)的近似值为: %lf\n", x, cosx);

    return 0;
}

double funcos(double e, double x) 
{
    double sum = 1.0; 
    double term; 
    int n = 0; 

    do {
        term = pow(-1, n) * pow(x, 2 * n) / factorial(2 * n); 
        sum += term; 
        n++; 
    } while (fabs(term) >= e); 

    return sum;
}

long double factorial(int n) {
    long double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
