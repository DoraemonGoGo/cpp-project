#include <iostream>
#include <math.h>
using namespace std;
struct Point {
	double x;
	double y;
};
double product(Point p1, Point p2, Point p3) {
	//���ȸ����������p1p2��p1p3��������Ȼ���ټ�����
	//p1p2 ������ʾΪ (p2.x-p1.x,p2.y-p1.y)
	//p1p3 ������ʾΪ (p3.x-p1.x,p3.y-p1.y)
	return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}
int isInTriangle(Point p1, Point p2, Point p3, Point o) {
	//��֤p1��p2��p3����ʱ��˳��
	if (product(p1, p2, p3) == 0)//��������һ��ֱ���ϣ����ܹ���������
		return 2;
	if (product(p1, p2, p3) < 0) return isInTriangle(p1, p3, p2, o);//������ʱ��˳��
	else if (product(p1, p2, o) > 0 && product(p2, p3, o) > 0 && product(p3, p1, o) > 0)//o��12 23 31��ͬһ��
		return 1;
	return 0;//�����ڲ�
}
int main() {
	Point p[4];
	for (int i = 0; i < 4; i++)
		scanf_s("%lf%lf", &p[i].x, &p[i].y);
	int flag = isInTriangle(p[1], p[2], p[3], p[4]);
	if (flag == 1)
		printf("Yes!");
	if (flag == 2)
		printf("���ܹ��������Σ�");
	else printf("No!");
}