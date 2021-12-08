//lucas de cravlaho lopes
// data:08/12/2021
//Professor: Eduardo 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i, x, aux, v[10];
	
	for(i=0;i<10;i++)
	{
		printf("Digite o valor da posição %i: ", i);
		scanf("%i",&v[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		for(x=i+1;x<10;x++)
		{
			if(v[i]>v[x])
			{
				aux=v[i];
				v[i]=v[x];
				v[x]=aux;
			}
		}
	}
	
	for(i=0;i<10;i++) 
	{
		printf("\n Valor da posição %i agora é %i",i,v[i]);
	}
	
	getchar();
	printf("\n\n");
	system("pause");
	return(0);
	
}
