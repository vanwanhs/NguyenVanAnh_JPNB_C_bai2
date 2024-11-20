#include<stdio.h>
int main (){
	float a, h, S;
	//nhap canh day cua tam giac
	printf("Moi ban nhap canh day: ");
	scanf("%f",&a);
	printf("Moi ban nhap chieu cao: ");
	scanf("%f",&h);
	//Tinh dien tich hinh tam giac
	S = ( a * h ) / 2;
	printf("Dien tich cua tam giac S = %.2f\n",S);
	
	
	
	
	return 0;
}
