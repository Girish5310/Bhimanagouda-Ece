#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("enter a number: ");
    scanf("%d",&inputNumber);
    if(inputNumber<0){
        printf("The number is less than 0");
    }
    else if(inputNumber>=0 && inputNumber<10){
        printf("The number is greater than or equal to 0 and less than 10");
    }
    else if(inputNumber>=10 && inputNumber<20){
        printf("The number is greater than or equals to 0 and less than 10");
    }
    else{
        printf("The number is greater than or equal to 20");
    }
}