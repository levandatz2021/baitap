#include <stdio.h>

void number1(int x) // Tang gi� tr? bi?n x d�ng tham tr?.
{
    x = x + 2;
}

void number2(int *y) // Tang gi� tr? bi?n x d�ng tham chi?u.
{
    *y =* y + 5;
}
int number3(int z)
{
	return z+5;
}

int main()
{
    int a = 5;
    printf("\nGia tri ban dau cua a la %d\n", a);
    number1(a);
    printf("\nGia tri moi cua a la %d\n", a);
    printf("\n---------\n");
    int b = 5;
    printf("\nGia tri ban dau cua b la %d\n", b);
    number2(&b);
    printf("\nGia tri moi cua b la %d\n", b);
    printf("%d",number3(a));
    return 0;
}
