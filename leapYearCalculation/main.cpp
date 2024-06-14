#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <time.h>

using namespace std;

void calculateFutureLeapYears(int year);
void calculatePastLeapYears(int year);

int main() {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int year = 1900 + ltm->tm_year;
	
	cout << "This Year: " << year << endl;

	calculatePastLeapYears(year);
	calculateFutureLeapYears(year);

	return 0;
}

void calculateFutureLeapYears(int year) {
	cout << "\n Future Leap Years: " << endl;
	for (int i = year; i < year + 1000; i++) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
			cout << i << "\t";  // one tab space
		}
	}
}

void calculatePastLeapYears(int year) {
	cout << "\n Past Leap Years: " << endl;
	for (int i = year; i > 0; i--) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
			cout << i << "\t";
		}
	}
}