#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "Redirect.h"

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

    char command[50], username[50], startOptions[50], shiftingOption, optionConfirmation = false;
    int validationStatus, userLogin = false, userGuest = false;

    do{
        char scriptLogin[10] = "Login", scriptGuest[20] = "Play as Guest", scriptExit[10] = "Exit";
        printf("%-20s\n", scriptLogin);
        printf("%-20s\n", scriptGuest);
        printf("%-20s\n", scriptExit);
        scanf("%c", &shiftingOption);
    }while(optionConfirmation == false);
    

    if(userLogin == true){
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

    char choice[10];

    while(true){
        printf("\n\nChoose level:\nEASY\nNORMAL\nHARD\nEXPERT\n\n>");
        fgets(choice, sizeof(choice), stdin);

        choice[strlen(choice)-1] = '\0';

        for (int i = 0; i < strlen(choice); i++) {
            choice[i] = toupper(choice[i]);
        }

        if(strcmp(choice, "EASY") == 0){
            printf("You've chosen Easy difficulty.");
            break;
        }
        else if(strcmp(choice, "NORMAL") == 0){
            printf("You've chosen Normal difficulty.");
            break;
        }
        else if(strcmp(choice, "HARD") == 0){
            printf("You've chosen Hard difficulty");
            break;
        }
        else if(strcmp(choice, "EXPERT") == 0){
            printf("You've chosen Expert difficulty");
            break;
        }
        else{
            printf("Invalid choice");
        }
    };

}