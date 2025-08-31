/*
    CH-230-A
    a6.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

#define INTERMEDIATE
//in the current version intermediate is defined 
//if you wish to eliminate the partial products
//in the output then please add '//' to line 10
int main()
{
    int n;
    scanf("%d",&n);//the number of values in a vector
    int v[n],w[n];
    //scanning the values from the first vector
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    //scanning the values from the second vector
    for(int j=0;j<n;j++){
        scanf("%d",&w[j]);
    }
    int scalar=0;
    int prod=1;
    //calculating the scalar product 
    for(int i=0;i<n;i++){
        prod=v[i]*w[i];
        scalar=scalar+prod;
    }
    //calculating the partial products using a macro
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for (int i = 0; i < n; i++)
        {
             prod = v[i] * w[i];
            printf("%d\n", prod);
        }
    #endif
    printf("The scalar product is: %d", scalar);//printing the result
    return 0;
}
