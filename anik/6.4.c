#include <stdio.h>
int main()
{
    int num, pre1=1, pre2=0, temp, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(i <= num)
    {
        printf("%d\t", pre1);
        temp = pre2;
        pre2 = pre1;
        pre1 = pre2 + temp;
        i++;
    }
    return 0;
}

