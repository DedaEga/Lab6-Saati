#include <iostream>
using namespace std;

int main() {
	int count;
	cout << "Vvedite kolichestvo kriteriev: ";
	cin >> count;
	double** nums = new double* [count];
	for (int i = 0; i < count; i++) {
		nums[i] = new double[count];
	}
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (i == j) {
				nums[i][j] = 1;
			}
			else if(i < j) {
				while (true) {
					cout << "Vvedite koefficient sravneniya " << i + 1 << " s " << j + 1 << "(ot 0 do 9): ";
					cin >> nums[i][j];
					if ((nums[i][j] > 9) or (nums[i][j] < 0)) {
						cout << "Nedopustimoe znachenie, poprobujte eshchyo raz\n";
					}
					else {
						break;
					}
				}
			}
		}
	}
}