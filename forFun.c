#include <stdio.h>
#include <math.h>

int main(){
    
    double amount_entered, remaining_balance = 0;
    
    do{
        scanf("%lf", &amount_entered);
        remaining_balance += amount_entered;
        if(remaining_balance < 0) {
            printf("Warning: Issuance amount exceeds balance. Transaction declined.\n\n");
            remaining_balance -= amount_entered;
            printf("Current Balance = Php%.2lf\n", remaining_balance);
        } else if(amount_entered > 0) {
            printf("Transaction: Deposit\n");
            printf("Amount entered: Php %.2lf\n", amount_entered);
            printf("Current Balance: Php %.2lf\n", remaining_balance);
        } else if(amount_entered < 0) {
            printf("Transaction: Issuance\n");
            printf("Amount entered: Php %.2lf\n", amount_entered * -1);
            printf("Current Balance: Php %.2lf\n", remaining_balance);
        } else {
            break;
        }
    }while(amount_entered != 0);
    
    printf("End of transactions.\n");
    
}