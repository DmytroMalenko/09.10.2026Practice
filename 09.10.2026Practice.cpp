#include <iostream>

using namespace std;

/* Task 1

int recursion(int num, int step) {
	if (step == 0) {
		return 1;
	}
	return num * recursion(num, step - 1);
}
 */

/* Task 2 

void recursion(int N) {
	if (N == 0) {
		return;
	}
	cout << "*";  recursion(N - 1);

}
*/


/* Task 3 

int recursion(int a, int b) {
	if (a == b) {
		return b;
	}
	return a + recursion(a + 1, b);
}

*/


/* Task 4 */

int recursion(int arr[], int size) {
	if (size == 90) {
		return 90;
	}
	int sum1 = 0;
	int sum2 = 0;

	for (int i = size; i < size + 10; i++) {
		sum1 += arr[i];
	}

	int next = recursion(arr, size + 1);

	for (int i = next; i < next + 10; ++i){
		sum2 += arr[i];
	}
	if (sum1 < sum2) {
		return size;
	}

	return next;
}





int main()
{
	  /* Task 1 
	int num, step;
	cout << "Enter number: \n";
	cin >> num;

	cout << "Enter step: \n";
	cin >> step;

	cout << recursion(num, step);
	return 0;
	*/


	/* Task 2 

	int N; 
	cout << "Enter N: \n";
	cin >> N;

	recursion(N);

	return 0;
	*/

	/* Task 3 

	int a, b;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << recursion(a, b);

	return 0;
	*/


	/* Task 4 */

	int arr[100];

	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	cout << "\n";

	cout << "Position: " << recursion(arr, 0);



}

