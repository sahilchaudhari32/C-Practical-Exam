#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter a number : ");
        
        scanf("%d", &num);
        sum += num;

    } while (num != 0);

    printf("Sum of all numbers = %d\n", sum);

    return 0;
}


// example :  input : 1 2 3 4 0    // last add 0 is important for stop the loop
//            output : 10