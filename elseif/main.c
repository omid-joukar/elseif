#include <stdio.h>

int main(void) 
{
  int zahl1,zahl2,zahl3;
printf("Dieses Programm ermittelt den Namen und den Wert der größten von drei Zahlen\n\n");
printf("Bitte 1. Zahl eingeben: ");
scanf("%d",&zahl1);
printf("Bitte 2. Zahl eingeben: ");
scanf("%d",&zahl2);
printf("Bitte 3. Zahl eingeben: ");
scanf("%d",&zahl3);
if(zahl1>zahl2)
{
  if(zahl1>zahl3)
  {
    printf(" Die 1. Zahl ist die größte und hat den Wert : %d",zahl1);
  }else
   {
     printf("Die 3. Zahl ist die größte und hat den Wert : %d",zahl3);
   }
}else
{
  if(zahl2> zahl3)
  {
    printf("Die 2. Zahl ist die größte und hat den Wert : %d",zahl2);
  }else
   {
     printf("Die 3. Zahl ist die größte und hat den Wert : %d", zahl3);
   }
}
  return 0;
}