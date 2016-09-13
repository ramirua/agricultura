/*Agricultor...*/
#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int x,xpimenton;
	printf("ingrese la cantidad en metros cuadrados para el ajo: ");
	scanf("%d",&x);
	
	if(x>=100 && x<=180)
	{
		xpimenton=x+20;
	}
	 if(x>=181 && x<=325)
    {
    	xpimenton=x;
    }
    if(x>=326 && x<=500)
    {
    	xpimenton=x-20;
	}
	if(x<100 || x>500)
	{
		printf("\t\t ERROR AL CARGAR LA CANTIDAD DE METROS CUADRADOS DE AJO");
	}
	else
	{
		printf("la cantidad de metros cuadrados de pimenton es: %d",xpimenton);
	}
	return 0;
}
