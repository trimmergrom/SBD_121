#include<iostream>
#include<conio.h>
using namespace std;

#define Escape		27
#define UpArrow		72
//Директива #define показывает ЧТО_ЗАМЕНИТЬ ЧЕМ_ЗАМЕНИТЬ
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:	case 'W':case 'w': cout << "Вперед" << endl; break;
		case DownArrow:	case 'S':case 's': cout << "Назад" << endl; break;
		case LeftArrow:	case 'A':case 'a': cout << "Влево" << endl; break;
		case RightArrow:case 'D':case 'd': cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case 13:  cout << "Огонь" << endl;  break;
		case Escape: cout << "Exit" << endl;
		case -32:break;
		default:
			//if(key != -32)
			cout << "Error" << endl;
		}
	} while (key != Escape);
}