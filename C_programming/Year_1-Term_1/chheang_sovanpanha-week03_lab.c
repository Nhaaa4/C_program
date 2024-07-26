#include <stdio.h>
int main (){
  //Exercise1: assign value 5
  int v1 = 5;
  printf("Ex1: My Integer = %d\n\n",v1);
  //Exercise2: assign value 3.14159
  float v2 = 3.14159;
  printf("Ex2 : My Floating-Point = %f\n\n",v2);
  //Exercise3: assign value 'X'
  char c = 'X';
  printf("Ex3: My Character = %c\n\n",c);
  //Exercise4: assign two value
  int i1 = 10, i2 = 20;
  printf("Ex4: Integer 1 = %d and Integer 2 = %d\n\n",i1 ,i2);
  //Exercise5: assign three value
  float gpa = 3.75;
  char level = 'S';
  int numCourse = 5;
  printf("Ex5: Print three variables\n");
  printf("GPA: %.2f\n",gpa);
  printf("Grade Level: %c\n",level);
  printf("Number of Courses: %d\n\n",numCourse);
  //Exercise6: assign three value
  double temp = 24.5;
  char nameCity = 'A';
  int pop = 1000000;
  printf("Ex6: Print out all variables\n");
  printf("Average Temperature: %.1lf\n",temp);
  printf("City Name: %c\n",nameCity);
  printf("Population: %d\n\n",pop);
  //Exercise7: calculate the number
  int n1 = 7, n2 = 9;
  printf("Ex7: The sum of %d and %d is %d\n\n",n1, n2, n1 + n2);
  //Exercise8: check the conditions
  int x = 5, y = 10;
  printf("Ex8: Check the following Conditions\n");
  printf("x >  y: %d\n",x > y);
  printf("x <= y: %d\n",x <= y);
  printf("x == 5 && y == 10: %d\n",(x == 5) && (y == 10));
  printf("x == 5 || y == 10: %d\n\n",(x == 5) || (y == 10));
  //Exercise9: using assignment and increment/decrement operator
  int u = 5;
  printf("Ex9: Print the results\n");
  printf("Incremented count: %d\n",u+=1);
  printf("Decremented count: %d\n",u-=2);
  printf("Multiplied count: %d\n\n",u*=3);
  //Exercise10: using opreration to calculate
  int num1 = 10, num2 = 5;
  int sum = num1 + num2;       
  int difference = num1 - num2;      
  int product = num1 * num2;        
  int quotient = num1 / num2;        
  int isEqual = num1 == num2;
  int isGreater = num1 > num2;        
  int isLess = num1 < num2;        
  int logicalAndResult = isEqual && isGreater;     
  int logicalOrResult = isGreater || isLess;
  printf("Ex10: Print out all the results\n");
  printf("Sum: %d\n",sum);
  printf("Difference: %d\n",difference);
  printf("Product: %d\n",product);
  printf("Quotient: %d\n",quotient);
  printf("isEqual: %d\n",isEqual);
  printf("isGreater: %d\n",isGreater);
  printf("isLess: %d\n",isLess);
  printf("Logical AND Result: %d\n",logicalAndResult);
  printf("Logical OR Result: %d\n",logicalOrResult);
  printf("Increment num1: %d\n",++num1);
  printf("Derement  num2: %d\n\n",--num2);
  // & Bonus
  int a = 29;
  int b = 56;
  int tem = a;
  a = b;
  b = tem;
  printf("(Bonus) After swapping: a = %d, b = %d",a,b);
  return 0;
}