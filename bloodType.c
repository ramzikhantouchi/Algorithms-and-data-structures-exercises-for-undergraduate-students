#include <stdio.h>
#include <string.h>

int main() {
    char blood[3], exit;
    int populationOp = 0, populationAp = 0, populationBp = 0, populationABp = 0,
        populationOn = 0, populationAn = 0, populationBn = 0, populationABn = 0, population = 0;
    
   

    do {
        printf("\nPlease enter your blood type: ");
        scanf("%s", blood);
        population++;
        if (strcmp(blood, "O-") == 0 || strcmp(blood, "o-") == 0)  
            populationOn++;
        else if (strcmp(blood, "O+") == 0 || strcmp(blood, "0+") == 0) 
            populationOp++;
        
        else if (strcmp(blood, "A-") == 0 || strcmp(blood, "a-") == 0)
            populationAn++; 
        
        else if (strcmp(blood, "A+") == 0 || strcmp(blood, "a+") == 0) 
            populationAp++;
          
        else if (strcmp(blood, "B-") == 0 || strcmp(blood, "b-") == 0) 
            populationBn++;
        
        else if (strcmp(blood, "B+") == 0 || strcmp(blood, "b+") == 0)
            populationBn++;
        
        else if (strcmp(blood, "AB-") == 0 || strcmp(blood, "ab-") == 0) 
            populationABn++;
        
        else if (strcmp(blood, "AB+") == 0 || strcmp(blood, "ab+") == 0)
            populationABp++;
        
        else 
            printf("Please enter a valid blood type (A,B,AB,O(+/-)).\n");
        

        printf("Do you want to quit? (click Q for yes, anything for no): ");
        scanf(" %c", &exit);

    } while (exit != 'Q' && exit != 'q');

    printf("The total number of population is: %d\n",population);
    printf("The number of people that have A+ blood type is  %d with a percentage of %.2f%%\n", populationAp, (float)((populationAp*100)/population));
    printf("The number of people that have A- blood type is  %d with a percentage of %.2f%%\n", populationAn, (float)((populationAn*100)/population));
    printf("The number of people that have B+ blood type is  %d with a percentage of %.2f%%\n", populationBp, (float)((populationBp*100)/population));
    printf("The number of people that have B- blood type is  %d with a percentage of %.2f%%\n", populationBn, (float)((populationBn*100)/population));
    printf("The number of people that have AB+ blood type is  %d with a percentage of %.2f%%\n", populationABp, (float)((populationABp*100)/population));
    printf("The number of people that have AB- blood type is  %d with a percentage of %.2f%%\n", populationABn, (float)((populationABn*100)/population));
    printf("The number of people that have O+ blood type is  %d with a percentage of %.2f%%\n", populationOp, (float)((populationOp*100)/population));
    printf("The number of people that have O- blood type is  %d with a percentage of %.2f%%\n", populationOn, (float)((populationOn*100)/population));
    

    

    return 0;
}