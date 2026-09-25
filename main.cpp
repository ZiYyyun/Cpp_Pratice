#include <iostream>

using namespace std;

int task(int v_arr, int *v_ptr);

int main(int argc, char** argv) {
	int arr[5] = {10, 20, 30, 40, 50};
	
	int *p = arr;  //此时p指向arr的地址？ 
	
	cout << arr[0] << endl;
	cout << p << endl;
	cout << *p << endl;
	
	p++;
	
	cout << *p << endl;
	cout << (*p + 2) << endl;
	





		/*   指针遍历数组（from ptr_for_arr.h）   */
	int arr[5] = {10, 20, 30, 40, 50};
	printArray(arr, 5);






	return 0;
}


