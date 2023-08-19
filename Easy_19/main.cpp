#include <iostream>

#include <string>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------САМА ПРОГА-------------------------------------

	int x;
	int size;
	string len;

	cout << "Введите пятизначное число: ";
	cin >> x;

	len = to_string(x);
	size = len.size();

	int* a = new int[size];  // цифры числа



	for (int i = 0; i < size; i++)
	{
		a[i] = x % 10;
		x /= 10;
	}

	
	string len2;

	for (int i = 0; i < size; i++)
	{
		len2 = len2 + to_string(a[i]);
	}

	if (len == len2)
	{
		cout << "Число является палиндромом" << endl;
	}
	else
	{
		cout << "Число НЕ является палиндромом" << endl;
	}

	//for (int i = 0; i < size; i++)                   // ОТЛАДКА
	//{
		//cout << a[i] << " " << endl;
	//}                                                // ОТЛАДКА



	delete[] a;

	system("pause");

	return 0;
}
