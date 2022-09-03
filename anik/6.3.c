#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        sum = sum + num%10;
        num = (num - (num%10))/10;
    }
    printf("output is: %d");
    return 0;
}
