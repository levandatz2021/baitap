#include<stdio.h>
#include<math.h>
int main()
{
	int n,k;
	printf("\nnhap n :");
	scanf("%d", &n);
	printf("\nnhap k :");
	scanf("%d", &k);
	if(n>=k&&n>0&&k>0){
	int n1;
	int s1=1;
	for(n1=1;n1<=n;n1++){
		s1=s1*n1;
	}
	int s2=1;
	int k1;
	for(k1=1;k1<=k;k1++){
		s2=s2*k1;
	}
	int s3;
	s3=n-k;
	int s4;
	int s5=1;
	for(s4=1;s4<=s3;s4++){
		s5=s5*s4;
	}
	float sc1,sc2;
	sc1=s2*s5;
	sc2=s1/sc1;
	printf("\n ket qua la :%f", sc2);
}
else {
	printf("du lieu loi");
}
}
