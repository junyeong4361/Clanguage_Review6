#include<stdio.h>
void main() {
	char name1[] = "kim";
	char name2[] = "park";
	char names[2][10] = { "kim","park" };
	printf("ù ��° �̸�:%s\n", names[0]);
	printf("�� ��° �̸�:%s", names[1]);
}