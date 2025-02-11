#include <stdio.h>

int main(){
    
    double sales, total_fee;
    
    scanf("%lf", &sales);
    
    if(sales < 10000) {
        total_fee = sales * 0.02;
    } else if(sales < 25000) {
        total_fee = sales * 0.05;
    } else if(sales < 50000) {
        total_fee = sales * 0.1;
    } else if(sales < 75000) {
        total_fee = sales * 0.13;
    } else {
        total_fee = sales * 0.15;
    }
    
    printf("%.2lf", total_fee);
    
}