#include<stdio.h>
// tính tong bon so cua hang
int main(){
	int num, num1, num2, num3, num4, sum;
	printf("Moi ban nhap so nguyen (4 so): ");
	scanf("%d",&num);
	if ( num < 1000 || num > 9999){
		printf("so nay khong phai so nguyen co 4 chu so");
	    return 1;
}
	num1 = num / 1000;
	num2 = (num / 100) % 10;
	num3 = (num / 10) % 10;
	num4 = num % 10;
	sum = num1 + num2 + num3 +num4;
	printf("Tong cua 4 so %d = %d", num, sum);
	return 0;
}
