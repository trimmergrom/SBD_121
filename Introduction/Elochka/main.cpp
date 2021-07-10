#include<iostream>
using namespace std;

#define OFFSET "\t\t\t\t\t"		//OFFSET - СМЕЩЕНИЕ
//#define - определить
//#define создает макроопределение (макрос)
//#define показывает ЧТО_ЗАМЕНИТЬ (OFFSET), чем заменить ("\t\t\t\t\t").
#define delimiter "\n-------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << OFFSET << "В лесу родилась ёлочка, \n";
	cout << OFFSET << "В лесу она росла.\n";
	cout << OFFSET << "Зимой и летом стройная,\n";
	cout << OFFSET << "Зелёная была.\n";
	cout << "\n";
	cout << OFFSET << "Метель ей пела песенку :\n";
	cout << OFFSET << "\"Спи, ёлочка, бай - бай!\"\n";
	cout << OFFSET << "Мороз снежком укутывал :\n";
	cout << OFFSET << "\"Смотри, не замерзай!\"\n";
	cout << "\n";
	cout << OFFSET << "Трусишка зайка серенький\n";
	cout << OFFSET << "Под ёлочкой скакал.\n";
	cout << OFFSET << "Порою волк, сердитый волк, \n";
	cout << OFFSET << "Рысцою пробегал.\n";
	cout << "\n";
	cout << OFFSET << "Чу!Снег по лесу частому\n";
	cout << OFFSET << "Под полозом скрипит.\n";
	cout << OFFSET << "Лошадка мохноногая\n";
	cout << OFFSET << "Торопится, бежит.\n";
	cout << "\n";
	cout << OFFSET << "Везёт лошадка дровеньки, \n";
	cout << OFFSET << "На дровнях мужичок.\n";
	cout << OFFSET << "Срубил он нашу ёлочку\n";
	cout << OFFSET << "Под самый корешок.\n";
	cout << "\n";
	cout << OFFSET << "Теперь ты здесь, нарядная, \n";
	cout << OFFSET << "На праздник к нам пришла\n";
	cout << OFFSET << "И много, много радости\n";
	cout << OFFSET << "Детишкам принесла.";
	cout << delimiter;
	cout << "Харашо живьет на свете Винни-Пух\n";
	cout << delimiter << endl;
}