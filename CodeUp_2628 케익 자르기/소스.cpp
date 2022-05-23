#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[2], b[2];
	cin >> a[0] >> a[1] >> b[0] >> b[1];

	sort(a, a + 2);
	sort(b, b + 2);

	if (b[0] > a[0] && b[0] < a[1] && b[1] > a[1])
		cout << "cross";
	else if (b[1] > a[0] && b[1] < a[1] && b[0] < a[0])
		cout << "cross";
	else
		cout << "not cross";

	return 0;
}