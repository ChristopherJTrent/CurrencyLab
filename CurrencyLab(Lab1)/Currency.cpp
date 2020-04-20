#include "Currency.h"
//Primary style guide in use is Google C++.
int Currency::getDecimal() {
	return this->decimalPart;
}
int Currency::getWhole() {
	return this->wholePart;
}
double Currency::getValue() {
	return (double)this->wholePart + this->decimalPart / 100;
}
//ISO guideline recommends use of initializer lists.
Currency::Currency(int whole, int decimal) 
	:wholePart(whole), decimalPart(decimal) {}

void Currency::setDecimal(int value) {
	this->decimalPart = value;
}
void Currency::setWhole(int value) {
	this->wholePart = value;
}
