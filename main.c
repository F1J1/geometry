<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	float x1, x2, y1, y2, r1, r2, r = r1 + r2 , peresechenie ;

printf("Circle №1 : ");
scanf("%f%f%f",&x1 ,&y1 ,&r1);

printf("Circle №2 : ");
scanf("%f%f%f",&x2 ,&y2 ,&r2);

peresechenie = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

printf("\n 1|Circle (%5.2f %5.2f %5.2f)", x1, y1, r1);
printf("\n Perimetr = %5.2f", 2*3.14*r1);
printf("\n Plochad = %5.2f", 3.14*r1*r1);

if (r >= peresechenie) printf("\n Peresekaetsa s Circle №2");
else printf ("\n  Ne peresekaetsa");  

printf("\n 2|Circle (%5.2f %5.2f %5.2f)", x2, y2, r2);
printf("\n Perimetr = %5.2f", 2*3.14*r2);
printf("\n Plochad = %5.2f", 3.14*r2*r2);

if (r >= peresechenie) printf("\n Peresekaetsa s Circle №1");
else printf ("\n  Ne peresekaetsa");  

system ("PAUSE");
return 0;
}

=======
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


>>>>>>> 4d5c432cdc19caafb143b8f067f1918e7751d159
