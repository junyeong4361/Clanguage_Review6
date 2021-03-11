#include<stdio.h>
void main() {
	int temp[2][2][2] = {
		{
			{1,2}, //0행
			{3,4} //1행
		},//0면
		{
			{5,6}, //0행
			{7,8}  //1행
		}//1면
	};
	printf("0번째 면\n");
	printf("%4d %4d\n", temp[0][0][0], temp[0][0][1]);
	printf("%4d %4d\n", temp[0][1][0], temp[0][1][1]);

	printf("0번째 면\n");
	printf("%4d %4d\n", temp[1][0][0], temp[1][0][1]);
	printf("%4d %4d\n", temp[1][1][0], temp[1][1][1]);

	printf("sizeof(배열전체):%d\n", sizeof(temp));
	printf("sizeof(면):%d\n", sizeof(temp[0]));
	printf("sizeof(행):%d\n", sizeof(temp[0][0]));
	printf("sizeof(열):%d\n", sizeof(temp[0][0][0]));


}