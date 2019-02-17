// PostPreIncr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Number {

public:
	int x;
	Number& operator++();
	Number operator++(int);
};
Number& Number::operator++() {
	return *this;
  }

Number Number::operator++(int) {
	Number temp = *this;
	++(*this);
	return temp;
}
int main()
{
	Number num ;
	num.x = 7;
	int y=num.x++;
	int z = ++num.x;
	cout << y << num.x << z;
    return 0;
}

