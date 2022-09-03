#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("output is: ");
    while(num!=0)
    {
        printf("%d", num%10);
        num = (num - (num%10))/10;
    }
    return 0;
}
