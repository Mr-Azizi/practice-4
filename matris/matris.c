#include <stdio.h>

int main()
{
    int num;
    printf("Enter size of Array: ");
    scanf("%d", &num);

    int arr[num][num];

    for (int i = 0; i < num; i++) 
    {
        for (int j = 0; j < num; j++) 
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < num; i++)
    {
    for (int j = 0; j < num; j++)
    {
        if (j < i)
        {
            arr[i][j] = -1;
        }
        
        }

    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (arr[i][j] == -1)
            {
                printf("   ");
            }
            else
            {
                printf("%d  ", arr[i][j]);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
