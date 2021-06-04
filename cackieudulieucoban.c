/*
+cac kieu so nguyen
char =1byte
unsigned char=1 byte
signed char=1 byte
int= 2 or 4 byte
short= 2 byte
long 4 byte
+cac kieu so thuc
float=4 byte
double=8 byte
long double=10 or 16 byte
*/
/*#include<stdio.h>
void main(){
	printf("kich thuoc cua kieu char: %d\n",sizeof(char));
	printf("kich thuoc cua kieu int: %d\n",sizeof(int));
	printf("kich thuoc cua kieu short: %d\n",sizeof(short));
	printf("kich thuoc cua kieu double: %d",sizeof(double));
}*/
//chuong trinh cong hai so nguyen
#include<stdio.h>
int main()
{
//khai bao bien
int a,b,sum;
//nhap du lieu vao;
printf("Nhap so nguyen a");
scanf("%d",&a);
printf("Nhap so nguyen b");
scanf("%d",&b);
//cong hai so nguyen
sum=a+b;
//hien thi ket qua
printf("%d la cong hai so nguyen",sum);
}


