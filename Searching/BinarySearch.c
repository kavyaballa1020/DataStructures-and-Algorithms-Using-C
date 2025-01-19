#include <stdio.h>
int main()
{
    int arr[] = {32, 45, 75, 87, 89, 90, 95, 98};
    int n = 8;
    int right = n - 1;
    int left = 0;
    int mid = left + right / 2;
    int key = 45;
    int found = 0;
    while (left <= right)
    {
        int mid = left + right / 2;
        if (key == arr[mid])
        {
            found = 1;
            break;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (found == 1)
    {
        printf("Found");
    }
    else
    {
        printf("not found");
    }
    return 0;
}