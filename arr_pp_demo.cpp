#include <iostream>

using namespace std;

int main(int argc, char** argv){
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr + 1;
	
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *p + 2   << endl;
	
	return 0;
}
