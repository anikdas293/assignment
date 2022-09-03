#include <math.h>
int main(){
    printf("6.7(a) Output result is:");
    for (int i=1;i<=5;i++){
        for(int j=1; j<=i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n\n\n6.7(b) Output result is: \n");
    for (int i=5; i>=1; i--){
        for (int k=5; k>=i; k--)printf(" ");
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
