#include <stdio.h>
#include <math.h>
#include <locale.h>



int main()
{
setlocale(LC_ALL, "Turkish");
for(int b=0;b<50;b++)
{
double sonuc,ust,sayi;
printf("sayiyi girin\n");
scanf("%lf",&sayi);
printf("sayinin ust kuvvetini girin \n");
scanf("%lf",&ust);
 
sonuc =pow(sayi,ust);
printf("%lf \n",sonuc);
}
return 0;


}