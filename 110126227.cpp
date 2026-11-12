#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, tong, hieu, tich, thuong;
	
	printf("Nhap a: ");
	scanf("%d", &a);
	
	printf("Nhap b: ");
	scanf("%d", &b);
	
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;
	
	printf("\n Tong: %d \n Hieu: %d \n Tich: %d \n Thuong: %d", tong, hieu, tich, thuong);
	return 0;
}