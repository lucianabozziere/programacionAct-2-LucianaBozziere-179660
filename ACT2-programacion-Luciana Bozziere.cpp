#include <stdio.h>
#include <windows.h>

int main(){
	
	system("color FD");
	float celsius=18;
	float fahrenheit=86;
	float temperaturafahrenheit;
	float temperaturacelsius;
	
	printf("Celsius %f\n", celsius);
	printf("Fahrenheit %f\n\n",fahrenheit);
	
	temperaturafahrenheit= (9.0/5.0)*celsius+32.0;
	temperaturacelsius= (fahrenheit-32.0)*(5.0/9.0);
	
	printf("Temperatura Fahrenheit %f\n", temperaturafahrenheit);
	printf("Temperatura Celsius %f\n", temperaturacelsius);

    return 0;
}
