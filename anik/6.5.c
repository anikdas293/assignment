#include <stdio.h>
int main()
{
    int num, n, i;
    printf("Enter the number: ");
    scanf("%d", &num);

    n = (int) 1 + log10(num);
    printf("output is: ");
    for(i=1; i<=n; i++)
    {
        printf("%d", num%10);
        num = (num - (num%10))/10;
    }
    return 0;
}
