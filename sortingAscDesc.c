#include<stdio.h>

int main(){
    int L = 20;
    int T[L];
    int temp;
    
    //Sorting Ascending Order
    for(int i = 0; i<L; i++){
        for(int j = i+1; j<L;j++){
            if(T[i]> T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }

        }}
        //Sorting Descending Order
        for(int i = 0; i<L; i++){
        for(int j = i+1; j<L;j++){
            if(T[i]< T[j]){
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }

        }

    }
    return 0;
    
}