#include <iostream>
#include "ptr_for_arr.h"
#include "Dynamic_arr.hpp"

using namespace std;

int run_arr_pp_demo();

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
	printArray(arr, 5);






	cout << "\n--- arr_pp_demo ---" << endl;
	run_arr_pp_demo();




	/*  动态数组实现  */
	cout << "dynamic arr" << endl;
	MyArray myarr;
	myarr.pushBack(10);
	myarr.pushBack(20);
	myarr.print();



	return 0;
}


