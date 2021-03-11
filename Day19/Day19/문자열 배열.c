#include<stdio.h>
void main() {
	char name1[] = "kim";
	char name2[] = "park";
	char names[2][10] = { "kim","park" };
	printf("첫 번째 이름:%s\n", names[0]);
	printf("두 번째 이름:%s", names[1]);
}