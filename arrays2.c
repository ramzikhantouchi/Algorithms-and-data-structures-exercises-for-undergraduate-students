#include<stdio.h>


int main(){
    int N, min, max, posMin = 0, posMax = 0, sum = 0, temp_var, negIdx = 0, posIdx = 0;
    do{
        printf("Enter the length of the array (maximum length is 50): ");
        scanf("%d",&N);
    }while(N<1 || N>50);
    int T[N],TPOS[N], TNEG[N];
    //Filling the array T with integer values
    printf("Fill the array T with integer values:\n");
    for(int i = 0; i<N; i++){
        scanf("%d",&T[i]);
    }
    //display the element of T
    printf("T: ");
    for (int i = 0; i<N; i++){
        printf("%d ",T[i]);
    }
    //Calculte the sum of T elements
    for( int i = 0; i<N; i++){
        sum +=T[i];
    }
    printf("\nThe sum of T elements is: %d",sum);
    min = T[0];
    max = T[0];
    // Retrieve Min and Max
    for (int i = 1; i<N; i++){
        if(min > T[i]){
            min = T[i];
            posMin = i;
        }
        if(max < T[i]){
            max = T[i];
            posMax = i;
        }
    }
    printf("\nThe largest value in the array T is %d, and its position is %d.\nThe smallest value in the array T is %d, and its positio is %d.",max,posMax,min,posMin);

    // Reversing the array T
    for(int i = 0; i < (N/2); i++){
        temp_var = T[i];
        T[i] = T[N-i-1];
        T[N-i-1] = temp_var;

    }
    printf("\nReversed Array: ");
    for (int i = 0; i<N; i++){
        printf("%d ",T[i]);
    }
    //Copying all strictly positive elements into a second array TPOS and all strictly negative values into a third array TNEG, and displaying the TPOS and TNEG arrays.
    for (int i = 0; i < N; i++){
        if(T[i]>0){
            TPOS[posIdx] = T[i];
            posIdx += 1;
        }else if(T[i]< 0){
            TNEG[negIdx] = T[i];
            negIdx += 1;
        }
    }
    
    if(posIdx > 0){
    printf("\nPositive Values: ");
    for(int i = 0; i<posIdx; i++){
        printf("%d ", TPOS[i]);
    }}else printf("\nThere is no Positive Value in the Array TPOS to display.");
    
    if(negIdx >0){
        printf("\nNegative Values: ");
        for (int i = 0; i<negIdx; i++){
        printf("%d ", TNEG[i]);
    }}else printf("\nThere is no Negative Value in the Array TNEG to display.");

    
    
    return 0;
}