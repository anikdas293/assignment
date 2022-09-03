#include <math.h>
int main(){
    int count = 0, i, n;
    printf("How many people: ");
    scanf("%d", &n);
    int age[n];
    printf("Enter the age of people: ");
    for(i=0; i<n; i++){
        scanf("%d", &age[i]);
    }

    for(i=0; i<n; i++)
        if(age[i] <= 60 && age[i]>=50)
            count = count+1;
        else continue;

    printf("\nTotal person of age 50 to 60 are: %d", count);
    return 0;
}
