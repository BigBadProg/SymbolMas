

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
using namespace std;



int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	const int n = 100;
	char sym=0;
	int i=0;
	int p = 0;
	int kol_spaces = 0;
	char *str = new char[n];
	char *str2 = new char[n];
	char space = ' ';
	
	cin.getline(str,n);

	cout << str;

//Колличество пробелов
	//while (p < strlen(str)) {
	//	if (str[p] == ' ')

		//	kol_spaces++;
		//p++;
//	}
	//kol_spaces++;
	//cout << "Пробелы: " << kol_spaces;

//	i = 0;
	//while (*(str+i) != ' ') {

		//sym = *(str+i);
	//	str2[i] = sym;
	//}


//	cout << str2;

	







	


	_getch();
    return 0;
}

