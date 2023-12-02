#include<stdio.h>

int main(){
    int length = 8,temp_var;
    int Array[length];

    printf("Fill the array of size %d with integer values:\n", length);
    for(int i = 0; i<length; i++){
        scanf("%d",&Array[i]);
    }

    printf("Array: ");
    for (int i = 0; i<length; i++){
        printf("%d ",Array[i]);
    }
    for(int i = 0; i < (length/2); i++){
        temp_var = Array[i];
        Array[i] = Array[length-i-1];
        Array[length-i-1] = temp_var;

    }
    printf("\nReversed Array: ");
    for (int i = 0; i<length; i++){
        printf("%d ",Array[i]);
    }
    

    return 0;
}