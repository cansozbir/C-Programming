#include "stdio.h"
/// kullanıcıdan alınacak 10 adet pozitif ve negatif sayıların ayrı ayrı ortalamasını alınız
int main(void) {
  int i,sayi,pozitifort=0,kacpozitif=0,negatifort=0,kacnegatif=0;
  for (i=1;i<10;i++)
  {
  	printf("sayiyi giriniz: ");
  	scanf("%d",&sayi);
  	if (sayi<0)
  	{
  		kacpozitif += 1;
  		pozitifort += sayi;
  	}
  	else
  	{
  		kacnegatif += 1;
  		negatifort += sayi;
	}
  
  }
  printf("pozitiflerin ortalamasi :%d\nnegatiflerin ortalamasi :%d",pozitifort/kacpozitif,negatifort/kacnegatif);
  return 0;
}
