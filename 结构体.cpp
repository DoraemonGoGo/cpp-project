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
	tea.name = "����";
	tea.age = 50;
	tea.stu.name = "����";
	tea.stu.age = 19;
	tea.stu.score = 100;
	cout << " ��ʦ������" << tea.name << " ��ʦ��ţ�" << tea.id << " ��ʦ���䣺"
		<< tea.age << " ��ʦ������ѧ��������" << tea.name << " ѧ�����䣺"
		<< tea.stu.age << " ѧ���ɼ���" << tea.stu.score << endl;
	system("pause");
	return 0;
}