#include "stdio.h"

int main(void) {
  int i,kactek=0,kaccift=0,tektoplam=0,cifttoplam=0;
  for (i=7;i<=25;i++)
  {
  	if (i%2==0)
  	{
  		kaccift += 1;
  		cifttoplam += i;
  	}
  	else
  	{
  		kactek += 1;
  		tektoplam += i;
  	}
  }
  printf("teklerin ortalamasi : %d\nciftlerin ortalamasi : %d",tektoplam/kactek,cifttoplam/kaccift);
  return 0;
}
