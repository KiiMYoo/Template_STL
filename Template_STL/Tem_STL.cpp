#include <iostream>

using namespace std;

template <typename T>

class SimpleVector {
private:
	T* arr;
	int currentCapacity;
	int currnetSize;

public:
	SimpleVector(int i = 10) : currentCapacity(i), currnetSize(0) {
		arr = new T[i];
	}

	void push_back(const T& value) {
		if (currnetSize < currentCapacity) {
			arr[currnetSize] = value;
			currnetSize++;
		}
	}

	void pop_back() {
		if (currnetSize > 0) {
			currnetSize--;
		}
	}
	
	int size() {
		return currnetSize;
	}

	int capacity() {
		return currentCapacity;
	}

	~SimpleVector() {
		delete[] arr;
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