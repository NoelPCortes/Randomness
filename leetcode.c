#include <stdio.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2);

int main(){

    char word1[10], word2[10];

    printf("Enter first word: ");
    fgets(word1, sizeof(word1), stdin);

    printf("Enter second word: ");
    fgets(word2, sizeof(word2), stdin);

    const int numLength = strlen(word1) + strlen(word2);

    char * output[numLength];

    output[numLength] = mergeAlternately(word1, word2);

    printf("%s", *output);

}

char * mergeAlternately(char * word1, char * word2){
    const int length = sizeof(word1) + sizeof(word2);
    const int word1_length = sizeof(word1);
    const int word2_length = sizeof(word2);
    char output[length + 1];
    
    int i = 0, j = 0, k = 0;

    while(i < word1_length && j < word2_length){
        output[k++] = word1[i++];
        output[k++] = word2[j++];
    }
    
    while(i < word1_length){
        output[k++] = word1[i++];
    }
    
    while(j < word2_length){
        output[k++] = word2[j++];
    }
    
    output[k] = '\0';
    
}