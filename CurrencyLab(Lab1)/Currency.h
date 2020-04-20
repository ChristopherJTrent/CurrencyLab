#ifndef CURRENCYLAB_CURRENCY_H_
#define CURRENCYLAB_CURRENCY_H_

class Currency {
	//
private:
	int wholePart;
	int decimalPart;
protected:
	//Protected set for greater encapsulation
	//using Google C++ style, inlining short methods.
	//all one-liners
	inline void setWhole(int value);
	inline void setDecimal(int value);
public:

	//constructor
	Currency(int whole, int decimal);
	//virtual destructor
	virtual ~Currency() {}
	//public get for ease of use
	//using Google C++ style, inlining short methods.
	//all one-liners
	inline int getWhole();	
	inline int getDecimal();
	inline double getValue();
	//Operator Overloads.
	virtual Currency operator+(const Currency& other) = 0;
	virtual Currency operator-(const Currency& other) = 0;
	virtual Currency operator<(const Currency& other) = 0;
	virtual Currency operator>(const Currency& other) = 0;
	virtual Currency operator==(const Currency& other) = 0;
	virtual Currency operator+=(const Currency& other) = 0;
	virtual Currency operator-=(const Currency& other) = 0;
};

#endif //CURRENCYLAB_CURRENCY_H_
