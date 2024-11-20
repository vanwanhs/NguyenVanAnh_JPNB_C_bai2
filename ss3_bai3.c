#include<stdio.h>
int main(){
	float PI = 3.14;
	//Ban kinh hinh tron r
	float r, C, S;
	printf("Moi ban nhap ban kinh: ");
	scanf("%f",&r);
	// Tinh chu vi tron
	C = 2 * PI * r;
	printf("Chu vi hinh tron = %.2f\n",C);
	//Dien tich hinh tron
	S = r * r * PI;
	printf ("Dien tich hinh tron = %.2f\n",S);
	return 0;
}
