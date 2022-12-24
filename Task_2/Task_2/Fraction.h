#pragma once
#include<iostream>
#include"Fraction.h"

class Fraction {
private:
	int numerator_;
	int denominator_;
	int numerator_result;
	int denominator_result;
public:
	Fraction(int numerator = 0, int denominator = 0);

	friend std::ostream& operator<<(std::ostream& out, Fraction& fr);

	Fraction operator+(Fraction& fr);
	Fraction operator-(Fraction& fr);
	Fraction operator*(Fraction& fr);
	Fraction operator/(Fraction& fr);

	Fraction& operator++();
	Fraction operator++(int);
	Fraction& operator--();
	Fraction operator--(int);

	void NOD();
};
