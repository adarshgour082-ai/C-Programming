#include <stdio.h>
int main(){
    int base,power,result=1;
    printf("Enter the value of Base & power : ");
    scanf("%d %d",&base,&power);
    for(int i=1;i<=power;i++){
        result=result*base;
    }
    printf("Result = %d\n",result);
    return 0;
}
