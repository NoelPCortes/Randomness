#include <stdio.h>

char * mergeAlternately(char * word1, char * word2);

int main(){

    char word1[50], word2[50];

    printf("Enter first word: ");
    fgets(word1, sizeof(word1), stdin);

    printf("Enter second word: ");
    fgets(word2, sizeof(word2), stdin);

    char output[sizeof(word1) + sizeof(word2)];

    output[sizeof(word1) + sizeof(word2)] = mergeAlternately(word1, word2);

}

char * mergeAlternately(char * word1, char * word2){
    const int length = sizeof(word1) + sizeof(word2);
    char * output[length];
    for(int i = 1; i < length + 1; i++){
        if(i % 2 != 0){
            output[i] = word1[i];
        }
        else{
            output[i] = word2[i];
        }
    }
    
    return *output;
    
}