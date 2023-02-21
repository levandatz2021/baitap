#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	int n;
	printf(" Nhap vao so n : ");
	scanf("%d", &n);
	srand((int)time(0));
	int A[n];
	for(int i=0;i<n;i++){
		A[i]= 1 + rand() % (100 + 1 - 1);
	} 
	for(int i=0;i<n;i++){
		printf("\t%d",A[i] );
	}
	printf("\n"); 
	//for(int j=n-1;j>=0;j--){
		//printf("\t%d",A[j] );
//	} 
//tim so lon nhat 
int max=A[0];
for(int j=1;j<n;j++){
	if(A[j]>max)
	max = A[j];
}
printf("so lon nhat la %d", max);
int min =A[0];
for(int j=1;j<n;j++){
	if(A[j]<min)
	min = A[j];
}
printf("\nso be nhat la %d", min);
//xuat ra so chia het cho hai
for(int k=0;k<n;k++){
	if(A[k]%2==0)
	printf("\nso chia het cho 2 la %d", A[k]);
}
//tim so nguyen to 
 printf("\n---");
    int snt = 1;
    for (int i = 0; i < n; i++)
    {
        snt = 1;
        for (int j = 2; j < A[i]; j++)
        {
            if (A[i] % j == 0)
                snt = 0;
        }
        if (A[i] >= 2 && snt == 1)
            printf("\n%d ", A[i]);
    }
	return 0;		
}

