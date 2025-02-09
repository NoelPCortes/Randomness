#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    scanf("%d", &n);
    int d;
    scanf("%d", &d);
    int h;
    scanf("%d", &h);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    int resD = d * 24;
    int aliveRes = n * h;

    if(aliveRes < resD) {
        printf("Not enough\n");
    } else if (aliveRes == resD) {
        printf("Just enough\n");
    } else {
        printf("It is enough\n");
    }
 
    return 0;
}