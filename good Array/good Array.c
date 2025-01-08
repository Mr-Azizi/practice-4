#include <stdio.h>

int main()
{
    int num;
    printf("Enter number of Array: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    int max = arr[0];

    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    
    if (sum - max == max)
    {
        printf("Yes!");
    }else
    {
        printf("No");
    }
    
    return 0;
}