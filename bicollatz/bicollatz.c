#include <stdlib.h>
#include <stdio.h>

void main()
{
	int A, B, i=0;
	FILE *in;
	in = fopen("input.txt","r");
	fscanf(in,"%d",&A);
	fscanf(in,"%d",&B);
	fclose(in);
	
	while((A!=1)||(B!=1))
	{
		i++;
		if((A%2==0)&&(B%2==0))
		{
			A=A/2;
			B=B/2;
		}
		else
		{
			if((A%2!=0)&&(B%2!=0))
			{
				A=A*3+1;
				B=B*3+1;
			}
			else 
			{
				if(A%2==0)
				{
					B=B+3;
				}
				else
				{
					A=A+3;
				}
			}
		}
	}
	
	FILE *out;
	out = fopen("output.txt","w");
	fprintf(out,"%d",i);
	fclose(out);
}
