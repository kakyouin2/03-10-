#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	//Case1.
		//Дано целое число в диапазоне 1–7.Вывести строку — название дня
	//	недели, соответствующее данному числу(1 — «понедельник», 2 — «втор -
	//int k;
	//cin >> k;
	/*if (day == 1) {
		cout << "monday" << endl;
	}
	/*/
	/*switch (day) {
	case 1: cout << "понедельник" << endl; break;
	case 2: cout << "вторник" << endl; break;
	case 3: cout << "среда" << endl; break;
	case 4: cout << "четверг" << endl; break;
	case 5: cout << "пятница" << endl; break;
	case 6: cout << "суббота" << endl; break;
	case 7: cout << "воскресенье" << endl; break;
	default: cout << "неправильный номер дня" << endl;
	}
}*/
//Case2
//Дано целое число K. Вывести строку - описание оценки, 
	//соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).
	//Если K не лежит в диапазоне 1–5,то вывести строку «ошибка».
	/*switch (k) {
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "неудовлетварительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4: cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default: cout << "неправильный номер дня" << endl;
	}*/
	//Case3.
	//	Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).
	//	Вывести название соответствующего времени года(«зима»,
	//	«весна», «лето», «осень»).
	/*switch (k) {
	case 1: cout << "зима" << endl; case 2: cout << "" << endl; ; case 3: cout << "" << endl; break;
	case 4: cout << "весна" << endl;  case 5: cout << "" << endl;  case 6: cout << "" << endl; break;
	case 7: cout << "лето" << endl; case 8: cout << "" << endl;  case 9: cout << " " << endl; break;
	case 10: cout << "осень" << endl; case 11: cout << "" << endl; case 12: cout << "" << endl; break;
	default: cout << "неправильный номер месяца " << endl;
	}
}*/
//Case4◦
//	.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
	//	февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.
	/*switch (k) {
	case 1: cout << "декабрь 31" << endl; break; case 2: cout << "январь31" << endl; break; case 3: cout << "февраль28" << endl; break;
	case 4: cout << "март 31" << endl; break;  case 5: cout << "апрель30" << endl; break;  case 6: cout << "май31" << endl; break;
	case 7: cout << "июнь30" << endl; break; case 8: cout << "июль31" << endl; break;  case 9: cout << "август31 " << endl; break;
	case 10: cout << "сентябрь30" << endl; break; case 11: cout << "октябрь30" << endl; break; case 12: cout << "ноябрь30" << endl; break;
	default: cout << "неправильный номер месяца " << endl;
	}
}*/
//	Case5.Арифметические действия над числами пронумерованы следующим
//		образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
//		номер действия N(целое число в диапазоне 1–4) и вещественные числа A
//		и B(В не равно 0).Выполнить над числами указанное действие и вывести результат.int d;
	//int n;
	//cin >> n;
	//int d;
	//cin >> d;
/*	switch (k) {
	case 1: cout << k+d << endl; break;
	case 2: cout << k-d << endl; break;
	case 3: cout << k*d << endl; break;
	case 4: cout << k/d << endl; break;
	default: cout << "неправильная цифра " << endl;
	}
}*/




//If1.Дано целое число.Если оно является положительным, то прибавить к нему 1;
	//в противном случае не изменять его. Вывести полученное число.
	/*int a;
	cin >> a;
	if (a > 0) {
		a + 1;
	}
	cout << a << endl;
}*/
//If2.Дано целое число.Если оно является положительным, то прибавить кнему 1;
//	 в противном случае вычесть из него 2. Вывести полученное число.
	/*int a;
	cin >> a;
	if (a > 0)
		a=a + 1;

	if (a < 0)
		a=a - 2;

	cout << a << endl;
}*/
//If3.Дано целое число.
//Если оно является положительным, то прибавить кнему 1;
//	 если отрицательным, то вычесть из него 2; если нулевым, то заменить его на 10. Вывести полученное число.
/*int a;
cin >> a;
if (a > 0)
a = a + 1;

if (a < 0)
	a = a - 2;
if (a < 0)
	a = a =10 ;
cout << a << endl;
}*/
//If6◦
//.Даны два числа.Вывести большее из них.
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (a > b)
		cout << a << endl;
	else cout << b << endl;
}
