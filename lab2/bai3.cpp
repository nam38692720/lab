#include <iostream>
#include <string>
using namespace std;
struct number
{
	float firstnumber;
	float secondnumber;
	char operand;
};
typedef number number;
void input(number &n)
{
	cout << "Enter first number, operator, second number: ";
	cin >> n.firstnumber >> n.operand >> n.secondnumber;
}
double calculate(number &n)
{
	float s;
	if (n.operand == '+')
		s = n.firstnumber + n.secondnumber;
	else
	{
		if(n.operand == '-')
			s = n.firstnumber - n.secondnumber;
		if (n.operand == '*')
			s= n.firstnumber * n.secondnumber;
		if(n.operand == '/')
			s = n.firstnumber / n.secondnumber;
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
		cout << "\nAnswer = " << calculate(b);
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
