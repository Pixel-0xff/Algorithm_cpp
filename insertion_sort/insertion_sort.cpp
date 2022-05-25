#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int arr[] = { 2,1,9,5,3,6,8,4,0,7 };
	size_t MAX_INDEX = sizeof(arr) / sizeof(int);

	cout << "---insertion_sort---" << endl;

	for (int i = 1; i < MAX_INDEX; i++) {
		int x = arr[i]; int j = i;

		while ( ((j - 1) >= 0) && (arr[j - 1] > x) ) {
			int tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
		arr[j] = x;
	}

	for (const int x : arr) cout << x << " ";

	return 0;
}