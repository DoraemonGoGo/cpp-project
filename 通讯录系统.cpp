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