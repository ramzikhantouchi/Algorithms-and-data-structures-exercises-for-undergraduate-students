#include<stdio.h>

int main(){
    //Entering the dimensionality of matrices A and B -> N*M
    int N,M;
    do{
        printf("Enter the number of rows: ");
        scanf("%d",&N);

    }while(N <0 || N> 50 );
    do{
        printf("Enter the number of columns: ");
        scanf("%d",&M);

    }while(M <0 || M> 50 );
    
    int A[N][M], B[N][M], C[N][M];
    int sumA = 0, sumB = 0, X;
    // Filling the Matrices A and B row by row
    
    printf("Fill the first matrix %d*%d called A with integer numbers row by row:\n",N,M);
    for( int i = 0; i< N; i++){
        printf("Fill the row number: %d\n",(i+1));

        for(int j = 0; j< M; j++){
            scanf("%d",&A[i][j]);
            sumA = sumA + A[i][j];

        }
    }
    printf("Fill the second matrix %d*%d called B with integer numbers row by row:\n",N,M);
    
    for( int i = 0; i< N; i++){
        printf("Fill the row number: %d\n",(i+1));

        for(int j = 0; j< M; j++){
            scanf("%d",&B[i][j]);
            sumB = sumB + B[i][j];

        }
    }
    
    printf("First Matrix:\n");
    for (int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the first matrix elements is: %d\n",sumA);
    printf("Second Matrix:\n");
    for (int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the second matrix elements is: %d\n",sumB);

    //Matrices addition
    for( int i = 0; i<N; i++){
        for( int j = 0; j < M; j++){
            C[i][j] = A[i][j]+ B[i][j];
        }
    }
    printf("The result of A + B is the matrix:\n");
    for (int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for (int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            C[j][i] = 0; // this initialization is used because matrix C was used to store A + B
            for(int k = 0; k < M; k++){
                C[j][i] = C[j][i] +(A[j][k]*B[k][i]);
            }
        }
    }

    printf("The result of A * B is the matrix:\n");
    for (int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter an integer value: ");
    scanf("%d",&X);
    int occurrenceInA = 0, occurrenceInB = 0;

    for(int i = 0; i <N; i++){
        for(int j = 0; j < M; j++){
            if(A[i][j] == X){
                occurrenceInA+=1;
            }
             if(B[i][j] == X){
                occurrenceInB+=1;
            }
        }
    }
    printf("The number of occurrence of value %d in matrix A is: %d\n",X,occurrenceInA);
    printf("The number of occurrence of value %d in matrix B is: %d\n",X,occurrenceInB);






    return 0;
}