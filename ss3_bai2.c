#include<stdio.h>
int main(){
	float C, F;
	printf ("Moi ban nhap nhiet do cua Celsius = ");
	scanf("%f",&C);
	F = 1.8 * C + 32;
	printf ("Nhiet do tu Celsius chuyen sang Fahrenheit = %.1f", F);
	return 0;
}
