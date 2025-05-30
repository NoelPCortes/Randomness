#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "Redirect.h"

bool optionConfirmation = false;

char emptyChar = ' ';

int universal_confirm_option = 1;

int universal_option = 1;

void display_filler_top();
void display_filler_bottom();

int VerificationUsernameIFValid(char *);

int option_made(char *);

void main_menu();

void option_Confirmation();

int main(){

    char command[50], username[50], startOptions[50], shiftingOption;
    int validationStatus, userLogin = false, userGuest = false;

    //main menu do while loop
    do{
        display_filler_top();

        main_menu();

        display_filler_bottom();

        shiftingOption = getchar();

        if(shiftingOption == '\n'){
            shiftingOption = getchar();
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
//change it into a newline instead of # for lesser bugs
void display_filler_top(){
    printf("\n\n\n\n\n\n");
}

void display_filler_bottom(){
    printf("\n\n\n\n\n\n");
}

int option_made(char *letter){
    *letter = toupper(*letter);
    if(*letter == 'W'){
        universal_option--;
    }
    else if(*letter == 'S'){
        universal_option++;
    }
    else{
        option_Confirmation();
    }

    if(universal_option > 3){
        universal_option = 1;
    }
    else if(universal_option < 1){
        universal_option = 3;
    }
    else{
        universal_option = universal_option;
    }

    return universal_option;
        
}

//shows the option in the main menu
void main_menu(){
    char scriptLogin[] = "Login", scriptGuest[] = "Play as Guest", scriptExit[] = "Exit", choice_of_player = '>';

    switch(universal_option){
        case 1:
            printf("%-60c%-2c%s\n", emptyChar, choice_of_player, scriptLogin);
            printf("%-60c%s\n", emptyChar, scriptGuest);
            printf("%-60c%s", emptyChar, scriptExit);
            break;
        case 2:
            printf("%-60c%s\n", emptyChar, scriptLogin);
            printf("%-60c%-2c%s\n", emptyChar, choice_of_player, scriptGuest);
            printf("%-60c%s", emptyChar, scriptExit);
            break;
        case 3:
            printf("%-60c%s\n", emptyChar, scriptLogin);
            printf("%-60c%s\n", emptyChar, scriptGuest);
            printf("%-60c%-2c%s", emptyChar, choice_of_player, scriptExit);
            break;    
        default: universal_option = 1; break;
    }
}


//fix the confirmation main menu a lot of errors here
void option_Confirmation(){
    int final_decision_option = 1;
    bool chLetter_bool = false;
    char chLetter;

    while(chLetter_bool == false){
        display_filler_top();

        printf("\n\n\n\n%-60c%s\n", emptyChar, "Confirm?");
        switch (universal_confirm_option)
        {
        case 1:
            printf("%-60c%-4s%c", emptyChar, "Yes", '<');
            printf("%-2c%s", emptyChar, "No");
            break;
        case 2:
            printf("%-60c%s", emptyChar, "Yes");
            printf("%-2c%-2c%s", emptyChar, '>', "No");
            break;
        default: break;
        }

        display_filler_bottom();

        chLetter = getchar();
        if(chLetter == '\n'){
            chLetter = getchar();
        }

        chLetter = tolower(chLetter);

        if(chLetter == 'a'){
            universal_confirm_option++;
        }
        else if(chLetter == 'd'){
            universal_confirm_option--;
        }
        else{
            universal_confirm_option = universal_confirm_option;
        }

        if(universal_confirm_option > 2){
            universal_confirm_option = 1;
        }
        else if(universal_confirm_option < 1){
            universal_confirm_option = 2;
        }
        else{
            universal_confirm_option = universal_confirm_option;
        }
    }
    
}

//Username validation
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