/*
    CH-230-A
    a7.p5.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

int n;

//sort ascending
int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

//sort descending
int cmpfunction2(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

//define a pointer to a function that takes an int array
void (*func)(int[]);

//function that sorts the elements ascending 
//and then prints them
void a(int v[]) {
    qsort(v, n, sizeof(int), cmpfunc);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

//function that sorts the elements descending 
//and then prints them
void d(int v[]) {
    qsort(v, n, sizeof(int), cmpfunction2);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    char ch;
    scanf("%d", &n);

    // we declare an array 
    //and scan the elements in the array
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    //we clear the newline left by the last scanf
     //read and ignore any newline character
    while ((ch = getchar()) == '\n');

    while (ch != 'e') {
        if (ch == 'a') { //sort ascending
            func = a;
            func(v);
        } else if (ch == 'd') { //sort descending
            func = d;
            func(v);
        }
        //read the next character
        ch = getchar(); 
    }
    return 0;
}
