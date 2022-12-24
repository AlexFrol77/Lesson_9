#include"Fraction.h"


Fraction::Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) { };

bool Fraction::operator==(Fraction& fr_right) {
	int temp_left = numerator_ / denominator_;
	int temp_right = fr_right.numerator_ / fr_right.denominator_;
	if (temp_left == temp_right) {
		return true;
	}
	else {
		return false;
	}
}
bool Fraction::operator<(Fraction& fr_right) {
	int temp_left = numerator_ / denominator_;
	int temp_right = fr_right.numerator_ / fr_right.denominator_;
	if (temp_left < temp_right) {
		return true;
	}
	else {
		return false;
	}
}
bool Fraction::operator>(Fraction& fr_right) {
	int temp_left = numerator_ / denominator_;
	int temp_right = fr_right.numerator_ / fr_right.denominator_;
	if (temp_left > temp_right) {
		return true;
	}
	else {
		return false;
	}
}
bool Fraction::operator<=(Fraction& fr_right) {
	int temp_left = numerator_ / denominator_;
	int temp_right = fr_right.numerator_ / fr_right.denominator_;
	if (temp_left <= temp_right) {
		return true;
	}
	else {
		return false;
	}
}
bool Fraction::operator>=(Fraction& fr_right) {
	int temp_left = numerator_ / denominator_;
	int temp_right = fr_right.numerator_ / fr_right.denominator_;
	if (temp_left >= temp_right) {
		return true;
	}
	else {
		return false;
	}
}