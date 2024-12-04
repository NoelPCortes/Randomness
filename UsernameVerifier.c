#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Redirect.h"

int VerificationUsernameIFValid(char *username);

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