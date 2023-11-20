#include <iostream>
#include <ostream>
//#include <cstdio>
#include <vector>
using namespace std;
class IntTempCashe {
    public:
		std::vector<int> cash;
		int value;
		void init();
		void clear();
};
void IntTempCashe::init() {
	cash.resize(value);
	cout << "TempCashe by slava15923 init" << endl;
	cout << "memory value: " << sizeof(value) << endl;
}
void IntTempCashe::clear() {
	for (int i = 0; i < value; i++) {
	    cash[i] = 0;
	}
}
class FloatTempCashe {
    public:
		std::vector<float> cash;
		int value;
		void init();
		void clear();
};
void FloatTempCashe::init() {
	cash.resize(value);
	cout << "TempCashe by slava15923 init" << endl;
	cout << "memory value: " << sizeof(value) << endl;
}
void FloatTempCashe::clear() {
	for (int i = 0; i < value; i++) {
	    cash[i] = 0;
	}
}
class DoubleTempCashe {
    public:
		std::vector<double> cash;
		int value;
		void init();
		void clear();
};
void DoubleTempCashe::init() {
	cash.resize(value);
	cout << "TempCashe by slava15923 init" << endl;
	cout << "memory value: " << sizeof(value) << endl;
}
void DoubleTempCashe::clear() {
	for (int i = 0; i < value; i++) {
	    cash[i] = 0;
	}
}
