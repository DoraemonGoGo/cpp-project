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
	cout << "�Ӻ����� ѧ��1������" << s.name << "  ���䣺" << s.age << "  ������" << s.score << endl;
}
void PrintStudent2(Student* p)
{
	p->age = 21;
	cout << "�Ӻ����� ѧ��2������" << p->name << "  ���䣺" << p->age << "  ����" << p->score << endl;
}
int main()
{
	Student s1;
	s1.name = "����";
	s1.age = 19;
	s1.score = 100;
	Student s2 = { "����",20,80 };
	PrintStudent1(s1);
	cout << "main������ ѧ��1������" << s1.name << "  ���䣺" << s1.age << "  ������" << s1.score << endl;
	PrintStudent2(&s2);
	cout << "main������ ѧ��2������" << s2.name << "  ���䣺" << s2.age << "  ������" << s2.score << endl;
	system("pause");
	return 0;
}