#include <stdio.h>

int main()
{
    int num;

    printf("Enter size matris: ");
    scanf("%d", &num);

    int mat[num][num];

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            //printf("Enter element matris[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int count = 0;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == j)
            {
                continue;;
            }
            if (mat[i][j] != mat[j][i])
            {
                count++;
            }
        }
    }
    
    if (count == 0)
    {
        printf("motegharen\n");
    }
    else
    {
        printf("motegharen nist\n");
    }   
    
    return 0;
}