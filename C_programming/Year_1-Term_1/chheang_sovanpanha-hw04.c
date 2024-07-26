#include <stdio.h>
int main(){
    // ~ homework1
    int a = 13, b = 42; 
    int result1 = a + b;
    printf("%d + %d = %d\n\n",a ,b ,result1);
    // ~ homework2
    float x = 12.24, y = 5.54; 
    float result2 = x - y;
    printf("%.2f - %.2f = %.2f\n\n",x ,y ,result2);  
    // ~ homework3
    printf("/%f/\n",1234.56); 
    // ! print this floating-point number.
    printf("/%e/\n",1234.56);
    // ! print this floating-point number in scientific notation.
    printf("/%4.f/\n",1234.56);
    // ! print this floating-point number with a total width of 4 characters where is right justified.
    printf("/%3.1f/\n",1234.56);
    // ! print this floating-point number with a total width of 3 characters where is right justified, and 1 digits after the decimal point.
    printf("/%-10.3f/\n",1234.56); 
    // ! print this floating-point number with a total width of 10 characters where is left justified, and 3 digits after the decimal point. 
    printf("/%10.3f/\n",1234.56);  
    // ! print this floating-point number with a total width of 10 characters where is right justified, and 3 digits after the decimal point.
    printf("/%10.3e/\n",1234.56);
    // ! print this floating-point number in scientific notation with a total width of 10 characters where is right-justified, and 3 digits after the decimal point.
    return 0;
}