#include <stdio.h>
#define SIZE 100

int main(void) {
    //  Write a program in C to count the frequency of each element of an array.
    int n;
    int arr[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The frequency of all elements of an array: \n");

    for (int i = 0; i < n; ++i) {
        int ctr = 1;
        for (int j = i+1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                ctr++;
            }
        }
        printf("%d occurs %d times \n", arr[i], ctr);
    }





































    return 0;
}
