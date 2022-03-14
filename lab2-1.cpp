#include <iostream>
using namespace std;
const int size = 10;
double stud[size] = {3.4, 4.3, 4.9, 2.9, 3.8, 4.8, 5, 4.7, 4, 3.3};
void sort(double st[size]) //сортируем массив, с помощью алгоритма, который есть в методичке
{
	for (int j = 0; j < size; j++)
		for (int i = 0; i < size - j; i++)
			if (st[i] < st [i+1])
			{
				double tmp = st[i];
				st[i] = st[i+1];
				st[i+1] = tmp;
			}
}

double Avg(double st[size]) //считаем средний балл группы
{
	double res = 0; //заводим переменную, в которой будем хранить результат
	for (int i = 0; i < size; i++) //проходимся по всем средним баллам с помощью i от 0 до size
		res += st[i]; //добавляем средний балл студента с индексом i в общий результат
	return res/size; //делим общий балл на количество студентов, чтобы получился средний балл группы
}

int BestScore(double st[size]) //считаем у кого средний балл больше 4 (тоже есть в методичке)
{
	int k = 0;
	for (int i =0; i < size; i++)
		if (st[i] >= 4)
			k++;
	return k;
}

void Task1()
{
    cout << "Task1: " <<endl; //выводим что это первое задание
	cout << "Avg marks of each student: "; //выводим какие оценки у них были изначально (чтобы проверить, что работает сортировка)
	for (int i = 0; i < size; i++) //выводим оценку каждого студента с помощью i от 0 до size
		cout << stud[i] << " "; //выводим оценку i-го студента
	cout << endl; //перевод строки
	sort(stud); //сортируем массив студентов
	cout << "Sorted marks of each student: "; //выводим какие оценки у них теперь (после сортировки)
	for (int i = 0; i < size; i++) //выводим оценку каждого студента с помощью i от 0 до size
		cout << stud[i] << " "; //выводим оценку i-го студента
	cout << endl; //перевод строки
	cout << "Avg mark of group : " << Avg(stud) << endl; // выводим средний балл группы
	cout << "Best score have : " << BestScore(stud) << " student(s)" << endl; //выводим сколько студентов имеют оценку 4 и больше
}

struct student{
double score;
int id;
};

student stud2[size] = {{3.4, 10}, {4.3, 1}, {4.9, 2}, {2.9, 3}, {3.8, 4}, {4.8, 5}, {5, 6}, {4.7, 7}, {4, 8}, {3.3, 9}};

void sort2(student st[size]) //сортируем массив, с помощью алгоритма, который есть в методичке
{
	for (int j = 0; j < size; j++)
		for (int i = 0; i < size - j; i++)
			if (st[i].score < st[i+1].score)
			{
				student tmp = st[i];
				st[i] = st[i+1];
				st[i+1] = tmp;
			}
}

double Avg2(student st[size]) //считаем средний балл группы
{
	double res = 0; //заводим переменную, в которой будем хранить результат
	for (int i = 0; i < size; i++) //проходимся по всем средним баллам с помощью i от 0 до size
		res += st[i].score; //добавляем средний балл студента с индексом i в общий результат
	return res/size; //делим общий балл на количество студентов, чтобы получился средний балл группы
}

int BestScore2(student st[size]) //считаем у кого средний балл больше 4 (тоже есть в методичке)
{
	int k = 0;
	for (int i =0; i < size; i++)
		if (st[i].score >= 4)
			k++;
	return k;
}

void Task2()
{
    cout << "Task2: " <<endl; //выводим что это первое задание
	cout << "Avg marks of each student: "; //выводим какие id у них были изначально (чтобы проверить, что работает сортировка)
	for (int i = 0; i < size; i++) //выводим id каждого студента с помощью i от 0 до size
		cout << stud2[i].id << " "; //выводим id i-го студента
	cout << endl; //перевод строки
	sort2(stud2); //сортируем массив студентов
	cout << "Sorted marks of each student: "; //выводим какие id у них теперь (после сортировки)
	for (int i = 0; i < size; i++) //выводим id каждого студента с помощью i от 0 до size
		cout << stud2[i].id << " "; //выводим id i-го студента
	cout << endl; //перевод строки
	cout << "Avg mark of group : " << Avg2(stud2) << endl; // выводим средний балл группы
	cout << "Best score have : " << BestScore2(stud2) << " student(s)" << endl; //выводим сколько студентов имеют оценку 4 и больше
}

int main()
{
	Task1();
	Task2();
	return 0;
}
