#include<stdio.h.>
void nhap(int &n){
	printf("nhap gia tri :");
	scanf("%d",&n);
}
 int main(){
	int a,b,c,d,t;
	nhap(a);nhap(b);nhap(c);nhap(d);
	
	if(a>=b){
	t=a;
	a=b;
	b=t;
 }
  if(a>=c){
	t=a;
	a=c;
	c=t;
  }
  if(a>=d){
	t=a;
	a=d;
	d=t;
}
if(b>=c){
		t=b;
		b=c;
		c=t;
 }
  if(b>=d){
	t=b;
	b=d;
	d=t;
  }
  if(c>=d){
	t=c;
	c=d;
	d=t;
   }
   printf("thu tu cua 4 so la :%d %d %d %d",a,b,c,d);
return 0;
}
