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
	MyClass() // конструктор по умолчанию, без параметров
	{
		size = 5; // по умолчанию размер массива = 5 элементов
		mass = new T[size]; // выделить место в памяти для массива
		for (int i = 0; i < size; i++) // обнуляем массив
			mass[i] = 0;
	}

	MyClass(T elem)
	{
		size = elem;
		mass = new T[size];
		for (int i = 0; i < size; i++) // обнуляем массив
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
		cout << "Ваше число: ";
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
		cout << "Максимальное число: " << max;
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
		cout << "Минимальное число: " << max;
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
	cout << "Введите размер массива: ";
	cin >> size;
	system("cls");

	while (true)
	{
		int type;
		cout << "Введите тип массива\n1)int\n2)float\n3)char\nВыбор:";
		cin >> type;
		system("cls");

		switch (type)
		{
		case 1://int
		{
			MyClass <int> Class(size);
			while (true)
			{
				cout << "0)Вывести массив\n1)Добавить элемент\n2)Удалить элемент\n3)Найти элемент\n4)Максимальный\n5)Минимальный";
				int choice;
				cin >> choice;
				system("cls");

				switch (choice)
				{
					case 0://print //готово
					{
						Class.PrintMass();
						_getch();
						system("cls");
						break;
					}
					case 1://add //готово
					{
						int elem;
						cout << "Введите число: ";
						cin >> elem;
						Class.PushElem(elem);					
						system("cls");
						break;
					}
					case 2://del
					{
						break;
					}
					case 3://find //готово
					{
						int elem;
						cout << "Введите число: ";
						cin >> elem;
						system("cls");
						Class.FindElem(elem);
						_getch();
						system("cls");
						break;
					}
					case 4://max //готово
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
		//	cout << "0)Вывести массив\n1) Добавить элемент\n2)Удалить элемент\n3)Найти элемент\n4)Максимальный\n5)Минимальный";
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
		//	cout << "0)Вывести массив\n1) Добавить элемент\n2)Удалить элемент\n3)Найти элемент\n4)Максимальный\n5)Минимальный";
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