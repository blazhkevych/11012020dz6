/*
*** Пользователь 	вводит с клавиатуры расход бензина на 	100 км, стоимость трех видов бензина и 	сумму в гривнах.Посчитать, как далеко 	он уедет на каждом бензине.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double rashod_topl, rashod_topl_na1km, stoimost_DT, stoimost_A92, stoimost_A95, cash;
	cout << "Введите расход бензина на 100 км. : ";
	cin >> rashod_topl;
	cout << "Введите стоимость \"ДТ\" : ";
	cin >> stoimost_DT;
	cout << "Введите стоимость \"А-92\" : ";
	cin >> stoimost_A92;
	cout << "Введите стоимость \"А-95\" : ";
	cin >> stoimost_A95;
	cout << "Введите сумму в гривнах (наличка) : ";
	cin >> cash;
	rashod_topl_na1km = rashod_topl / 100;
	cout << "На топливе \"ДТ\" Вы сможете проехать : " << cash / stoimost_DT / rashod_topl_na1km << "км.\n";
	cout << "На топливе \"А-92\" Вы сможете проехать : " << cash / stoimost_A92 / rashod_topl_na1km << "км.\n";
	cout << "На топливе \"А-95\" Вы сможете проехать : " << cash / stoimost_A95 / rashod_topl_na1km << "км.\n";
}
