#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float p, r, v;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("How many year that you evulated: ");
    scanf("%d", &n);
    printf("Set the rate:");
    scanf("%f", &r);

    printf("\n\t=================================================================================================\n");
    printf("\t|\tS.No\t|\tPrinci.\t\t|\tRate\t|\tYear\t|\tValue\t\t|\n");
    printf("\t=================================================================================================\n");


    for(i=1; i<=n; i++){
        v = p * pow((1+r), i);
        printf("\t|\t%d\t|\t%.1f\t\t|\t%1.2f\t|\t%d\t|\t%.2f\t\t|\n", i, p, r, i, v);
        p = v;
        r=r+0.01;
    }
    printf("\t=================================================================================================\n");

    return 0;
}
