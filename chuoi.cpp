#include<stdio.h>
#include<string.h>
void chuyendoi(char x[]){
	for(int i=0;i<strlen(x); i++){
		if(i==0||(i>0&&x[i-1]==32)){
			if(x[i]>=97&&x[i]<=122)
			x[i]=x[i]-32;
		}
		else{
			if(x[i]>=65&&x[i]<=90)
				x[i]=x[i]+32;
		}
	}
}
int main(){
	char s[30];
	printf("nhap chuoi :");
	gets(s);
	chuyendoi(s);
	printf("chuoi moi la :%s", s);
}
