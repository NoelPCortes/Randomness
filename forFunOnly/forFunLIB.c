#include <stdio.h>

int main(){
    
    int sizeArr;
    
    scanf("%d", &sizeArr);
    
    int arrArg[sizeArr], a, resHigh , resLow;
    
    for(a = 0; a < sizeArr; a++){
        scanf("%d",&arrArg[a]);
    }
    
    resHigh = arrArg[0];
    resLow = arrArg[0];
    
    for(a = 0; a < sizeArr; a++){
        if(resHigh < arrArg[a]) {
            resHigh = arrArg[a];
        }
        if(resLow > arrArg[a]) {
            resLow = arrArg[a];
        }
    }
    
    printf("%d\n%d", resHigh, resLow);
    
}