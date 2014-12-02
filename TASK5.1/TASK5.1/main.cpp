
#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>
using namespace std;
const int STR_LENGTH = 80;

bool readLine(ifstream& in, char* buffer);
{
	buffer[0] = 0; // Для последующей проверки
	in.getline(buffer, STR_LENGTH + 1, ' \n');
	if (in.fail())
	{
		if (buffer[0]>0)
			cout << "Слишком длинная строка во входном файле" << endl;
		return false;
	}
	return true;
}

/*void rewriting(char* buffer);
{
	for (i = 1, i < strlen(buffer), i++)
	{
		if buffer[i] = ";" return
	}

}*/


void main(void)
{
	setlocale(LC_ALL, "Russian");
	ifstream in("in.txt");
	if (!in.is_open())
	{
		cout << "Файл in.txt не существует" << endl;
		return -1;
	}
	ofstream out("out.txt");
	if (!out.is_open())
	{
		cout << "Невозможно создать выходной файл out.txt" << endl;
		return -2;
	}
	char buffer[STR_LENGTH + 1];
	while (readLine(in, buffer))
	{
		for (i = 1, i < strlen(buffer), i++)
		{
			if (buffer[i] == ";")
			{
				char buffer1;



			}


		}
		out << buffer << endl;
	}
	return 0;
}