#include <stdio.h>
#include <ctype.h>
int main(){
    // & Exercise1
    printf("Ex1: Using getchar and putchar\n"); 
    char char1;
    printf("Enter a character: ");
    char1 = getchar( );
    printf("You entered: ");
    putchar( char1 );
    printf("\n\n");
    // & Exercise2
    printf("Ex2: using scanf\n");
    int int1;
    printf("Enter an integer: ");
    scanf("%d",&int1);fflush(stdin);
    printf("You entered: %d\n\n",int1);  
    // & Excerise3
    printf("Ex3: using getchar and print ASCII\n");
    char char2;
    printf("Enter a character: ");
    char2 = getchar( );
    printf("ASCII value of %c: %d\n\n", char2, char2);
    // & Exercise4
    printf("Ex4: Using scanf and print the sqaue of the input integer\n");
    int int2;
    printf("Enter an integer: ");
    scanf("%d",&int2);fflush(stdin);
    printf("Sqaure of %d: %d\n\n", int2, int2*int2); 
    // & Exerxise5
    printf("Ex5: Print uppercase equivalent\n");
    char char3;
    printf("Enter a lowercase character: ");
    char3 = getchar( );
    char3 = toupper( char3 );
    printf("Uppercase equialent: ");
    putchar( char3 );
    printf("\n\n");   
    // & Exerise6
    printf("Ex6: Print the area of the rectangle\n");
    float length, width;
    printf("Enterr the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);
    float area = length*width;
    printf("The area of the rectangle is: %.2f\n\n",area);
    // & Exercise7
    printf("Ex7: Print sum of two integers\n");
    int i1, i2;
    printf("Enter two integers separated by space: ");
    scanf("%d %d",&i1 ,&i2);
    int sum = i1 + i2;
    printf("Sum: %d\n\n",sum);
    // & Exercise8
    printf("Ex8: Print product of two floating-point\n");
    float f1, f2;
    printf("Enter two floating-point numbers separated by space: ");
    scanf("%f %f",&f1, &f2);
    float product = f1 * f2;
    printf("Product: %.2f\n\n",product);
    // & Exercise9
    printf("print the result along with the sum of the three integers\n");
    int in1, in2, in3;
    printf("Enter three integers separated by space: ");
    scanf("%d %d %d",&in1 ,&in2 ,&in3);
    int sum1 = in1 + in2 + in3;
    int average = sum1 / 3;
    printf("Sum of the three integers: %d\n",sum1);
    printf("Average of the three integers: %d\n\n",average);
    // & Exercise10
    printf("Ex10: Print all results of two integers\n");
    int num1, num2;
    printf("Enter two integers separated by space: ");
    scanf("%d %d",&num1 ,&num2);
    int sum2 = num1 + num2;
    int sub = num1 - num2;
    int multi = num1 * num2;
    int division = num1 / num2;
    printf("Sum: %d\n",sum2);
    printf("Difference: %d\n",sub);
    printf("Product: %d\n",multi);
    printf("Quotient: %d\n\n",division);
    // & Bonus
    printf("(Bonus) Print an age in years, months and days\n");
    int age;
    printf("Enter your age in years: ");
    scanf("%d",&age);
    int month = age * 12;
    int day = age * 365;
    printf("Years: %d\n",age);
    printf("Months: %d\n",month);
    printf("Days: %d\n",day);
    return 0;
}