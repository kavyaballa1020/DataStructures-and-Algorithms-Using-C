#include <stdio.h>
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;
    int i;
    int key = 90;
    int found = 0; 

    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("found");
            found = 1; 
            break;
        }
    }

    if (!found)
    {
        printf("not found");
    }

    return 0;
}
