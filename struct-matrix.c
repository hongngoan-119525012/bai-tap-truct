#include <stdio.h>
#define SIZE 5
typedef struct MA_TRAN
{
	int Matrix[SIZE][SIZE];
	int c,d;
}MT;

void nhap(MT *a);
void xuat(MT a);

int main(void)
{
	MT a;
	nhap(&a);
	xuat(a);
	
	return 0;
}

void nhap(MT *a)
{
	printf("\nHay Nhap Dong Ma Tran: ");
	scanf("%d", &a->d);

	printf("\nHay Nhap Cot Ma Tran: ");
	scanf("%d", &a->c);
	
	int i, j;
	for(i=0; i<a->d; i++)
	{
		for(j=0; j<a->c; j++)
		{
			printf("\nNhap Gia Tri Dong %d, cot %d:  ", i+1, j+1);
			scanf("%d",&a->Matrix[i][j]);
		}
	}
}
void xuat(MT a)
{
	int i,j;
	for(i=0; i<a.d; i++)
	{
		for(j=0; j<a.c; j++)
		{
			printf("\nNhap Gia Tri Dong %d, cot %d: %d ", i+1, j+1, a.Matrix[i][j]);
		}
		printf("\n");
	}
}



