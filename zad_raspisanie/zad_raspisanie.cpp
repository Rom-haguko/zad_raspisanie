

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	const int min_in_hour = 60; 
	const int start = 7 * min_in_hour; 
	const int end_Time = 19 * min_in_hour; 
	int in_way_time, rest_Time; 
	setlocale(LC_ALL, "Russian");
	cout << "Построение расписания движения автобусов" << endl;
	cout << "Введите время в пути от A до B в минутах: ";
	cin >> in_way_time;
	cout << "Введите время отдыха на остановках в минутах: ";
	cin >> rest_Time;
	cout <<"Расписание движения" << endl;
	cout << "Пункт A Пункт B" << setfill('0') << endl;
	int currTime = start;
	while (currTime + 2 * in_way_time + rest_Time < end_Time)
	{
		
		cout << setw(2) << currTime / min_in_hour << ":";
		cout << setw(2) << currTime % min_in_hour << "->";
		currTime += in_way_time; 
		cout << setw(2) << currTime / min_in_hour << ":";
		cout << setw(2) << currTime % min_in_hour << " ";
		currTime += rest_Time; 
		cout << setw(2) << currTime / min_in_hour << ":";
		cout << setw(2) << currTime % min_in_hour << "->";
		currTime += in_way_time; 
		cout << setw(2) << currTime / min_in_hour << ":";
		cout << setw(2) << currTime % min_in_hour << endl;
		currTime += rest_Time; 
	}
	return 0;
}
