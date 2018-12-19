#include <iostream>
#include <string>
using namespace std;
struct number
{
	float firstnumber;
	float secondnumber;
	char operand1;
	char operand2;
};
typedef number number;
void input(number &n,number &p)
{
	cout << "Enter first number, operator, second number: ";
	cin >> n.firstnumber >> n.operand1 >> n.secondnumber >> n.operand2 >> p.firstnumber >> n.operand1 >> p.secondnumber;
}
double calculate(number &n,number &p)
{
	int s,k;
	if (n.operand2 == '+')
	{
		s = n.firstnumber * p.secondnumber + n.secondnumber * p.firstnumber;
		k = n.secondnumber * p.secondnumber;
		if (s%k==0)
			cout << s/k;
		else
		cout << s << "/" << k;

	}
	else
	{
		if (n.operand2 == '-')
		{
			s = n.firstnumber * p.secondnumber - n.secondnumber * p.firstnumber;
			k = n.secondnumber * p.secondnumber;
			if (s%k == 0)
				cout << s/k;
			else
				cout << s << "/" << k;
		}
		if (n.operand2 == '*')
		{
			s = n.firstnumber* p.firstnumber;
			k =  p.secondnumber* n.secondnumber;
			if (s%k == 0)
				cout << s/k;
			else
				cout << s << "/" << k;
		}

		if (n.operand2 == '/')
		{
			s = n.firstnumber* p.secondnumber;
			k =  p.firstnumber* n.secondnumber;
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
		number b,c;
		input(b,c);
		calculate(b,c);
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
