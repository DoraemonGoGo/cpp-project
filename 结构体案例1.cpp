#include<iostream>
using namespace std;
#include<string>
#include<ctime>
struct Student
{
	string name;
	int score;
};
struct Teacher
{
	string tname;
	Student sArray[5];
};
void allocateSpeace(Teacher tArray[],int len)
{
	string nameSpeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSpeed[i];
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSpeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}
void Printf(Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].name <<
				"  学生分数："<< tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpeace(tArray, len);
	Printf(tArray, len);
	system("pause");
	return 0;
}