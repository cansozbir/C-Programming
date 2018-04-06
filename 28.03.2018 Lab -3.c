#include "stdio.h"
void birdenNkadar(int n);
int birdenNkadar2(int n);
int topla(int n);
int faktoriyel(int n);


int main(void) {
  birdenNkadar(5);
  printf("\n");
  int x=birdenNkadar2(5);
  printf("\nx= %d",x);
  printf("\n");
  printf("5 faktoriyel = %d dir",faktoriyel(5));
  return 0;
}



void birdenNkadar(int n)
{
	if (n>1)
		birdenNkadar(n-1);
	printf("%d",n);
}



int birdenNkadar2(int n)  ///bu fonksiyonu tam yazamadım hatalı
{
	if (n==0)
		return 0;
	birdenNkadar2(n-1);
	return n;
}



int topla(int n)
{
	if (n==0)
		return 1;
	return n+topla(n-1);
}

int faktoriyel(int n)
{
	int fact = n;
	if (n == 1 || n==0)		
		return 1 ;
	else
		return fact*faktoriyel(n-1);
}

