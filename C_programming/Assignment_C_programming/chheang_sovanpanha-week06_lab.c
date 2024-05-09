#include<stdio.h>
int main(){
    // Exercise 1 : program to check user's age
    printf("Exercise 1 : Write a program that asks the user for their age\n");
        int age;
        printf("Enter your age: ");
        scanf("%d",&age);
        if(age > 18){
            printf("You are eligible to vote.\n\n");
        }
    // Exercise 2
    printf("Exercise 2 : Write a program that asks the user for the purchase amount\n");
        float purchase_amount;
        printf("Enter your purchase amount (USD) : ");
        scanf("%f",&purchase_amount);
        // check condition to calculate price
        if(purchase_amount > 100 ){ // get discount 10% if the amount is above $100
            printf("Your price: %.2f\n",purchase_amount);
            printf("You get discount 10 percents.\n");
            float discount_price = purchase_amount - (purchase_amount * 10) / 100;
            printf("Your discount price: %.2f\n\n",discount_price);
        }else{
            printf("Your price: %.2f\n\n",purchase_amount);
        }
    // Exercise 3
    printf("Exercise 3 : Write a program that asks the user for their score (out 100)\n");
        int score;
        printf("Enter your score: ");
        scanf("%d",&score);
        // check condition for grade A, B, C, D, and F
        if(score >= 90 && score <= 100){
            printf("You get grade A.\n\n");
        }else if(score >= 80 && score <= 89){
            printf("You get grade B.\n\n");
        }else if(score >= 70 && score <= 79){
            printf("You get grade C.\n\n");
        }else if(score >= 60 && score <= 69){
            printf("You get grade D.\n\n");
        }else if(score < 60){
            printf("You get grade F.\n\n");
        }else{
            printf("You should input your score out of 100.\n\n");
        }
    // Exercise 4
    printf("Exercise 4 : Write a program that asks the user for a number.\n");
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        if(number > 0){
            printf("It's Positive number.\n\n");
        }else if(number < 0){
            printf("It's Nagetive number.\n\n");      
        }else{
            printf("It's Zero number.\n\n");
        }
    // Exercise 5
    printf("Exercise 5 : Write a program that asks the user for a year\n");
        int year;
        printf("Enter the year(s): ");
        scanf("%d",&year);
        //  A leap year is a year divisible by 4 but not by 100, or a year divisible by 400.
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            printf("The year is a leap year.\n\n");
        }else{
            printf("The year is not a leap year.\n\n");
        }
    // Exercise 6
    printf("Exercise 6 : Write a program that asks the user for a number\n");
        int number1;
        printf("Enter the number: ");
        scanf("%d",&number1);
        // use ternary to check condition
        (number1 % 2 == 0) ? printf("The number is even number.\n\n") : printf("The number is odd number.\n\n");
    // Exercise 7
    printf("Exercise 7 : Write a program that asks th euser for two number\n");
        int number_1, number_2;
        printf("Enter the two number saperate by space: ");
        scanf("%d %d",&number_1 ,&number_2);
        fflush(stdin); // used not to skip exercise 8 
        // use ternary to check condition
        (number_1 > number_2) ? printf("The larger number is %d\n\n", number_1) : 
        (number_1 < number_2) ? printf("The larger number is %d\n\n", number_2) : printf("The frist number is equal to the second number.\n\n");
    // Exercise 8
    printf("Exercise 8 : Write a program that asks the user for a character\n");
        char character;
        printf("Enter the character: ");
        scanf("%c",&character);
        switch(character){
            case 'a': 
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            printf("It's a vowel.\n\n");
            break;

            default: 
            printf("It's a consonant.\n\n");
        }
    // Exercise 9
    printf("Exercise 9 : Write a program that asks the user for a number(1-7) representing a day of the week.\n");
        int day;
        printf("Enter the number representing a day: ");
        scanf("%d",&day);
        switch(day){
            case 1:
            printf("The day is Monday.\n\n");
            break;

            case 2:
            printf("The day is Tuesday.\n\n");
            break;

            case 3:
            printf("The day is Wednesday.\n\n");
            break;

            case 4:
            printf("The day is Thursday.\n\n");
            break;

            case 5:
            printf("The day is Friday.\n\n");
            break;
            
            case 6:
            printf("The day is Saturday.\n\n");
            break;

            case 7:
            printf("The day is Sunday.\n\n");
            break;

            default:
            printf("You should input the number 1 to 7.\n\n");
        }
    // Exercise 10 : ATM
    printf("Excerise 10 : Simulate a simple ATM\n");
        int pin, balance_amount, withdrawal_amount;
        printf("------------------ Welcome to ATM ------------------\n");
        printf("Enter your PIN to login your account: ");
        scanf("%d",&pin);
        if ( pin == 1234){
            printf("Login your account success...!\n");
            printf("Enter your Balance amount (USD): ");
            scanf("%d", &balance_amount);
            printf("Enter your withdrawal amount (USD): ");
            scanf("%d", &withdrawal_amount);
            if ( withdrawal_amount > balance_amount ) {
                printf("You can not withdraw money.\n\n");
            } else {
                printf("You can withdraw money.\n\n");
            }
        } else {
            printf("Login your account not success...!\n\n");
        }
    // Bonus
    printf("(Bonus) : Write program to recommended sampeah for user\n");
        int age_person, option;
        printf("Enter the age of the person that you are greeting : ");
        scanf("%d", &age_person);
        printf("\n------------[Options]------------\n");
        printf("\t 1. Friend\n");
        printf("\t 2. Elder/Senior/Boss\n");
        printf("\t 3. Parent/Grandparent/Teacher\n");
        printf("\t 4. King/Monk\n");
        printf("\t 5. God/Sacred Status\n");
        printf("=> Please, Choose Options that you are greeting : ");
        scanf("%d", &option);
        switch (option) {
            case 1: 
            printf("Recommended Sampeah level based on the information : \n");
            printf("Palms together at the chest level and bow slightly (Sampeah Level 1).\n\n");
            break;

            case 2: 
            printf("Recommended Sampeah level based on the information : \n");
            printf("Palms together at the chin level. The blow is also a little deeper (Sampeah Level 2).\n\n");
            break;

            case 3: 
            printf("Recommended Sampeah level based on the information : \n");
            printf("Palms together at the nose level. The blow, a little deeper again to mark higher respect (Sampeah Level 3).\n\n");
            break;

            case 4: 
            printf("Recommended Sampeah level based on the information : \n");
            printf("Palms together at the eyebrows level and bow slightly from the waist (Sampeah Level 4).\n\n");
            break;

            case 5: 
            printf("Recommended Sampeah level based on the information : \n");
            printf("Palms together at the forehead level and bow deeply (Sampeah Level 5).\n\n");
            break;

            default:
            printf("Handle invalid input and suggest referring to the menu options.\n\n");
        }
    return 0;
}