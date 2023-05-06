#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

template <typename T>
class MyClass
{
public:
	MyClass() // ����������� �� ���������, ��� ����������
	{
		size = 5; // �� ��������� ������ ������� = 5 ���������
		mass = new T[size]; // �������� ����� � ������ ��� �������
		for (int i = 0; i < size; i++) // �������� ������
			mass[i] = 0;
	}

	MyClass(T elem)
	{
		size = elem;
		mass = new T[size];
		for (int i = 0; i < size; i++) // �������� ������
			mass[i] = 0;
	}
	void PushElem(T elem)
	{
		for (int i = 0; i < size; i++)
		{
			if (mass[i] == 0)
			{
				mass[i] = elem;
				i = size;
			}
		}
	}
	void PrintMass()
	{
		for (int i = 0; i < size; i++)
		{
			if (mass[i] != 0)
			{
				cout << mass[i] << " ";
			}
		}
	}
	void FindElem(T elem)
	{
		cout << "���� �����: ";
		for (int i = 0; i < size; i++)
		{
			if (mass[i] == elem)
			{
				cout << mass[i] << " ";
			}
		}
	}
	int MaxElem()
	{
		int max = 0, next = 0;
		for (int i = 0; i < size; i++)
		{
			next = mass[i];
			if (max < next)
				max = next;
		}
		cout << "������������ �����: " << max;
		return
	}
	void MinElem()
	{
		int max = this->MaxElem, next = 0;
		for (int i = 0; i < size; i++)
		{
			next = mass[i];
			if (max > next)
				max = next;
		}
		cout << "����������� �����: " << max;
	}


private:
	T* mass;
	int size;
};



void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size;
	cout << "������� ������ �������: ";
	cin >> size;
	system("cls");

	while (true)
	{
		int type;
		cout << "������� ��� �������\n1)int\n2)float\n3)char\n�����:";
		cin >> type;
		system("cls");

		switch (type)
		{
		case 1://int
		{
			MyClass <int> Class(size);
			while (true)
			{
				cout << "0)������� ������\n1)�������� �������\n2)������� �������\n3)����� �������\n4)������������\n5)�����������";
				int choice;
				cin >> choice;
				system("cls");

				switch (choice)
				{
					case 0://print //������
					{
						Class.PrintMass();
						_getch();
						system("cls");
						break;
					}
					case 1://add //������
					{
						int elem;
						cout << "������� �����: ";
						cin >> elem;
						Class.PushElem(elem);					
						system("cls");
						break;
					}
					case 2://del
					{
						break;
					}
					case 3://find //������
					{
						int elem;
						cout << "������� �����: ";
						cin >> elem;
						system("cls");
						Class.FindElem(elem);
						_getch();
						system("cls");
						break;
					}
					case 4://max //������
					{
						Class.MaxElem();
						_getch();
						system("cls");
						break;
					}
					case 5://min
					{
						Class.MinElem();
						break;
					}
				}
			}
		}
		//case 2://float
		//{
		//	cout << "0)������� ������\n1) �������� �������\n2)������� �������\n3)����� �������\n4)������������\n5)�����������";
		//	int choice;
		//	cin >> choice;
		//	switch (choice)
		//	{
		//	case 0://print
		//	{

		//	}
		//	case 1://add
		//	{

		//		break;
		//	}
		//	case 2://del
		//	{
		//		break;
		//	}
		//	case 3://find
		//	{
		//		break;
		//	}
		//	case 4://max
		//	{
		//		break;
		//	}
		//	case 5://min
		//	{
		//		break;
		//	}
		//	}
		//}
		//case 3://char
		//{
		//	cout << "0)������� ������\n1) �������� �������\n2)������� �������\n3)����� �������\n4)������������\n5)�����������";
		//	int choice;
		//	cin >> choice;
		//	switch (choice)
		//	{
		//	case 0://print
		//	{

		//	}
		//	case 1://add
		//	{

		//		break;
		//	}
		//	case 2://del
		//	{
		//		break;
		//	}
		//	case 3://find
		//	{
		//		break;
		//	}
		//	case 4://max
		//	{
		//		break;
		//	}
		//	case 5://min
		//	{
		//		break;
		//	}
		//	}
		//}
		}
	}	
}