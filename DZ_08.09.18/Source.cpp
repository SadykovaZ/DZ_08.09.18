#include<iostream>
#include<cstring>
#include<locale.h>
#include<Windows.h>
#include<string.h>
#include<stdio.h>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 0;
	start:
	cout << "������� ����� �������: ";
	cin >> n;
	if (n == 1)
	{
		cout << "1.	���� ������ ��������. �������� � ��� ��� ������� �� ���������." << endl;
		char str[100] = "This is a small stroke";
		cout << str << endl;

		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ')
			{
				str[i] = '\t';
			}
		}
		cout << str << endl;
	}
	else if (n == 2)
	{
		cout << "2.	������� ������� ��� ������ �������� ������ � ���� �������." << endl;
		char str[100] = "������ ���!";

		cout << " �������� ������: " << str << endl;
	}

	else if (n == 3)
	{
		cout << "3.	�������� ������� ��� �������� ������� ���� � ������� ������, �������� � ����������" << endl;
		int gl = 0, i, j;
		char gls[100] = "��������";
		char str[100] = "������ ���";
		cout << str << endl;
		for (i = 0; i < strlen(str); i++)
			for (j = 0; j < strlen(gls); j++)
				if (str[i] == gls[j])
					gl++;
		cout << "���������� ������� ����:" << gl << endl;

	}

	else if (n == 4)
	{
		cout << "4.	���� ������ ��������. ���������� ��������� �������� �� ��� ������ �����������." << endl;
		char a[255]="�����", b[255];
		bool fl;		
		for (int i = strlen(a) - 1, j = 0; i >= 0; i--, j++)
		{
			b[j] = a[i];
		}
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] != b[i])
				fl = false;
		}
		if (!fl)
			cout << "��������� ������ �� �������� �����������\n";
		else
			cout << "��������� ������ �������� �����������\n";
	}

	goto start;
	system("pause");
	return 0;
}