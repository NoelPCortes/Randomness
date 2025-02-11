#include <stdio.h>
#include <ctype.h>

int main(){
    
    int word; 
    double fee = 18.50;
    char delivery_type;
    
    delivery_type = getchar();
    if(delivery_type == '\0'){
        delivery_type = getchar();
    }
    
    scanf("%d", &word);
    
    if(delivery_type == 's' || delivery_type == 'S'){
        fee += 5.00;
        if(word > 12){
            fee += (float)(word - 12) * 1.50;
        }
    } else {
        if(word > 12){
            fee += (float)(word - 12) * 1.50;
        }
    }
    
    printf("%.2lf", fee);
    
}