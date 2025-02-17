/*Given the function prototype:  

     float convertToCm(float  feet, float  inches);

//define a function that will accept two input parameters: distance in feet and distance in inches.  Convert distance_in_feet to centimeters and the distance in INCHES to centimeters.  Return the total converted distances in centimeters.

 //define the function main() to allow the user to input distances in feet and inches and output the returned result from function call to convertToCm */
 
 #include <stdio.h>
 
 float convertToCm(float feet, float inches);
 
 int main(){
     
     float inch, feet;
     
     scanf("%f %f", &feet, &inch);
     
     double res = convertToCm(feet, inch);
     
     printf("%.2lf", res);
     
 }
 
 float convertToCm(float feet, float inches){
     return ((feet * 12) + inches) * 2.54;
 }