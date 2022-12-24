#include <iostream>
#include"Fraction.h"

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");

	int a,
		b,
		c,
		d;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> b;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> c;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> d;

	Fraction fr_result;
	Fraction fr1(a, b);
	Fraction fr2(c, d);
	
	std::cout << fr1 << " + " << fr2 << " = " << (fr_result = fr1 + fr2) << std::endl;
	std::cout << fr1 << " - " << fr2 << " = " << (fr_result = fr1 - fr2) << std::endl;
	std::cout << fr1 << " * " << fr2 << " = " << (fr_result = fr1 * fr2) << std::endl;
	std::cout << fr1 << " / " << fr2 << " = " << (fr_result = fr1 / fr2) << std::endl;
	
	std::cout << "++" << fr1 << " * " << fr2 << " = ";
	std::cout << (fr_result = ++fr1 * fr2) << std::endl;
	std::cout << "Значение дроби 1 = " << fr1 << std::endl;
	std::cout << fr1 << "--" << " * " << fr2 << " = ";
	std::cout << (fr_result = fr1-- * fr2) << std::endl;
	std::cout << "Значение дроби 1 = " << fr1 << std::endl;

	return 0;
}