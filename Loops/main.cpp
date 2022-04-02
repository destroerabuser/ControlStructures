#include<iostream>
#include<conio.h>  //_getch();
using namespace std;

//#define WHILE
#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "ru");
#if defined WHILE
	int n; //Количество тераций (итерация - это однократное выполнение темы)
	int i = 0;//счетчик цикла(считает сколько раз будет выполнен цикл)
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key; //Будет хранить код клавиши
	do
	{
		key = _getch();//ожидает нажатие клавиши, и возвращает ASCII-код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование типов char в int
	} while (key != 27);
#endif
}