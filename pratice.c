#include<stdio.h>
int height(int height[]) {		//�β�������Բ�ָ����С
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
	return height; //�������鷵��������
}
void main() {
	int height1[10];
	int i;
	printf("������ʮ��ͬѧ����ߣ�");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &height1[i]);
	}
	height(height1);	//���ú���
	for (i = 0; i < 10; i++) {
		printf("%d  ", height1[i]);
	}
}