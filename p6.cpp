#include <iostream>

using namespace std;

int main() {
	int apple, banana, coco, ans;

	cout << "insert number for apple:" << endl;
	cin >> apple;
	cout << "insert number for banana:" << endl;
	cin >> banana;
	cout <<"insert number for coco:" << endl;
	cin >>coco;
	ans = apple * banana * coco;
	
	cout <<"APPLE * BANANA * COCO = " << ans << endl;

	system("pause");
}