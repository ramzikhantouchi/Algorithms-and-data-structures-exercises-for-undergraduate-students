#include<stdio.h>
#include<stdbool.h>


int main(){
    bool isPrime;
    int NumberOfPrimeNumbers = 15, i  = 2, currentPrimeNumbersCount = 0;
    
    


    while(currentPrimeNumbersCount != NumberOfPrimeNumbers){
        isPrime = true;
        for(int j=2; j < (i/2); j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }}
            if(isPrime){
                currentPrimeNumbersCount = currentPrimeNumbersCount + 1;
                printf("%d\n",i);
            }
        
        i++;

    }

    return 0;
}