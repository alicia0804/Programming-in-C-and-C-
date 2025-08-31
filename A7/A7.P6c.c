/*
    CH-230-A
    a7.p6.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;

struct person {
    char name[30];
    int age;
};

//compares two people by name
//if two people have the same name it
//compares ages
int compname(const struct person a, const struct person b){
    if (strcmp(a.name, b.name) != 0)
        return strcmp(a.name, b.name);
    else
        return a.age - b.age;
}

//compares two people by age
int compage(const struct person a, const struct person b) {
    if (a.age != b.age)
        return a.age - b.age;
    else
        return strcmp(a.name, b.name);
}

//sorts the elements and prints them on the screen
//goes through the array 
//and makes changes until there aren't anymore
void bubblesort(struct person *v, int (*comp)(const struct person a,
                                              const struct person b)){
    bool swap;
    do {
        swap = false;
        for (int i = 1; i < n; i++) {
        //switching the values
            if (comp(v[i - 1], v[i]) > 0) {
                struct person aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                swap = true;
            }
        }
    } while (swap);
}

int main() {
    scanf("%d", &n);
    struct person *v;
    //allocating memory dynamically
    v = (struct person *)malloc(sizeof(struct person) * n);
    if (v == NULL) {
        printf("There is an error in allocating memory\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        getchar();
        fgets(v[i].name, sizeof(v[i].name), stdin);
        v[i].name[strcspn(v[i].name, "\n")] = 0;
        scanf("%d", &v[i].age);
    }

    //sort by name and print on the screen
    bubblesort(v, compname);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", v[i].name, v[i].age);
    }
    printf("\n");

    //sort by age and print on the screen
    bubblesort(v, compage);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", v[i].name, v[i].age);
    }
    printf("\n");

    free(v); //frees the allocated memory
    return 0;
}
