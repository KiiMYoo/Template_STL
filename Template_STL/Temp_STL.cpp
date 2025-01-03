#include <iostream>
#include <algorithm>

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

	SimpleVector(const SimpleVector& other) {
		currentCapacity = other.currentCapacity;
		currnetSize = other.currnetSize;
		arr = new T[currentCapacity];
		for (int i = 0; i < currnetSize; i++) {
			arr[i] = other.arr[i];
		}
	}

	void resize(int newCapacity) {
		if (newCapacity > currentCapacity) {
			currentCapacity = newCapacity;
		}
	}

	void sortData() {
		sort(arr.begin(), arr.end());
	}

	void push_back(const T& value) {
		if (currnetSize < currentCapacity) {
			arr[currnetSize] = value;
			currnetSize++;
		}
		else {
			currnetSize++;
			currentCapacity += 5;
			arr[currnetSize] = value;
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