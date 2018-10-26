#include <iostream>
#include <string>
using namespace std;
struct number
{
	float firstnumber;
	float secondnumber;
	float thirdnumber;
	float fourthnumber;
	char operand1;
	char operand2;
};
typedef number number;
void input(number &n)
{
	cout << "Enter first number, operator, second number: ";
	cin >> n.firstnumber >> n.operand1 >> n.secondnumber >> n.operand2 >> n.thirdnumber >> n.operand1 >> n.fourthnumber;
}
double calculate(number &n)
{
	int s,k;
	if (n.operand2 == '+')
	{
		s = n.firstnumber * n.fourthnumber + n.secondnumber * n.thirdnumber;
		k = n.secondnumber * n.fourthnumber;
		if (s%k==0)
			cout << s/k;
		else
		cout << s << "/" << k;

	}
	else
	{
		if (n.operand2 == '-')
		{
			s = n.firstnumber * n.fourthnumber - n.secondnumber * n.thirdnumber;
			k = n.secondnumber * n.fourthnumber;
			if (s%k == 0)
				cout << s/k;
			else
				cout << s << "/" << k;
		}
		if (n.operand2 == '*')
		{
			s = n.firstnumber*n.thirdnumber;
			k = n.fourthnumber* n.secondnumber;
			if (s%k == 0)
				cout << s/k;
			else
				cout << s << "/" << k;
		}

		if (n.operand2 == '/')
		{
			s = n.firstnumber* n.fourthnumber;
			k = n.thirdnumber* n.secondnumber;
			if (s%k == 0)
				cout << s/k;
			else
				cout << s << "/" << k;
		}
	}
	return s;
}
void repeat()
{
	char n;
	do 
	{
		number b;
		input(b);
		calculate(b);
		cout<<"\nDo another(y/ n) ?  " ;
		cin >> n;
	} while (n == 'y');

}
int main()
{
	repeat();
	system("pause");
	return 0;
}
