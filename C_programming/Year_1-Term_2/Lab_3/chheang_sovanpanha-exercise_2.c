#include <stdio.h>
#include <math.h> 
void Power(float *x, const int n);
int main ()
{
    float x; 
    int y;
    printf("Input x, y: ");
    scanf("%f %d", &x, &y);
    printf("Power(%.0f, %d) = ", x, y);
    Power(&x, y);
    printf("%.0f", x);
}
void Power(float *x, const int n)
{
    *x = pow(*x, n); 
}