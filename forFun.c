#include <stdio.h>

/*In order to discourage excess electric consumption, an electrical company charges its customers a lower rate of P75 for the first 250 kilowatt-hours and a higher rate of P8.5 for each additional kilowatt-hour. In addition, a 10% surtax is added to the final bill. Write a program that calculates the electrical bill given the number of kilowatt-hours consumed as input. At the end, print the number of kilowatt-hours consumed and the computed bill.*/

int main(){
    
    int watt_hrs;
    double total_bill = 75;
    
    scanf("%d", &watt_hrs);
    
    if(watt_hrs > 250){
        total_bill += (watt_hrs - 250) * 8.5;
    }
    
    total_bill += (total_bill*0.1);
    
    printf("Kilowatt-hours: %d\n", watt_hrs);
    printf("Electric bill: Php %.2lf\n", total_bill);
    
}