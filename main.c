#include <stdio.h>
#define SIZE 100

int main(void) {
    //  Write a program in C to count the frequency of each element of an array.
    int n;
    int arr[SIZE];
    int fr[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d", &arr[i]);
        fr[i] = -1;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    puts("");
    for (int i = 0; i < n; ++i) {
        printf("%d ", fr[i]);
    }
    puts("");

    for (int i = 0; i < n; ++i) {
        int ctr = 1;
        for (int j = i + 1; j < n; ++j) {
            if(arr[i] == arr[j]) {
                ctr++;
                fr[j] = 0;
            }
        }

        if (fr[i] != 0) {
            fr[i] = ctr;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", fr[i]);
    }

    printf("\nThe frequency of all elements of an array : \n");

    for (int i = 0; i < n; ++i) {
        if (fr[i] != 0) {
            printf("%d is %d times \n", arr[i], fr[i]);
        }
    }






































    return 0;
}
