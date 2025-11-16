#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int *ptr = arr;   // ptr stores the address of first element

    // Display initial pointer and value
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);

    ptr++;   // moves pointer to next integer (adds sizeof(int))
    printf("After ptr++ : ptr = %p, *ptr = %d\n", ptr, *ptr);

    ptr += 2;   // moves pointer forward by 2 more elements
    printf("After ptr += 2 : ptr = %p, *ptr = %d\n", ptr, *ptr);

    ptr--;   // moves pointer one step back
    printf("After ptr-- : ptr = %p, *ptr = %d\n", ptr, *ptr);

    return 0;
}
