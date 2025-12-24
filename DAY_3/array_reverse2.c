#include <stdio.h>

void reverse(int a[], int n)
{
    int i = 0, j = n - 1;

    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    int n;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int a[n];  

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    reverse(a, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
