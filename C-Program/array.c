#include <stdio.h>

int main()
{
    int a[4], sum = 0, i;

    printf("Enter 4 elements:\n");

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Addition of all elements = %d\n", sum);

    return 0;
}