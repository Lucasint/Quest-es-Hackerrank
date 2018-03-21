#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int x, int y);

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum;
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    return 0;
}
int solveMeFirst(int x, int y) {

    return x + y;
}
