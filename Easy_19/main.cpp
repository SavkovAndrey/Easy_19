#include <iostream>

#include <string>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------���� �����-------------------------------------

	int x;
	int size;
	string len;

	cout << "������� ����������� �����: ";
	cin >> x;

	len = to_string(x);
	size = len.size();

	int* a = new int[size];  // ����� �����



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
		cout << "����� �������� �����������" << endl;
	}
	else
	{
		cout << "����� �� �������� �����������" << endl;
	}

	//for (int i = 0; i < size; i++)                   // �������
	//{
		//cout << a[i] << " " << endl;
	//}                                                // �������



	delete[] a;

	system("pause");

	return 0;
}
