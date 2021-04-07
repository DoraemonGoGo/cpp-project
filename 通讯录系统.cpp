#include <iostream>
#include<string>
using namespace std;
#define MAX 1000
//��ϵ�˽ṹ��
struct Person
{
	string n_Name;
	int n_Age;
	int n_Sex;
	string n_Phone;
	string n_Adr;
};
//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];
	int n_Size;
};
void showMenu()
{
	cout << "*********************" << endl;
	cout << "*****1.�����ϰ��*****" << endl;
	cout << "*****2.��ʾ��ϰ��*****" << endl;
	cout << "*****3.ɾ����ϰ��*****" << endl;
	cout << "*****4.������ϰ��*****" << endl;
	cout << "*****5.�޸���ϰ��*****" << endl;
	cout << "*****6.�����ϰ��*****" << endl;
	cout << "*****0.�˳�ͨѶ¼*****" << endl;
	cout << "*********************" << endl;
}
//�����ϰ��
void addPerson(Addressbooks* abs)
{
	if (abs->n_Size == MAX)
	{
		cout << "ͨѶ¼������"<<endl;
		return;
	}
	else
	{
		abs->n_Size++;
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->n_Size].n_Name = name;
		int age;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[abs->n_Size].n_Age = age;
		int sex;
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
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
				cout << "������������������!" << endl;
			}
		}
		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[abs->n_Size].n_Phone = phone;
		string address;
		cout << "�������ַ��" << endl;
		cin >> address;
		abs->personArray[abs->n_Size].n_Adr = address;
		cout << "��ӳɹ�!" << endl;
		system("pause");
		system("cls");
	}
}
void showPerson(Addressbooks* abs)
{
	if (abs->n_Size == 0)
	{
		cout << "��ǰ�ļ�¼Ϊ��!" << endl;
	}
	else
	{
		for (int i = 1; i <= abs->n_Size; i++)
		{
			cout << "������" << abs->personArray[i].n_Name << "\t";
			cout << "���䣺" << abs->personArray[i].n_Age << "\t";
			cout << "�Ա�" << (abs->personArray[i].n_Sex==1?"��":"Ů") << "\t";
			cout << "�绰��" << abs->personArray[i].n_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].n_Adr << endl;
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
			cout << "��ӭ�´�ʹ�á�" << endl;
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