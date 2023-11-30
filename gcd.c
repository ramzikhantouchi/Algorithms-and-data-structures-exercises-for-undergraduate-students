#include<stdio.h>

int main(){

    int firstNumber, secondNumber, gcd, remainder, tempSecondNumber, tempFirstNumber;
    
    printf("Enter the first number: ");
    scanf("%d",&firstNumber);
    printf("Enter the second number: ");
    scanf("%d",&secondNumber);
    tempSecondNumber = secondNumber;
    tempFirstNumber = firstNumber;
        if(tempSecondNumber> tempFirstNumber){
            int temp;
            temp = tempSecondNumber;
            tempSecondNumber = tempFirstNumber;
            tempFirstNumber = temp;
        }
        remainder = tempFirstNumber % tempSecondNumber;
        while(remainder != 0){
            tempFirstNumber = tempSecondNumber;
            tempSecondNumber = remainder;
            remainder = tempFirstNumber % tempSecondNumber;
        }
        printf("GCD(%d,%d) = %d\n",firstNumber, secondNumber, tempSecondNumber);


    
    
   
return 0;
}