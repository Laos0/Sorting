#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;


int main() {
	vector<int> myVector;


	for (int i = 0; i < 5; i++) {
		myVector.push_back((rand() % 5000000) + 1);
		cout << myVector[i] << endl;
	} 

	

	system("pause");
}