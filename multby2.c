#include <stdio.h>
void multby2(int *arr, int n);
int main(void)
{
                                               //multiply each element by 2 (function)



    int arr[5] = { 2, 5, 15, 20, 50};
    int n = 5;
    multby2(arr, n);
return 0;
}
void multby2(int *arr, int n)
{
    for ( int i = 0; i < n; i++)
    {
        *(arr + i) *= 2;   //*(arr+i) is same as arr[i]
        printf("%d ", *(arr + i)); 
    }
}