#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("nhap so a\n");
	scanf ("%f",&a);
	printf("nhap so b\n");
	scanf ("%f",&b);
	printf("nhap so c\n");
	scanf ("%f",&c);	
	float y=b*b - 4*a*c;
	
	if(a==0){
		if(b==0 && c==0){
			printf("phuong trinh vo nghiem");
		}
		if(b==0 && c!=0){
			printf("phuong trinh vo nghiem");
		}
		if(b!=0 && c!=0){
			printf("phuong trinh co nghiem %f",-c/b);
		}
	}
	else{
		if(y<0){
			printf("phuong trinh vo nghiem");
		}
		if(y==0){
			printf("phuong trinh co nghiem kep %f",-b/(2*a));
		}
		if(y>0){
			float x1= (-b+sqrt(y))/(2*a);
			float x2= (-b-sqrt(y))/(2*a);
			printf("phuong trinh co 2 nghiem phan biet %f va %f",x1,x2);
		}
	}
}
