#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int arr[] = { 2,1,9,5,3,6,8,4,0,7 };
	size_t MAX_INDEX = sizeof(arr) / sizeof(int);

	cout << "---shell_sort---" << endl;

	int n = MAX_INDEX;
	for (int gap = n/2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			for (int j = i - gap; (j >= 0) && (arr[j] > arr[j + gap]); j = j - gap) {
				int tmp = arr[j];
				arr[j] = arr[j + gap];
				arr[j + gap] = tmp;
			}
		}
	}

	for (const int x : arr) cout << x << " ";

	return 0;
}