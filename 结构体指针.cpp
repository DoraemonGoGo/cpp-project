#include<iostream>
using namespace std;
struct  Student
{
	string name;
	int age;
	int score;
};
int main()
{
	Student s1 = {"张三",19,100};
	Student* p=&s1;
	cout << "姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;
	system("pause");
	return 0;
}