#ifndef CURRENCYLAB_YEN_H_
#define CURRENCYLAB_YEN_H_
#include "Currency.h"
class Yen : public Currency {
public:
	Yen operator+(const Yen& other);
	Yen operator-(const Yen& other);
	Yen operator<(const Yen& other);
	Yen operator>(const Yen& other);
	Yen operator==(const Yen& other);
	Yen operator+=(const Yen& other);
	Yen operator-=(const Yen& other);
};
#endif //CURRENCYLAB_YEN_H_