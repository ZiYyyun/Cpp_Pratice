#include <iostream>

using namespace std;

int run_arr_pp_demo(){
	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr + 1;
	
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;
	cout << *p + 2   << endl;
	
	return 0;
}
