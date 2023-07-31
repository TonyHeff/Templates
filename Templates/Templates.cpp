//Anthony Heffernan
// 7/28/2023
// CIS.1202.5T1

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

template <typename T>    //template for calculating the value of a float or double number / 2
T half(T value) {
	return static_cast<T>(value / 2);
}

template<>                            //template for calculating int values. If an int is odd, add 1 to get an even number. Int cant return a decimal place
int half<int>(int value) {
	if (value % 2 == 0)
		return value / 2;
	else
		return (value + 1) / 2;
}

int main() {                                                       //sample numbers used to see if templated work
	double doubleNumber = 7;
	double halfDouble = half(doubleNumber);
	cout << "Half of " << doubleNumber << " is " << fixed << setprecision(2) << halfDouble << endl;

	float floatNumber = 5.0f;
	float halfFloat = half(floatNumber);
	cout << "Half of " << floatNumber << " is " << fixed << setprecision(2) << halfFloat << endl;

	int integerNumber = 9;
	int halfInteger = half(integerNumber);
	cout << "Half of " << integerNumber << " is " << halfInteger << endl;

	return 0; 
}