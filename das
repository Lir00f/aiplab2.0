#include <iostream>
using namespace std;
struct weat {
	int temperature;
	double windspeed; 
	char wind, osadki;

};
int main()
{
	setlocale(LC_ALL, "Russian");
	int averagetemp, dayx, w, s, n, e, R, SS;
	double averagespeed;
	string flag;
	dayx = 1;
	SS = 0;
	R = 0;
	w = 0;
	s = 0;
	n = 0;
	e = 0;
	averagetemp = 0;
	averagespeed = 0;
	while (true)
	{
		weat day;

		cout << "День " << dayx << endl;
		cout << "Предоставьте сведения о сегодняшней погоде ниже " << endl;
		cout << "Введите температуру " << endl;
		cin >> day.temperature;
		cout << "Введите скорсть ветра " << endl;
		cin >> day.windspeed;
		cout << "Введите направление ветра " << endl;
		cin >> day.wind;
		cout << "Введите тип осадков " << endl;
		cin >> day.osadki;
		averagetemp = averagetemp + day.temperature;
		averagespeed = averagespeed + day.windspeed;
		if (day.wind == 'w')
			w = w + 1;
		else if (day.wind == 'n')
			w = w + 1;
		else if (day.wind == 'e')
			w = w + 1;
		else if (day.wind == 's')
			w = w + 1;
		if (day.osadki == 'R')
			R = R + 1;
		if (day.osadki == 'Ss')
			SS = SS + 1;
		dayx = dayx + 1;
		cout << "Введите quit для выхода из программы или любой символ для продолжения ";
		cin >> flag;
		if (flag == "quit")
			break;
	}
	averagetemp = averagetemp / dayx;
	averagespeed = averagespeed / dayx;
	cout << "Средняя скорость ветра " << averagespeed << endl;
	cout << "Средняя температура " << averagetemp << endl;
	cout << "Север = " << n << endl;
	cout << "Юг = " << s << endl;
	cout << "Восток = " << e << endl;
	cout << "Запад = " << w << endl;
	cout << "Дождь = " << R << endl;
	cout << "Снег = " << SS << endl;

}
