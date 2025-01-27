#include <stdio.h>
int factorial(int num){
    if (num==0){
        return 1;
    }
    return num*factorial(num-1);
}
int main(){
    int number =5;
    int result =0;
    for(int i= 1; i<= number; i++){
        result+= factorial(i);
    }
    printf("%d" , result);
    return 0;
}
