#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

int main(){	 
	setlocale(LC_ALL, "Portuguese");
	char cod[50];
	int i,j;
	
	printf("Informe o c�digo: ");
	scanf("%s",&cod);
	j=strlen(cod)-1;
	
	for (i=0;i<j;i++){
		if(cod[i]==NULL){
			printf("C�digo invalido!");
			getch();
			return 0;
		}
		i++;
		if(cod[i]!='D'){
			printf("C�digo invalido!");
			getch();
			return 0;
		}
	}
	
	printf("C�digo v�lido");
	
	getch();
	return 0;
}
