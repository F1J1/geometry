#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float x1, x2, y1, y2, r1, r2, r, formula;

	cout << "Circle 1: " << endl;
	cin >> x1 >> y1 >> r1;

	cout << "Circle 2: " << endl;
	cin >> x2 >> y2 >> r2;

	formula = sqrt ( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
	r = r1 + r2;

	cout << "1| Circle (" << x1 << y1 << r1 << ")" << endl;
	cout << " Perimetr = " << 2*3.14*r1 << endl;
	cout << " Area = " << r1*r1*3.14 << endl;

	if (formula <= r) cout << " Peresekaetsa with Circle 2";
	else cout << "Ne peresekayutsa";

        cout << "2| Circle (" << x2 << y2 << r2 << ")" << endl;
        cout << " Perimetr = " << 2*3.14*r2 << endl;
        cout << " Area = " << r2*r2*3.14 << endl;

	 if (formula <= r) cout << " Peresekaetsa with Circle 1";
        else cout << "Ne peresekayutsa";

	system("PAUSE");
	return 0;
}


