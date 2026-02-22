#include<stdio.h>
int main (){
    int hour ;
    printf("Enter current hour (1-24) :");
    scanf("%d",&hour);
    if (hour < 1 || hour > 24)
    {
        printf("Invalid hour !\n");
    }
    else if(hour < 12)
    {
        printf("Good Morning !\n");
    }
    else if (hour < 17)
    {
        printf("Good Afternoon !\n");
    }
    else if (hour < 21)
    {
        printf("Good Evening !\n");
    }
    else if (hour < 24)
    {
        printf("Good Night !");
    }
    
return 0;

}