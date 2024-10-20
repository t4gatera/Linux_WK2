#include<stdio.h>
int add(int, int);
int sub(int, int);

void main(){
int sum = add(8, 9);
int diff = sub(8, 9);

printf("The sum is %d, and the difference is %d\n", sum, diff);
}
