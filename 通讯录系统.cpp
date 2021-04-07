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
//添加练习人
void addPerson(Addressbooks* abs)
{
	if (abs->n_Size == MAX)
	{
		cout << "通讯录已满！"<<endl;
		return;
	}
	else
	{
		abs->n_Size++;
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->n_Size].n_Name = name;
		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->n_Size].n_Age = age;
		int sex;
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		while (true)
		{
			
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->n_Size].n_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入!" << endl;
			}
		}
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[abs->n_Size].n_Phone = phone;
		string address;
		cout << "请输入地址：" << endl;
		cin >> address;
		abs->personArray[abs->n_Size].n_Adr = address;
		cout << "添加成功!" << endl;
		system("pause");
		system("cls");
	}
}
void showPerson(Addressbooks* abs)
{
	if (abs->n_Size == 0)
	{
		cout << "当前的记录为空!" << endl;
	}
	else
	{
		for (int i = 1; i <= abs->n_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].n_Name << "\t";
			cout << "年龄：" << abs->personArray[i].n_Age << "\t";
			cout << "性别：" << (abs->personArray[i].n_Sex==1?"男":"女") << "\t";
			cout << "电话：" << abs->personArray[i].n_Phone << "\t";
			cout << "地址：" << abs->personArray[i].n_Adr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExit(Addressbooks*abs,string name)
{
	for (int i = 1; i <= abs->n_Size; i++)
	{
		if (abs->personArray[i].n_Name == name)
			return i;
		else
			return -1;
	}
}
int main()
{
	Addressbooks abs;
	abs.n_Size = 0;
	int select;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
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