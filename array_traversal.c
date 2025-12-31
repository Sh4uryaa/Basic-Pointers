#include <stdio.h>
int main(void)
{
                                                //print array values 


    int arr[5] = {10, 20, 30, 450, 510};
    for (int i = 0; i < 5; i++)
    printf("%d ", *(arr + i));   //*(arr+i) is same as arr[i]

                                               //sum of the elements in array


    int sum = 0; 
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(arr + i);  
    }
    printf("\nThe sum of the array is %d.\n", sum);

                                               //finding max array


    int max = *arr;
    for (int i = 0; i < 5; i++)
    {
        if (*(arr + i) > max)
        {
        max = *(arr + i);
        }
    }
    printf("The max element is: %d.\n", max); 
    return 0;
}