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
	Student s1 = {"����",19,100};
	Student* p=&s1;
	cout << "������" << p->name << "  ���䣺" << p->age << "  ������" << p->score << endl;
	system("pause");
	return 0;
}