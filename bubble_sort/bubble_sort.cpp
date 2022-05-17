#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int arr[] = { 2,1,9,5,3,6,8,4,0,7 };
	size_t MAX_INDEX = sizeof(arr) / sizeof(int);

	cout << "bubble_sort" << endl;

	for (int i = 0; i < MAX_INDEX; i++) {
		for (int j = 0; j < MAX_INDEX - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}

	for (const int x : arr) cout << x << " ";

}
