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
		else{
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


int main() {

	SimpleVector<int> vec;
	SimpleVector<int> vec1(5);

	cout << vec.size()<< " " << vec.capacity() << endl;
	cout << vec1.size() << " " << vec1.capacity() << endl;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(40);
	vec1.push_back(40);

	cout << vec.size() << " " << vec.capacity() << endl;
	cout << vec1.size() << " " << vec1.capacity() << endl;

	vec.pop_back();
	vec.pop_back();

	cout << vec.size() << " " << vec.capacity() << endl;

	return 0;
}