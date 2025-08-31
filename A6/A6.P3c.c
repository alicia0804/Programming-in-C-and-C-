/*
    CH-230-A
    a6.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>

//calculates the maximum using a macro
//a and b are compared to see which one is bigger
//then they are compared to c
#define MAX(a, b, c) ((a) > (b) ? \
   ((a) > (c) ? (a) : (c)) :     \
   ((b) > (c) ? (b) : (c)))

//calculates the minimum using a macro
//first calculates the min between a and b 
//and then which one is smaller gets compared to c
#define MIN(a, b, c) ((a) < (b) ? \
   ((a) < (c) ? (a) : (c)) :      \
   ((b) < (c) ? (b) : (c)))

//the macro calculates the mid range
#define MID_RANGE(a, b, c) ((float)(MIN(a, b, c) + MAX(a, b, c)) / 2)

int main() {
    int a, b, c;
    //scans the three numbers
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    //using a variable for the value of the macro
    float midrange = MID_RANGE(a, b, c);
    printf("The mid-range is: %.6f\n", midrange);//printing the result

    return 0;
}

