#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int exchange (int * arr)
{
    if(arr == 9){
        printf("%d",arr);
    }

}


int main(void)
{
    int arr[] = { 1, 2, 3, 9, 5, 6, 7, 8, 4 };
    int length = sizeof(arr) / sizeof(arr[0]);
    exchange (arr);
    for (int i = 0; i < length; i++)
    {
        printf("%d", arr[i]);
    }
}
