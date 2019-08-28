
#include "arvorebinaria.h"

nodechar pos[256];

void leituraVetor()
{
	int i;
	   for(i=65;i<123;i++){
		   pos[i-65]->caracter=i;
		   pos->quantidade = 0;
		   printf("%c",pos[i-65]->caracter[0]);
	   }
	   return 0;	
}




