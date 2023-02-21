#include<stdio.h>
#include<mathg.h>
int tong(int n);
int i,sum=0;
for(i=1;i<=n;i++){
	sum =sum +n;
	return sum;
}
int main(){
	int n;
	printf("nhap n : ");
	scanf("%d", &n);
	tong(n);
}
