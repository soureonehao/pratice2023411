#include<stdio.h>
int height(int height[]) {		//形参数组可以不指定大小
	int i,j, box ;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (height[j] > height[j + 1]) {
				box = height[j];
				height[j] = height[j +1 ];
				height[j + 1] = box;
			}
		}
	}
	return height; //返回数组返回数组名
}
void main() {
	int height1[10];
	int i;
	printf("请输入十个同学的身高：");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &height1[i]);
	}
	height(height1);	//调用函数
	for (i = 0; i < 10; i++) {
		printf("%d  ", height1[i]);
	}
}