#include <stdio.h>
#include <windows.h> //Librería colores

#define color SetConsoleTextAttribute
int main (int argc,char **argv)
{
	HANDLE hConsole =
	GetStdHandle( STD_OUTPUT_HANDLE);
	color(hConsole,15);
	
	printf("\t\t\t\t\t%c %c %c %c %c %c %c %c %c %c ",126,158,126,158,126,158,126,158,126,158);
	
	color(hConsole,78);
	printf("\"Generaciones de computadoras\"\a");//Alerta
	
	color(hConsole,15);
	printf(" %c %c %c %c %c %c %c %c %c %c ",158,126,158,126,158,126,158,126,158,126);
	
	color(hConsole,14);
	printf("\n\n\nPrimera generaci%cn (1940-1956): Tubos al vac%co",162,161); //El porcentaje + c inidica qe ahí va un carácter especial y al final de las comillas debemos poner una coma y el número correspondiente en le tabla ACII
	
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Utilizaci%cn de v%clvulas de vac%co para procesamiento.",162,160,161);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Tama%co y peso enormes, ocupaban grandes salas.",164);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Programaci%cn en lenguaje de m%cquina y cableado manual. \n\n",162,160);
	
	color(hConsole,14);
	printf("Segunda generaci%cn (1956-1963): Transistores",162);
	
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Transistores reemplazaron las v%clvulas de vac%co.",160,161);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Uso de cintas magn%cticas para almacenamiento.",130);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Surgimiento de sistemas operativos y acceso compartido. \n\n");
	
	color(hConsole,14);
	printf("Tercera Generaci%cn (1964-1971):",162);
	
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Introducci%cn de circuitos integrados (chips).",162);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Implementaci%cn de sistemas de tiempo compartido.",162);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Desarrollo de sistemas operativos avanzados. \n\n");
	
	color(hConsole,14);
	printf("Cuarta Generaci%cn (1971-1988):",162);
	
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Invenci%cn de microprocesadores y chips.",162);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Popularizaci%cn de las computadoras personales (PC).",162);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Introducci%cn de interfaces gr%cficas de usuario (GUI). \n\n",162,160);
	
	color(hConsole,14);
	printf("Quinta Generaci%cn (1991-actualidad):",162);
	
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Avances en tecnolog%ca VLSI para chips m%cs peque%cos y potentes.",161,160,164);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Investigaci%cn en inteligencia artificial (IA) y aprendizaje autom%ctico.",162,160);
	color(hConsole,11);
	printf("\n *");
	color(hConsole,15);
	printf("Desarrollo de redes globales y expansi%cn de Internet. \n\n",162);
	
	color(hConsole,3);
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Ana Paula Percino Huerta"); //\a alerta
	color(hConsole,7);
	
	return 0;
}
