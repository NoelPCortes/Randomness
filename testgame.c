#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "Redirect.h"

bool optionConfirmation();

char emptyChar = ' ';

int universal_option = 1;

void display_filler();

int VerificationUsernameIFValid(char *);

int option_made(char *);

void main_menu();

int main(){

    char command[50], username[50], startOptions[50], shiftingOption;
    int validationStatus, userLogin = false, userGuest = false;

    //main menu do while loop
    do{
        display_filler();

        main_menu();
        

        display_filler();

        shiftingOption = getchar();

        if(shiftingOption == '\n'){
            shiftingOption = getchar();
            printf("Confirm: \n");
        }

        option_made(&shiftingOption);

    }while(optionConfirmation == false);
    

    /*if(userLogin == true){
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
    }*/

}

//just a filler using '#' to fill the screen
void display_filler(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 152; j++){
            printf("#");
        }
        printf("\n");
    }
}

int option_made(char *letter){
    *letter = toupper(*letter);
    if(*letter == 'W'){
        universal_option--;
    }
    else if(*letter == 'S'){
        universal_option++;
    }
    else option_confirmation();

    if(universal_option > 3){
        universal_option = 1;
    }
    else if(universal_option < 1){
        universal_option = 3;
    }

    return universal_option;
        
}

//shows the option in the main menu
void main_menu(){
    char scriptLogin[] = "Login", scriptGuest[] = "Play as Guest", scriptExit[] = "Exit", choice_of_player = '>';

    switch(universal_option){
        case 1:
            printf("\n\n\n%-60c%-2c%s\n", emptyChar, choice_of_player, scriptLogin);
            printf("%-60c%s\n", emptyChar, scriptGuest);
            printf("%-60c%s\n\n\n\n", emptyChar, scriptExit);
            break;
        case 2:
            printf("\n\n\n%-60c%s\n", emptyChar, scriptLogin);
            printf("%-60c%-2c%s\n", emptyChar, choice_of_player, scriptGuest);
            printf("%-60c%s\n\n\n\n", emptyChar, scriptExit);
            break;
        case 3:
            printf("\n\n\n%-60c%s\n", emptyChar, scriptLogin);
            printf("%-60c%s\n", emptyChar, scriptGuest);
            printf("%-60c%-2c%s\n\n\n\n", emptyChar, choice_of_player, scriptExit);
            break;    
        default: universal_option = 1; break;
    }
}


//fix the confirmation main menu
void option_confirmation(){
    char option_choice;
    printf("\n\n\n\n%-60c%s\n\n\n\n\n", emptyChar, "Confirm?");
    option_choice = getchar();
    if(option_choice == '\n'){
        option_choice = getchar();
        return true;
    }
    else return false;
}

/*int VerificationUsernameIFValid(char *username){

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
}*/