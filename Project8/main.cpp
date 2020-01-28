#include <iostream>
#include <string>

using namespace std;

void Hanoe(int x, string a, string b, string c)
{
	if (x > 1) {
		Hanoe(x - 1, a, c, b);
		cout << a << " -> " << b << endl;
		Hanoe(x - 1, c, b, a);
	}
	else
		cout << a << " -> " << b << endl;
}


int main()
{
	int n = 3;
	int res = 1;
	string a = "1", b = "2", c = "3";
	setlocale(LC_ALL, "rus");
	Hanoe(n, a, b, c);
	for (int i = 0; i < n; i++) res = res * 2;
	cout << "Количество передвижений : " << res - 1 << endl;
	return 0;
} // ханои 