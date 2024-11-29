#include <stdio.h>
#include <string.h>
#include <ctype.h>

int VerificationUsernameIFValid(char *username){

    int len = strlen(username);


    if(len < 3 || len >= 20){
        printf("\nUsername should atleast be 3 characters and not exceeding 20.\n\n");
        return 0;
    }

    for(int i = 0; i < len; i++){
        if(ispunct(username[i])){
        printf("\nNo special characters such as \"@, #, _, !\".\n\n");
        return 0;
        }
    }

    return 1;
}

int main(){

    char command[50], username[50];
    int validationStatus;

    do{
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    validationStatus = VerificationUsernameIFValid(username);
    }while(validationStatus != 1);


    if(validationStatus == 1){
        printf("\nValid Username.");
    }

}