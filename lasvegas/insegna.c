#include <stdlib.h>
#include <stdio.h>

void main()
{
	int N,i=0,j=1,uguali=0;
	FILE *in;
	in = fopen("input.txt","r");
	fscanf(in,"%d",&N);											//input N
	char G[N], W[N], test[N];
	fscanf(in,"%s",G);											//input G
	fscanf(in,"%s",W);											//input W

	
	
	for(i=0;i<N;i++)											//controlla che G e W non siano già uguali
		{
   	     	if(G[i]!=W[i])
   	    	{
   	    	    uguali=1;
   	    	    break;
   	    	}
   		}
	if(uguali==0)												//se sono uguali allora >> "1"
	{
		FILE *out;
		out = fopen("output.txt","w");
		fprintf(out,"1");
		fclose(out);
	}
	else														//altrimenti
	{
		while((uguali!=0)&&(j<N))								//entra in ciclo finche non riesci a far si che w e test siano uguali o finchè non hai testato tutte le possibili combinazioni
		{
			for(i=0;i<N;i++)									//inverti le parti di G nel punto j e scrivile in test
			{
				if(j==N)
				{
					j=0;
				}
				test[i]=G[j];
				if(j!=N)
				{
					j++;
				}
			}
			uguali=0;
			for(i=0;i<N;i++)									//controlla se test e W sono uguali
			{
   		     	if(test[i]!=W[i])
   		    	{
   		    	    uguali=1;
   		    	    break;
   		    	}
   			}
   			j++;
		}
	}
	if(uguali==0)												//se l'uscita dal ciclo (33-WHILE) è stata causata dal aver trovato una soluzione allora >> 1
	{
		FILE *out;
		out = fopen("output.txt","w");
		fprintf(out,"1");
		fclose(out);
	}
	else														//se l'uscita dal ciclo (33-WHILE) è stata causata dall'aver provato tutte le combinazioni allora >> 0
	{
		FILE *out;
		out = fopen("output.txt","w");
		fprintf(out,"0");
		fclose(out);
	}
}
