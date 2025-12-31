#include <stdio.h>
void reverse(int *arr, int n);
int main(void)
{
                                               //reversing an array


    int arr[5]= {10, 20, 30, 40, 50};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
    return 0;
}
void reverse(int *arr, int n)
{
    int *p = arr;
    int *q = p + n-1;
    while (p < q)
    {
    int temp = *p;
    *p = *q;
    *q = temp;

    p++;
    q--;
    }
}