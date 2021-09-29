#include<iostream>
using namespace std;
int main() {

	int n = 5;
	int arr1[5] = {2, 3, 5, 3, 2};
	for (int i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	// 1st approach
	// int arr2[n];
	// for (int i = 0; i < n; i++) {
	// 	arr2[i] = arr1[n - 1 - i];
	// }
	// for (int i = 0; i < n; i++) {
	// 	cout << arr2[i] << " ";
	// }
	// cout << endl;
	// int i = 0;
	// for (i = 0; i < n; i++) {
	// 	if (arr1[i] != arr2[i]) {
	// 		cout << "Not a palindrome" << endl;
	// 		break;
	// 	}
	// }
	// if (i == n) {
	// 	cout << "Palindrome" << endl;
	// }
	// 2nd approach
	int left = 0;
	int right = n - 1;

	bool flag = true;

	while (left <= right) {
		if (arr1[left] != arr1[right]) {
			flag = false;
		}
		left++;
		right--;
	}

	if (flag == true) {
		cout << "Palindrome" << endl;
	} else {
		cout << "Not a Palindrome" << endl;
	}
}
