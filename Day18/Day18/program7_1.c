#include<stdio.h>

void main() {
	//&������ : ������ �ּ�
	int a[3];
	printf("a=%d\n", &a);
	printf("a=%d\n", a); //�迭��
	printf("a[0]=%d\n", &a[0]);
	printf("a[1]=%d\n", &a[1]);
	printf("a[2]=%d\n", &a[2]);

	printf("sizeof(a)=%d\n", sizeof(a)); //sizeof(����): ���� �� byte?

}