#include <iostream>

using namespace std;

int main() {
	int a, b, c, ans;

	cout << "insert number 1:" << endl;
	cin >> a;
	cout << "insert number 2:" << endl;
	cin >> b;
	cout <<"insert number 3:" << endl;
	cin >>c;
	ans = a * b * c;

	cout << a <<endl;
	cout << b <<endl;
	cout << c <<endl;
	cout <<"Number 1 * Number 2 * Number 3 = " << ans << endl;

	system("pause");
}