#include<stdio.n>
int main(){
    char inputchar;
    printf("Enter a character:\n");
    scanf("%c",&inputchar);
    if(inputchar>=65 && inputchar<=90){
        printf("The given character is upper");
    }
    else{
        printf("The given character is lower");
    }
    return 0;
}
