#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

typedef char name[20];

enum level{
    EASY = 1,
    NORMAL,
    HARD,
    EXPERT
};

typedef struct
{
    name username;
    int ID;
} user;

int main(){

    srand(time(NULL));

    enum level choices;

    user username;
    user IDNO;

    printf("Enter username: ");
    fgets(username.username, sizeof(username.username), stdin);

    IDNO.ID = rand() % 9999999 + 1000000;

    printf("\nUsername: %sID: %d", username.username, IDNO.ID);

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