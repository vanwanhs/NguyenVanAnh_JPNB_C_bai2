#include <stdio.h>
int main (){
	float toan, van, anh, Tong, Tb;
	printf ("Moi ban nhap mon Toan: ");
	scanf("%f",&toan);
	printf ("Moi ban nhap mon Van: ");
	scanf ("%f",&van);
	printf("Moi ban nhap mon Anh: ");
	scanf("%f",&anh);
	//Tinh tong ba mon
	Tong = toan + van + anh;
	printf("Tong diem ba mon cua ban:%.2f diem\n",Tong);
	//Trung binh diem cua ba mon
	Tb = Tong / 3;
	printf("Trung binh diem ba mon cua ban:%.2f diem\n",Tb);
	return 0;
	
}
