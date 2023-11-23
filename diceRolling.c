#include<stdio.h>


int main(){
    int p1, p2, p1Score = 0, p2Score = 0;

    while(1){
        do{
        printf("Enter first player score: ");
        scanf("%d",&p1);
        }while(p1>6 || p1<1);
        do{
        printf("Enter scond player score: ");
        scanf("%d",&p2);
        }while(p2>6 || p2<1);
        if(p1 > p2) 
            p1Score++;
        else if (p2 > p1)
            p2Score++;

        if(p1Score == 11){
            printf("Congratulations!. Player One won with score: %d - %d\n",p1Score,p2Score);
            break;
        }
        if(p2Score == 11){
            printf("Congratulations!. Player Two won with score: %d - %d\n",p2Score,p1Score);
            break;
        }
        
    }



    return 0;
}