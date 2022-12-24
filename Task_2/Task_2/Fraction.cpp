#include"Fraction.h"


Fraction::Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) { };

Fraction Fraction::operator+(Fraction& fr) {
	numerator_result = numerator_ * fr.denominator_ + denominator_ * fr.numerator_;
	denominator_result = denominator_ * fr.denominator_;
	NOD();
	return Fraction(numerator_result, denominator_result);
}
Fraction Fraction::operator-(Fraction& fr) {
	numerator_result = numerator_ * fr.denominator_ - denominator_ * fr.numerator_;
	denominator_result = denominator_ * fr.denominator_;
	NOD();
	return Fraction(numerator_result, denominator_result);
}
Fraction Fraction::operator*(Fraction& fr) {
	numerator_result = numerator_ * fr.numerator_;
	denominator_result = denominator_ * fr.denominator_;
	NOD();
	return Fraction(numerator_result, denominator_result);
}
Fraction Fraction::operator/(Fraction& fr) {
	numerator_result = numerator_ * fr.denominator_;
	denominator_result = denominator_ * fr.numerator_;
	NOD();
	return Fraction(numerator_result, denominator_result);
}
Fraction& Fraction::operator++() {
	this->numerator_ = numerator_ + denominator_;
	return *this;
}
Fraction Fraction::operator++(int) {
	Fraction temp = *this;
	this->numerator_ = numerator_ + denominator_;
	return temp;
}
Fraction& Fraction::operator--() {
	this->numerator_ = numerator_ - denominator_;
	return *this;
}
Fraction Fraction::operator--(int) {
	Fraction temp = *this;
	this->numerator_ = numerator_ - denominator_;
	return temp;
}
void Fraction::NOD() {
	for (int i = 3; i < denominator_result; i++) {
		if ((numerator_result % i == 0) && (denominator_result % i == 0)) {
			numerator_result /= i;
			denominator_result /= i;
			break;
		}
	}
}
std::ostream& operator<<(std::ostream& out, Fraction& fr) {
	out << fr.numerator_ << "/" << fr.denominator_;
	return out;
}