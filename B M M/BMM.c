#include <stdio.h>

int gcd(int a,int b);
int gcd_arr(int arr[],int size);
void sorting(int arr[], int size);
//-------------------------------------------------------

int main()
{
       
    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++) 
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    if (num == 2)
    {
        printf("The GCD of the array is: %d\n", gcd(arr[0], arr[1]));    
    }else
    {
        int num2 = (num*(num+1))/2;
        int bmm[num2];
        
        int counter = 0;
        
        for (int i = 0; i < num ; i++)
        {
            for (int j = 0; j < num; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if (counter < num2)
                {
                    bmm[counter] = gcd(arr[i], arr[j]);
                    counter++;
                }
            }
        }
        sorting (bmm, num2);
        printf("The GCD of the array is: %d\n", bmm[num2-1]);
    }
    
    return 0;
}

//----------------------------------------------------------------

int gcd(int a, int b) // محاسبه ی ب م م
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_arr(int arr[], int size) // الگوریتم محاسبه ب م م آرایه
{
    if (size < 2) return arr[0];
    
    int result = arr[0];
    for (int i = 1; i < size; i++) 
    {
        result = gcd(result, arr[i]);
    }
    return result;
}

void sorting(int arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr [j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}