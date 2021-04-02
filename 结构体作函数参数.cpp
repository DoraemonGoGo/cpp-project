#include<iostream>
using namespace std;
#include<string>
struct Student
{
	string name;
	int age;
	int score;
};
void PrintStudent1(Student s)
{
	s.score = 90;
	cout << "子函数中 学生1姓名：" << s.name << "  年龄：" << s.age << "  分数：" << s.score << endl;
}
void PrintStudent2(Student* p)
{
	p->age = 21;
	cout << "子函数中 学生2姓名：" << p->name << "  年龄：" << p->age << "  分数" << p->score << endl;
}
int main()
{
	Student s1;
	s1.name = "张三";
	s1.age = 19;
	s1.score = 100;
	Student s2 = { "李四",20,80 };
	PrintStudent1(s1);
	cout << "main函数中 学生1姓名：" << s1.name << "  年龄：" << s1.age << "  分数：" << s1.score << endl;
	PrintStudent2(&s2);
	cout << "main函数中 学生2姓名：" << s2.name << "  年龄：" << s2.age << "  分数：" << s2.score << endl;
	system("pause");
	return 0;
}