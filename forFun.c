#include <stdio.h>

/*1000
-500
0

Transaction: Deposit
Amount entered: Php 1000.00
Current Balance: Php 1000.00

Transaction: Issuance
Amount entered: Php 500.00
Current Balance: Php 500.00
End of transactions.*/

int main(){
    
    double amount_entered, remaining_balance = 0;
    
    
    
    do{
        scanf("%lf", &amount_entered);
        remaining_balance += amount_entered;
        if(remaining_balance < 0) {
            printf("Warning: Issuance amount exceeds balance. Transaction declined.\n");
            remaining_balance -= amount_entered;
        } else if(amount_entered > 0) {
            printf("Transaction: Deposit\n");
            printf("Amount entered: Php %.2lf\n", amount_entered);
            printf("Current Balance: Php %.2lf\n", remaining_balance);
        } else if(amount_entered < 0) {
            printf("Transaction: Deposit\n");
            printf("Amount entered: Php %.2lf\n", amount_entered);
            printf("Current Balance: Php %.2lf\n", remaining_balance);
        } else {
            break;
        }
    }while(amount_entered != 0);
    
    printf("End of transactions.\n");
    
}