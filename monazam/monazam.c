#include <stdio.h>

int main()
{
    int num;
    printf("Enter size of Array: ");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++) 
    {
        printf("Enter element [%d]: ",i);
        scanf("%d", &arr[i]);
    }
    int counter = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (i<j && arr[i]>arr[j])
            {
                counter++;
            }
        }
    }
    
    printf("%d", counter);

    return 0;
}
