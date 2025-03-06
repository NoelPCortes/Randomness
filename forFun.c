#include <stdio.h>

float Area_Rect(float length, float width){
    return length * width;
}

float Pero_Rect(float length, float width){
    return 2 * (length + width);
}

float Area_Tria(float length, float width){
    return (length * width) / 2;
}

int main() {
    
    float numA, numB;
    
    scanf("%f", &numA);
    scanf("%f", &numB);
    
    printf("Area of a rectangle: %.2f\n", Area_Rect(numA,numB));
    printf("Perimeter of a rectangle: %.2f\n", Pero_Rect(numA,numB));
    printf("Area of a triangle: %.2f\n", Area_Tria(numA,numB));

    return 0;
}