#include <stdio.h>
int main(){
    int x, y;
    x = 10;
    y = 15;
    x = x++;
    y = ++y;
    printf("x = %d\n",x);
    printf("y = %d\n",y++);
    printf("Is x small than y : %d\n",x < y);
    printf("Is x larger than y : %d\n",x > y);
    printf("Is y equal to 17 : %d\n",y == 17);
    return 0;
}