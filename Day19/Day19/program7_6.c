#include<stdio.h>
void main() {
	int temp[2][2][2] = {
		{
			{1,2}, //0��
			{3,4} //1��
		},//0��
		{
			{5,6}, //0��
			{7,8}  //1��
		}//1��
	};
	printf("0��° ��\n");
	printf("%4d %4d\n", temp[0][0][0], temp[0][0][1]);
	printf("%4d %4d\n", temp[0][1][0], temp[0][1][1]);

	printf("0��° ��\n");
	printf("%4d %4d\n", temp[1][0][0], temp[1][0][1]);
	printf("%4d %4d\n", temp[1][1][0], temp[1][1][1]);

	printf("sizeof(�迭��ü):%d\n", sizeof(temp));
	printf("sizeof(��):%d\n", sizeof(temp[0]));
	printf("sizeof(��):%d\n", sizeof(temp[0][0]));
	printf("sizeof(��):%d\n", sizeof(temp[0][0][0]));


}