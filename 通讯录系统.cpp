#include <iostream>
#include<string>
using namespace std;
#define MAX 1000
//联系人结构体
struct Person
{
	string n_Name;
	int n_Age;
	int n_Sex;
	string n_Phone;
	string n_Adr;
};
//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];
	int n_Size;
};
void showMenu()
{
	cout << "*********************" << endl;
	cout << "*****1.添加练习人*****" << endl;
	cout << "*****2.显示练习人*****" << endl;
	cout << "*****3.删除练习人*****" << endl;
	cout << "*****4.查找练习人*****" << endl;
	cout << "*****5.修改练习人*****" << endl;
	cout << "*****6.清空练习人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
	cout << "*********************" << endl;
}
int main()
{
	int select;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "欢迎下次使用。" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}