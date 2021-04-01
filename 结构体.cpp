#include<iostream>
#include<string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};
struct Teacher
{
	string id;
	string name;
	int age;
	Student stu;
};
int main() {

	Teacher tea;
	tea.id = "10000";
	tea.name = "张三";
	tea.age = 50;
	tea.stu.name = "方涛";
	tea.stu.age = 19;
	tea.stu.score = 100;
	cout << " 老师姓名：" << tea.name << " 老师编号：" << tea.id << " 老师年龄："
		<< tea.age << " 老师辅导的学生姓名：" << tea.name << " 学生年龄："
		<< tea.stu.age << " 学生成绩：" << tea.stu.score << endl;
	system("pause");
	return 0;
}