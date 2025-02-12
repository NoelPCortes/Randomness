#include <stdio.h>

/*     if total sales is                  Commission is
above 0 but below 10,000                 2% of total sales
at least 10,000 but below 25,000       5% of total sales
at least 25,000 but below 50,000      10% of total sales
at least 50,000 but below 75,000      13% of total sales
at least 75,000 but below 100,000    15% of total sales       
   at least 100,000                                25% of total sales       */

int main(){
    
    double sales, com_sales;
    
    scanf("%lf", &sales);
    
    if(sales < 10000) {
        com_sales = sales * 0.02;
    } else if(sales < 25000) {
        com_sales = sales * 0.05;
    } else if(sales < 50000) {
        com_sales = sales * 0.1;
    } else if(sales < 75000) {
        com_sales = sales * 0.13;
    } else if(sales < 100000) {
        com_sales = sales * 0.15;
    } else {
        com_sales = sales * 0.25;
    }
    
    printf("%.2lf", com_sales);
    
}