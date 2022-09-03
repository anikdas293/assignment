#include <math.h>
int main(){
    int num, i=0;
    int binary[16];
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0){
        if(num%2 == 0) binary[i] = 0;
        else binary[i] = 1;
        num = (int) num / 2;
        i = i+1;
    }

    printf("\nBinary form is: ");
    for(int j=i; j>=1; j--){
        printf("%d ", binary[j-1]);
    }

    return 0;
}

