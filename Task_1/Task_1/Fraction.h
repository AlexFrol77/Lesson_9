#pragma once
#include"Fraction.h"

class Fraction {
private:
	int numerator_;
	int denominator_;
public:
	Fraction(int numerator, int denominator);

	bool operator==(Fraction& fr_right);
	bool operator<(Fraction& fr_right);
	bool operator>(Fraction& fr_right);
	bool operator<=(Fraction& fr_right);
	bool operator>=(Fraction& fr_right);
};
