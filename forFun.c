#include <stdio.h>

/*A circular racetrack is composed of four portions: concrete, mud, sand and asphalt. Sly Slick’s car takes 30 seconds to cross the concrete, 55 seconds to cross the mud, 47 seconds to cross the sand and 38 seconds to cross the asphalt. Make a program that would input the TIME (in seconds) and output WHERE in the track Sly’s car is. Assume that the race starts at the beginning of the concrete portion.

*/

int main(){
    
    int time_sec, amount_time = 0;
    
    scanf("%d", &time_sec);
    
    amount_time += time_sec;
    
    if(amount_time > 170) {
        amount_time -= 170;
    }
    
    if(amount_time <= 30) {
        printf("concrete");
    } else if(amount_time <= 85) {
        printf("mud");
    } else if(amount_time <= 132) {
        printf("sand");
    } else {
        printf("asphalt");
    }
    
}