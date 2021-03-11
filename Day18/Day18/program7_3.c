#include<stdio.h>
#include<string.h>

void main() {
	char country[10] = "korea";
	char nation[10];

	//nation에 country의 값 복사
	strcpy(nation, country);
	printf("country: %s, nation:%s\n", country, nation);
}