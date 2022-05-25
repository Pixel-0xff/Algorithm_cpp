#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int arr[] = { 2,1,9,5,3,6,8,4,0,7 };
	size_t MAX_INDEX = sizeof(arr) / sizeof(int);

	cout << "---selection_sort---" << endl;

	for (int i = 0; i < MAX_INDEX; i++) {
		int max = arr[0]; int index = 0;
		for (int j = 0; j < MAX_INDEX - i - 1; j++) {
			if (arr[j] > max)max = arr[j]; index = j;
		}
		int tmp = arr[MAX_INDEX - i - 1];
		arr[MAX_INDEX - i - 1] = arr[index];
		arr[index] = tmp;
	}

	for (const int x : arr) cout << x << " ";

	return 0;
}