#include<stdio.h>

int main(){

    int length = 20, value;
    int Array[length];
    printf("Fill the array of size %d with integer values:\n", length);
    for(int i = 0; i<length; i++){
        scanf("%d",&Array[i]);
    }
    
    printf("Enter an integer number: ");
    scanf("%d",&value);

    for (int i = 0; i<length; i++){
        if(Array[i] == value){
            printf("the number %d exist at the position %d.\n", value, i);
            break;
        }
        else if(i == (length-1)){
            printf("The number %d does not exist in the array.\n",value);
        }
    }

    return 0;
}
