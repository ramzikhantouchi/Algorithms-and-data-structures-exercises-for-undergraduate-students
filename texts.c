#include<stdio.h>
#include<string.h>

int main(){
    char TXT[200],X,temp_var;
    int lengthTXT,countX=0;

    printf("Enter text that does not exceed 200 character:\n");
    fgets(TXT,200,stdin);
    lengthTXT = strlen(TXT);
    printf("The length of the text is: %d\n",lengthTXT);

    printf("Enter a character to look for the number of it\'s occurrence in the text: ");
    scanf("%c",&X);
    for(int i = 0; i < lengthTXT; i++){
        if(TXT[i] == X) countX++;
    }
    printf("The number of occurence of the character \'%c\' in the text is: %d\n",X,countX);

    printf("Display the text:\n");
    printf("%s\n",TXT);

    // inverse the text

    for (int i =0; i<(lengthTXT/2); i++){
        temp_var = TXT[i];
        TXT[i] = TXT[lengthTXT-i-1];
        TXT[lengthTXT-1-i] = temp_var;
    }
    printf("The inverse text:\n");
    printf("%s",TXT);
    printf("\n");


    return 0;

}