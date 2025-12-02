#include <stdio.h>

enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    int day;
    printf("Enter a number : ");
    scanf("%d", &day);

    if(day < 0 || day > 6) {
        printf("Invalid day\n");
    }
    else {
        enum Weekday w = day;
        switch(w) {
            case MON:
            printf("Monday\n");
            break;

            case TUE:
            printf("Tuesday\n"); 
            break;

            case WED:
            printf("Wednesday\n");
            break;

            case THU:
            printf("Thursday\n"); 
            break;

            case FRI:
            printf("Friday\n"); 
            break;

            case SAT:
            printf("Saturday\n"); 
            break;
            
            case SUN:
            printf("Sunday\n"); 
            break;
            
        }
    }

    return 0;
}