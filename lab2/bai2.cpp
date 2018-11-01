#include <iostream>
using namespace std;
struct total
{
	float initialamount;
	float years;
	float interestrate;
};
typedef struct total total;
void input(total &tt)
{
	cout << "\nEnter initial amount: ";
	cin >> tt.initialamount;
	cout << "\nEnter number of years: ";
	cin >> tt.years;
	cout << "\nEnter interest rate (percent per year): ";
	cin >> tt.interestrate;
}
float calculates(total &tt)
{
	float s = tt.initialamount;
	for (int i = 1; i <= tt.years; i++)
	{
		s += s * tt.interestrate / 100;
	}
	return s;
}
int main()
{
	total x;
	input(x);
	cout << "\nAt the end of 10 years, you will have: " << calculates(x);
	system("pause");
	return 0;
}
