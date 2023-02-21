#include<stdio.h>
int main(){
	int gt=1,i,n,s=0;
	printf("nhap so giai thua can tinh :");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		gt=gt*i;
		s=s+gt;
	}
	printf("kq la :%d", s);
}
