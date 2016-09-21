#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("cls");
	system("color F0");
	fflush(stdin);
	int anoN,mesN,diaN,anoU,mesU,diaU,anoNU,mesNU,diaNU,edadano,continuar;
	
	do{
		printf("\t\t\t\tCALCULADORA DE EDAD\t\t\t\t");
		printf("\n\n\t\tA%co de Nacimiento: ",164);
		scanf("%d",&anoN);
		printf("\n\t\tMes de Nacimiento: ");
		scanf("%d",&mesN);
		printf("\n\t\tDia de nacimiento: ");
		scanf("%d",&diaN);
		printf("\n\t\tUltimo a%co de vida: ",164);
		scanf("%d",&anoU);
		printf("\n\t\tUltimo mes de vida: ");
		scanf("%d",&mesU);
		printf("\n\t\tUltimo dia de vida: ");
		scanf("%d",&diaU);
		anoNU=anoN-anoU;
		edadano=anoNU*-1;
			if (mesU<mesN){
					edadano=edadano-1;
				}
		if(mesN!=mesU){
			mesNU=mesU-mesN;
			mesNU=abs(mesNU);
			if(mesN==12){
				mesN=0;
				mesNU=mesU-mesN;
				mesNU=abs(mesNU);
			}
		}
		else (mesU==mesN);
		if(diaN!=diaU){
			diaNU=diaN-diaU;
			diaNU=abs(diaNU);
		}
		else (diaU==mesN);
		printf("\n\t\t%d A%cos/%d Meses/%d Dias", edadano,164,mesNU,diaNU);
		printf("\n\n\n\t\tPresiona(1) para continuar: ");
		scanf("%d",&continuar);
		system("cls");
		
	}while(continuar==1);
	
	printf("\t\t\t\tCALCULADORA DE EDAD\t\t\t\t");
	printf("\n\n\n\n\t\t\tHasta luego");
	
	return 0;
}
