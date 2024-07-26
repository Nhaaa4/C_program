#include<stdio.h>
void addition(int*, int); /* Prototype */
void addition(int *a, int b){
    *a = *a + b; // pointer should use * sysbols before bcuz we want to access value of a to calculate
}
int main(){
    int a = 9;
    int b = 2;
    /* pointer point to NULL */
    int *p_a = &a; //pointer should point to a becuase we want to access value of a.
    //display a, b
    printf("Before swap: (a:%d, b:%d)\n", *p_a, b); // we use * symbol because we want to access value of a
    /* swap value of a and b */
    *p_a = a + b; // we use * symbol because we want to access value of p_a to calculate
    b = *p_a - b; // we use * symbol because we want to access value of p_a to calculate
    a = *p_a - b; // we use * symbol because we want to access value of p_a to calculate
    /* display a, b */
    printf("After swap: (a:%d, b:%d)\n", *p_a, b); //
    /* pointer point to b */
    int *p_b = &b; // pointer point to b should use & symbols because we want to access address of b.
    /* display a, b */
    printf("Before sum: (a:%d, b:%d)\n", *p_a, *p_b); // we use * symbol because we want to access value of a and b
    /* a equal to a + b */
    addition(&a, b); // use & symbol before a bcuz in addition() function, a is pointer.
    /* display a, b */
    printf("After sum: (a:%d, b:%d)\n", *p_a, *p_b);// we use * symbol because we want to access value of a and b
    return 0;
}
