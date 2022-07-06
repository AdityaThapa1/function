#include<stdio.h>
int add();
int sub();
float multi();
void div();
int main(){
	int a=10,b=5,ad,su;
	float mul;
	ad=add(a,b);
	su=sub(a,b);
	mul=multi(a,b);
	div(a,b);
	printf("addition = %d , subtraction = %d, multiplication = %f", ad,su,mul);
	return 0;
}
int add(int x,int y){
	return (x+y);
}
int sub(int x,int y){
	return (x-y);
	
}
float multi(int x,int y){
	return (x*y);
	
}
void div(int x,int y){
	float d;
	d=x/y;
	printf("division is %f",d);
	return 0;
	
}	
