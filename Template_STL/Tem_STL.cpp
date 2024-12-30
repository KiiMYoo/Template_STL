#include <iostream>

using namespace std;

template <typename T>

class SimpleVector {
private:
	T* arr;
	int cap;
	int siz = 0;

public:
	SimpleVector(int i = 10) : cap(i) {
		arr = new T[i];
	}

	void push_back(T num) {
		if (siz < cap) {
			arr[siz] = num;
			siz++;
		}
	}

	void pop_back() {
		if (siz > 0) {
			siz--;
		}
	}
	
	int size() {
		return siz;
	}

	int capacity() {
		return cap;
	}

	~SimpleVector() {
	}

};


int main() {

	SimpleVector<int> vec;

	cout << vec.size()<< " " << vec.capacity() << endl;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	cout << vec.size() << " " << vec.capacity() << endl;

	vec.pop_back();
	vec.pop_back();

	cout << vec.size() << " " << vec.capacity() << endl;

	return 0;
}