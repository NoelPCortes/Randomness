#include <stdio.h>

int main(){
    
    int pebis[10] = {1,2,3,4,5,6,7,8,9,10};

    int a, temp;

    for(a = 0; a < 10; a++){
        if(pebis[a] == 10){
            temp = pebis[a];
            pebis[a] = pebis[0];
            pebis[0] = temp;
        }
    }

    for(a = 0; a < 10; a++){
        printf("%d\n", pebis[a]);
    }

}

/*
Element 1 = 1;
Element 2 = 4;
Element 3 = 9;
Element 4 = 16;
Element 5 = 25;
*/