#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	//regex reg("(\\d)");
	system("chcp 1251");
	string snils;
	int sum = 0;
	string res;
	cout << "������� �����: ";
	getline(cin, snils);
	if (snils.length() > 9)
	{
		cout << "����� �� ����� ���� ����� 9 ��������" << endl;
	}
	else if (snils.length() < 9)
	{
		cout << "����� �� ����� ���� ����� 9 ��������" << endl;
	}
	else {
		for (int i = 0; i < snils.length(); i++)
		{
			if (snils.substr(i, 1) == snils.substr(i + 1, 1) && snils.substr(i + 1, 1) == snils.substr(i + 2, 1))
			{
				cout << "Y� ����� ���� ����� ��� ���� ���������� ���� ������" << endl;
				break;
			}
			else if (
	}
}