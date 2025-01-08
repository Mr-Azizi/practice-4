#include <stdio.h>
#include <math.h>

int Pythagorean(int a, int b, int c);

//----------------------------------------------

int main()
{
    int num;   
    printf("Enter number of Array: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("enter Array [%d]= ", i);
        scanf("%d", &arr[i]);
    }
    
    int counter = 0;

    for (int i = 0; i < num ; i++)
    {
        for (int j =i + 1; j < num; j++)
        {
            for (int k = 0; k < num; k++)
            {
                if ((Pythagorean(arr[i], arr[j], arr[k])) && j != k && i != k)
                {
                    counter++;
                }
            }
        }
    }
    printf("%d",counter);
    return 0;    
}

//----------------------------------------------

int Pythagorean(int a, int b, int c) 
{
    if ((a * a + b * b == c * c)) return 1;
    return 0;
}