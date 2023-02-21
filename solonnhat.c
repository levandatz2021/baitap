#include <stdio.h>
int main()
{
	 int a,b,c,d,max;
	 printf("\nnhap so a :");
	 scanf("%d", &a);
	 printf("\nnhap so b :");
	 scanf("%d", &b);
	 printf("\nnhap so c :");
	 scanf("%d", &c);
	 printf("\nnhap so d :");
	 scanf("%d", &d);
	 max = a;
	 if(max<b){
 		max=b;
 	}
 	if(max<c){
	 	max=c;
	 }
	 if(max<d){
 		max=d;
 	}
 	printf("\nso lon nhat la %d\n", max);
}
    