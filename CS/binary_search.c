#include <stdio.h>
int find(int a, int A[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    else if (a == A[mid])
        return mid;
    else if (a < A[mid])
        return find(a, A, low, mid - 1);
    else
        return find(a, A, mid + 1, high);
}
int main()
{
    int a, found;
    printf("Enter the number (less than 20): ");
    scanf("%d", &a);
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    found = find(a, A, 0, 19) + 1;
    if (found == 0)
        printf("%d is not present in the array.", a);
    else
        printf("%d is present in the array at %d position.", a, found);
    return 0;
}