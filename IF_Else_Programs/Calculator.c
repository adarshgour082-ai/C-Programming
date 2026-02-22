#include <stdio.h>
int main (){
    int num1, num2 ,operator;
    printf("Enter a value of num1 & num2 :");
    scanf("%d%d",&num1,&num2);
    //sum, minus, multiplication, divied and modulas

    printf("value of sum    : %d\n",num1+num2);
    printf("value of minus  : %d\n",num1-num2);
    printf("value of multiplication  :%d\n",num1*num2);
    printf("value of divied : %d\n",num1/num2);
    printf("value of modulas: %d\n",num1%num2);
    
    //verify the calculator code
    printf("enter a value of operator(1 for sum, 2 for minus, 3 for multiplication, 4 for divied, 5 for modulas) \n");
    scanf("%d",&operator);
    if (operator == 1)
    {
        printf("value of sum    : %d\n",num1+num2);
    }
    else if (operator == 2)
    {
        printf("value of minus  : %d\n",num1-num2);
    }
    else if (operator == 3)
    {
        printf("value of multiplication : %d\n",num1*num2);
    }
    else if (operator == 4)
    {
        printf("value of divied   : %d\n",num1/num2);
    }
    else if (operator == 5)
    {
        printf("value of modulas    : %d\n",num1%num2);
    }
    else{
        printf("Invalid Operator !");
    }
    printf("\t\t\t===========================================================");

   return 0;

} 