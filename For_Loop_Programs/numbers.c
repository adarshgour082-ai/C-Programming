#include<stdio.h>
int main (){
    int num,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        printf("%d\t",i);
        sum += i;
    }
    printf("\nThe Sum of First %d Natural Numbers is : %d",num,sum);
    return 0;
}