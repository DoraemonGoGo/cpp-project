#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	string n_name;
	int n_id;
	void showStudent()
	{
		cout << "������" << n_name <<" "<< "ѧ�ţ�" << n_id << endl;
	}
	void setName(string name)
	{
		n_name = name;
	}
	void setid(int id)
	{
		n_id = id;
	}
};
int main()
{
	Student s1;
	Student s2;
	s1.setName("����");
	s1.n_id = 1;
	s2.n_name = ("����");
	s2.n_id = 2;
	s1.showStudent();
	s2.showStudent();
	system("pause");
	return 0;
}