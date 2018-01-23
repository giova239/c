//forse si puó migliorare
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main (void)
{
	int i=0,j=0,vocalinom1=0,consonantinom1=0,vocalicog1=0,consonanticog1=0,lunghezzacog,lunghezzanom,codicefiscalecheck=0;
	char nome[30],cognome[50],data[11],sesso,comune[50],copiadata[11],comuni2[50];
	char consonantinom[30],consonanticog[50],vocalinom[30],vocalicog[50],codicefiscale[16];
	FILE *comunefile;
	comunefile=fopen("comuni.txt","r");
	printf("\t\t\tCALCOLATORE CODICE FISCALE\n\n\n");
	printf("SI PU%c SCRIVERE SIA IN MAIUSCOLO CHE IN MINUSCOLO TRANNE IL COMUNE CHE VA \nSCRITTO TUTTO IN MINUSCOLO\n\n\n",(char)(227));
	printf("Nome:\t\t\t\t");									//lettura nome
	scanf("%s",nome);
	while(nome[i]|='\0')
	{
		i++;
	}
	lunghezzanom=i;
	for(i=0;i<lunghezzanom;i++)
	{
		switch(nome[i])
		{
			case 'a': nome[i]='A';
					  break;
			case 'b': nome[i]='B';
					  break;
			case 'c': nome[i]='C';
					  break;
			case 'd': nome[i]='D';
					  break;
			case 'e': nome[i]='E';
					  break;
			case 'f': nome[i]='F';
					  break;
			case 'g': nome[i]='G';
					  break;
			case 'h': nome[i]='H';
					  break;
			case 'i': nome[i]='I';
					  break;
			case 'j': nome[i]='J';
					  break;
			case 'k': nome[i]='K';
					  break;
			case 'l': nome[i]='L';
					  break;
			case 'm': nome[i]='M';
					  break;
			case 'n': nome[i]='N';
					  break;
			case 'o': nome[i]='O';
					  break;
			case 'p': nome[i]='P';
					  break;
			case 'q': nome[i]='Q';
					  break;
			case 'r': nome[i]='R';
					  break;
			case 's': nome[i]='S';
					  break;
			case 't': nome[i]='T';
					  break;
			case 'u': nome[i]='U';
					  break;
			case 'v': nome[i]='V';
					  break;
			case 'w': nome[i]='W';
					  break;
			case 'x': nome[i]='X';
					  break;
			case 'y': nome[i]='Y';
					  break;
			case 'z': nome[i]='Z';
					  break;
		}
	}
	printf("Cognome:\t\t\t");								//lettura cognome
	scanf("%s",cognome);
	i=0;
	while(cognome[i]|='\0')								// individua lunghezza stringa
	{
		i++;
	}
	lunghezzacog=i;
	for(i=0;i<lunghezzacog;i++)
	{
		switch(cognome[i])
		{
			case 'a': cognome[i]='A';
					  break;
			case 'b': cognome[i]='B';
					  break;
			case 'c': cognome[i]='C';
					  break;
			case 'd': cognome[i]='D';
					  break;
			case 'e': cognome[i]='E';
					  break;
			case 'f': cognome[i]='F';
					  break;
			case 'g': cognome[i]='G';
					  break;
			case 'h': cognome[i]='H';
					  break;
			case 'i': cognome[i]='I';
					  break;
			case 'j': cognome[i]='J';
					  break;
			case 'k': cognome[i]='K';
					  break;
			case 'l': cognome[i]='L';
					  break;
			case 'm': cognome[i]='M';
					  break;
			case 'n': cognome[i]='N';
					  break;
			case 'o': cognome[i]='O';
					  break;
			case 'p': cognome[i]='P';
					  break;
			case 'q': cognome[i]='Q';
					  break;
			case 'r': cognome[i]='R';
					  break;
			case 's': cognome[i]='S';
					  break;
			case 't': cognome[i]='T';
					  break;
			case 'u': cognome[i]='U';
					  break;
			case 'v': cognome[i]='V';
					  break;
			case 'w': cognome[i]='W';
					  break;
			case 'x': cognome[i]='X';
					  break;
			case 'y': cognome[i]='Y';
					  break;
			case 'z': cognome[i]='Z';
					  break;
		}
	}
	for(i=0;i<lunghezzacog;i++)							//pulizia array
	{
		consonanticog[i]=' ';
		vocalicog[i]=' ';
	}
	for(i=0;i<16;i++)
	{
		codicefiscale[i]=' ';
	}
	printf("Data di nascita(GG/MM/AAAA):\t");			//lettura data
	scanf("%s",data);
	strcpy(copiadata,data);
	printf("Sesso(F/M):\t\t\t");							//lettura sesso
	scanf("%1s",&sesso);
	printf("Comune:\t\t\t\t");								//lettura comune
	scanf("%s",comune);
	for(i=0;i<lunghezzanom;i++)						//divisione vocali/consonanti	nome
	{
		if(nome[i]=='A'||nome[i]=='E'||nome[i]=='I'||nome[i]=='O'||nome[i]=='U')
		{
			vocalinom[vocalinom1]=nome[i];
			vocalinom1++;
		}
		else
		{
			consonantinom[consonantinom1]=nome[i];
			consonantinom1++;
		}
	}
	for(i=0;i<lunghezzacog;i++)						// divisione vocali/consonanti cognome
	{
		if(cognome[i]=='A'||cognome[i]=='E'||cognome[i]=='I'||cognome[i]=='O'||cognome[i]=='U')
		{
			vocalicog[vocalicog1]=cognome[i];
			vocalicog1++;
		}
		else
		{
			consonanticog[consonanticog1]=cognome[i];
			consonanticog1++;
		}
	}
	if(consonanticog1>=3)			//stampa cognome
	{
	for(i=0;i<3;i++)
	{
		codicefiscale[i]=consonanticog[i];
	}
	}
	else
	{
		if(consonanticog1==2&&vocalicog1>=1)
		{
			codicefiscale[0]=consonanticog[0];
			codicefiscale[1]=consonanticog[1];
			codicefiscale[3]=vocalicog[0];
		}
		else
		{
			if(consonanticog1==1&&vocalicog1>1)
			{
				codicefiscale[0]=consonanticog[0];
				codicefiscale[1]=vocalicog[0];
				codicefiscale[2]=vocalicog[1];
			}
			else
			{
				codicefiscale[0]=consonanticog[0];
				codicefiscale[1]=vocalicog[0];
				codicefiscale[2]='X';
			}
		}
	}
	if(consonantinom1>=4)				//stampa nome
	{
		codicefiscale[3]=consonantinom[0];
		codicefiscale[4]=consonantinom[2];
		codicefiscale[5]=consonantinom[3];
	}
	else
	{
		if(consonantinom1==3)
		{
			j=0;
			for(i=3;i<6;i++)
			{
				codicefiscale[i]=consonantinom[j];
				j++;
			}
		}
		else
		{
			if(consonantinom1==2)								//casi particolare nome
			{
				codicefiscale[3]=consonantinom[0];
				codicefiscale[4]=consonantinom[1];
				codicefiscale[5]=vocalinom[0];
			}
			else
			{
				if(consonantinom1==1&&vocalinom1==2)
				{
					codicefiscale[3]=consonantinom[0];
					codicefiscale[4]=vocalinom[0];
					codicefiscale[5]=vocalinom[1];
				}
				else
				{
					if(consonantinom1==1&&vocalinom1==1)
					{
						codicefiscale[3]=consonantinom[0];
						codicefiscale[4]=vocalinom[0];
						codicefiscale[5]='X';
					}
					else
					{
						codicefiscale[3]=vocalinom[0];
						codicefiscale[4]=vocalinom[1];
						codicefiscale[5]='X';
					}
				}
			}
		}
	}
	codicefiscale[6]=data[8];					//calcolo anno
	codicefiscale[7]=data[9];
	if(data[3]=='0')							//calcolo mese
	{
		switch(data[4])
		{
			case '1': codicefiscale[8]='A';
					  break;
			case '2': codicefiscale[8]='B';
					  break;
			case '3': codicefiscale[8]='C';
					  break;
			case '4': codicefiscale[8]='D';
					  break;
			case '5': codicefiscale[8]='E';
					  break;
			case '6': codicefiscale[8]='F';
					  break;
			case '7': codicefiscale[8]='L';
					  break;
			case '8': codicefiscale[8]='M';
					  break;
			case '9': codicefiscale[8]='P';
					  break;
		}
	}
	else
	{
		switch(data[4])
		{
			case '0': codicefiscale[8]='R';
					  break;
			case '1': codicefiscale[8]='S';
					  break;
			case '2': codicefiscale[8]='T';
					  break;
		}
	}
	if(sesso=='m'||sesso=='M')
	{
		codicefiscale[9]=copiadata[0];
		codicefiscale[10]=copiadata[1];
	}
	else
	{
		codicefiscale[9]=copiadata[0]+4;
		codicefiscale[10]=copiadata[1];
	}
	fscanf(comunefile,"%s",comuni2);
	printf("comune=%s\n",comuni2);
	if(comune==comuni2)
	{
		codicefiscale[11]=fscanf(comunefile,"%c",&codicefiscale[11]);
		codicefiscale[12]='7';
		codicefiscale[13]='3';
		codicefiscale[14]='6';
	}
	else
	{
		codicefiscale[11]=fscanf(comunefile,"%c",&codicefiscale[11]);
		codicefiscale[12]='3';
		codicefiscale[13]='5';
		codicefiscale[14]='6';
	}
	for(i=1;i<15;i=i+2)							//calcolo carattere controllo caratteri pari
	{
		switch(codicefiscale[i])
		{
			case 'A':	codicefiscalecheck=codicefiscalecheck+0;
						break;
			case 'B':	codicefiscalecheck=codicefiscalecheck+1;
						break;
			case 'C':	codicefiscalecheck=codicefiscalecheck+2;
						break;
			case 'D':	codicefiscalecheck=codicefiscalecheck+3;
						break;
			case 'E':	codicefiscalecheck=codicefiscalecheck+4;
						break;
			case 'F':	codicefiscalecheck=codicefiscalecheck+5;
						break;
			case 'G':	codicefiscalecheck=codicefiscalecheck+6;
						break;
			case 'H':	codicefiscalecheck=codicefiscalecheck+7;
						break;
			case 'I':	codicefiscalecheck=codicefiscalecheck+8;
						break;
			case 'J':	codicefiscalecheck=codicefiscalecheck+9;
						break;
			case 'K':	codicefiscalecheck=codicefiscalecheck+10;
						break;
			case 'L':	codicefiscalecheck=codicefiscalecheck+11;
						break;
			case 'M':	codicefiscalecheck=codicefiscalecheck+12;
						break;
			case 'N':	codicefiscalecheck=codicefiscalecheck+13;
						break;
			case 'O':	codicefiscalecheck=codicefiscalecheck+14;
						break;
			case 'P':	codicefiscalecheck=codicefiscalecheck+15;
						break;
			case 'Q':	codicefiscalecheck=codicefiscalecheck+16;
						break;
			case 'R':	codicefiscalecheck=codicefiscalecheck+17;
						break;
			case 'S':	codicefiscalecheck=codicefiscalecheck+18;
						break;
			case 'T':	codicefiscalecheck=codicefiscalecheck+19;
						break;
			case 'U':	codicefiscalecheck=codicefiscalecheck+20;
						break;
			case 'V':	codicefiscalecheck=codicefiscalecheck+21;
						break;
			case 'W':	codicefiscalecheck=codicefiscalecheck+22;
						break;
			case 'X':	codicefiscalecheck=codicefiscalecheck+23;
						break;
			case 'Y':	codicefiscalecheck=codicefiscalecheck+24;
						break;
			case 'Z':	codicefiscalecheck=codicefiscalecheck+25;
						break;
			case '0':	codicefiscalecheck=codicefiscalecheck+0;
						break;
			case '1':	codicefiscalecheck=codicefiscalecheck+1;
						break;
			case '2':	codicefiscalecheck=codicefiscalecheck+2;
						break;
			case '3':	codicefiscalecheck=codicefiscalecheck+3;
						break;
			case '4':	codicefiscalecheck=codicefiscalecheck+4;
						break;
			case '5':	codicefiscalecheck=codicefiscalecheck+5;
						break;
			case '6':	codicefiscalecheck=codicefiscalecheck+6;
						break;
			case '7':	codicefiscalecheck=codicefiscalecheck+7;
						break;
			case '8':	codicefiscalecheck=codicefiscalecheck+8;
						break;			
			case '9':	codicefiscalecheck=codicefiscalecheck+9;
						break;
		}
	}
	for(i=0;i<15;i=i+2)									//calcolo codice controllo caratteri dispari
	{
		switch(codicefiscale[i])
		{
			case 'A':	codicefiscalecheck=codicefiscalecheck+1;
						break;
			case 'B':	codicefiscalecheck=codicefiscalecheck+0;
						break;
			case 'C':	codicefiscalecheck=codicefiscalecheck+5;
						break;
			case 'D':	codicefiscalecheck=codicefiscalecheck+7;
						break;
			case 'E':	codicefiscalecheck=codicefiscalecheck+9;
						break;
			case 'F':	codicefiscalecheck=codicefiscalecheck+13;
						break;
			case 'G':	codicefiscalecheck=codicefiscalecheck+15;
						break;
			case 'H':	codicefiscalecheck=codicefiscalecheck+17;
						break;
			case 'I':	codicefiscalecheck=codicefiscalecheck+19;
						break;
			case 'J':	codicefiscalecheck=codicefiscalecheck+21;
						break;
			case 'K':	codicefiscalecheck=codicefiscalecheck+2;
						break;
			case 'L':	codicefiscalecheck=codicefiscalecheck+4;
						break;
			case 'M':	codicefiscalecheck=codicefiscalecheck+18;
						break;
			case 'N':	codicefiscalecheck=codicefiscalecheck+20;
						break;
			case 'O':	codicefiscalecheck=codicefiscalecheck+11;
						break;
			case 'P':	codicefiscalecheck=codicefiscalecheck+3;
						break;
			case 'Q':	codicefiscalecheck=codicefiscalecheck+6;
						break;
			case 'R':	codicefiscalecheck=codicefiscalecheck+8;
						break;
			case 'S':	codicefiscalecheck=codicefiscalecheck+12;
						break;
			case 'T':	codicefiscalecheck=codicefiscalecheck+14;
						break;
			case 'U':	codicefiscalecheck=codicefiscalecheck+16;
						break;
			case 'V':	codicefiscalecheck=codicefiscalecheck+10;
						break;
			case 'W':	codicefiscalecheck=codicefiscalecheck+22;
						break;
			case 'X':	codicefiscalecheck=codicefiscalecheck+25;
						break;
			case 'Y':	codicefiscalecheck=codicefiscalecheck+24;
						break;
			case 'Z':	codicefiscalecheck=codicefiscalecheck+23;
						break;
			case '0':	codicefiscalecheck=codicefiscalecheck+1;
						break;
			case '1':	codicefiscalecheck=codicefiscalecheck+0;
						break;
			case '2':	codicefiscalecheck=codicefiscalecheck+5;
						break;
			case '3':	codicefiscalecheck=codicefiscalecheck+7;
						break;
			case '4':	codicefiscalecheck=codicefiscalecheck+9;
						break;
			case '5':	codicefiscalecheck=codicefiscalecheck+13;
						break;
			case '6':	codicefiscalecheck=codicefiscalecheck+15;
						break;
			case '7':	codicefiscalecheck=codicefiscalecheck+17;
						break;
			case '8':	codicefiscalecheck=codicefiscalecheck+19;
						break;			
			case '9':	codicefiscalecheck=codicefiscalecheck+21;
						break;
		}
	}
	codicefiscalecheck=codicefiscalecheck%26;						//calcolo resto check digit
	switch(codicefiscalecheck)										// determinazione check digit
	{
		case 0:		codicefiscale[15]='A';
					break;
		case 1:		codicefiscale[15]='B';
					break;
		case 2:		codicefiscale[15]='C';
					break;
		case 3:		codicefiscale[15]='D';
					break;
		case 4:		codicefiscale[15]='E';
					break;
		case 5:		codicefiscale[15]='F';
					break;
		case 6:		codicefiscale[15]='G';
					break;
		case 7:		codicefiscale[15]='H';
					break;
		case 8:		codicefiscale[15]='I';
					break;
		case 9:		codicefiscale[15]='J';
					break;
		case 10:	codicefiscale[15]='K';
					break;
		case 11:	codicefiscale[15]='L';
					break;
		case 12:	codicefiscale[15]='M';
					break;
		case 13:	codicefiscale[15]='N';
					break;
		case 14:	codicefiscale[15]='O';
					break;
		case 15:	codicefiscale[15]='P';
					break;
		case 16:	codicefiscale[15]='Q';
					break;
		case 17:	codicefiscale[15]='R';
					break;
		case 18:	codicefiscale[15]='S';
					break;
		case 19:	codicefiscale[15]='T';
					break;
		case 20:	codicefiscale[15]='U';
					break;
		case 21:	codicefiscale[15]='V';
					break;
		case 22:	codicefiscale[15]='W';
					break;
		case 23:	codicefiscale[15]='X';
					break;
		case 24:	codicefiscale[15]='Y';
					break;
		case 25:	codicefiscale[15]='Z';
					break;
	}				
	printf("\n\nCodice fiscale:\t");		// stampa codice fiscale
	for(i=0;i<16;i++)
	{
		printf("%c",codicefiscale[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
