#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("output is: %d!= ", num);
    while(num!=0)
    {
        if (num == 1)
            printf("%d", num);
        else
            printf("%d * ", num);

        num = num - 1;
    }
    return 0;
}
