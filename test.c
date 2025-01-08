#include <stdio.h>

int CWR(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("ther are ((%d)) way", CWR(num));

    return 0;

}

int CWR (int num)
{
    if (num == 1) { return 1; }

    if (num == 2) { return 2; }
    
    return CWR(num - 1) + CWR(num - 2);
}