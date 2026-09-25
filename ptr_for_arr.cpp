
using namespace std;

void printArray(int *p, int size) {
	for(size_t i = 0; i < size; i++){
		cout << *(p + i) << endl;
	}
}