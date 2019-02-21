// PostPreIncr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Number {

public:
	int x;
	Number(int y) :x(y) {  };
	Number& operator++();
	Number operator++(int);
	void operator=(Number&);

};
Number& Number::operator++() {
	return *this;
  }
																	
void Number :: operator=(Number &t) {
	x = t.x;
}
Number Number::operator++(int) {
	Number temp = *this;
	++(*this);
	return temp;

}
int main()
{
	Number num(7),n(8) ;
	num = n;
	int y=num.x++;
	int z = ++num.x;
	cout << y << num.x << z;
    return 0;
}

