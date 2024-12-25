#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

typedef char name[20];

typedef enum{
    EASY,
    NORMAL,
    HARD,
    EXPERT
} level;

typedef struct
{
    name username;
    int ID;
} user;

int main(){

    srand(time(0));

    user username;
    user IDNO;

    printf("Enter username: ");
    fgets(username.username, sizeof(username.username), stdin);

    IDNO.ID = rand() % 9999999 + 1000000;

    printf("\nUsername: %sID: %d", username.username, IDNO.ID);

    char choice[20];

    printf("\n\nChoose level:\nEASY\nNORMALs\nHARD\nEXPERT\n\n>");
    fgets(choice, sizeof(choice), stdin);

    for (int i = 0; i < strlen(choice); i++) {
        choice[i] = toupper(choice[i]);
    }

    if(strcmp(choice, "EASY") == 0){
        printf("You've chosen Easy difficulty");
    } else if(strcmp(choice, "NORMAL") == 0){
        printf("You've chosen Normal difficulty");
    } else if(strcmp(choice, "HARD") == 0){
        printf("You've chosen Hard difficulty");
    } else if(strcmp(choice, "EXPERT") == 0){
        printf("You've chosen Expert difficulty");
    } else {
        printf("Not a valid difficulty");
    }

}