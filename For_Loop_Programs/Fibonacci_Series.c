#include<stdio.h>
int main(){
    int num,a=0,b=1,c;
    printf("Fibonacci Series \n");
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("%d\t",a);
        c = a+b;
        a=b;
        b=c;
    }
    printf("\n\t\t\t--------------------------------------------------------------------------");
    return 0;

}