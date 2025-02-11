#include <stdio.h>
#include <ctype.h>

int main(){
    char blood_type;
    float liter_blood;
    double total_fee;
    
    blood_type = getchar();
    if(blood_type == '\0'){
        blood_type = getchar();
    }
    
    scanf("%f", &liter_blood);
    
    switch(blood_type){
        case 'A': total_fee = liter_blood * 3000.00; break;
        case 'B': total_fee = liter_blood * 1800.75; break;
        case 'C': total_fee = liter_blood * 2880.25; break;
        case 'O': total_fee = liter_blood * 1500.00; break;
    }
    
    printf("%.2lf", total_fee);
    
}