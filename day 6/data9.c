#include<stdio.h>
// function dec
int sub(int a, int b);
int main(){
    int a=10,b=10,res;
    res=sub(a,b);
    printf("the sub of %d and %d is %d",a,b,res);
    return 0;
}

//function definition
int sub(int a, int b){   
    int res=a-b;
    return res;
}
