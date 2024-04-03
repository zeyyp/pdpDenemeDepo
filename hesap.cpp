#include "stdio.h"
#include "conio.h"//getc() function
typedef enum{yanlis,dogru}tur_adi;//0--> yanlıs 1-->dogru
int main(){
   const double a=9.8;
   double m=100;
   printf("m:%lf\n",m);
   printf("a:%lf\n",a);
   printf("F=m*a-->%lf",m*a);
   

   return 0 ; }