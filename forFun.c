#include <stdio.h>
#include <stdbool.h>

bool freeze_c(int temperature){
    if(temperature <= 0) return true;
    else return false;
}

bool freeze_f(int temperature){
    if(temperature <= 32) return true;
    else return false;
}

void is_freezing ( bool (*freeze_check)(int)){
    int temperature = 0;
    printf("Enter temperature: ");
    scanf("%d", &temperature);
    if(freeze_check(temperature)){
        printf("Is freezing");
    }
    else
        printf("Is not freezing");
}

int main(){

    char input;

    printf("\nEnter (F)arenheit or (C)elsius: ");
    input = getchar();

    if(input == 'c'){
        is_freezing(freeze_c);
    }else{
        is_freezing(freeze_f);
    }

}