#include <iostream>
using namespace std;
struct phonenumber
{
	int areacode;	
	int exchange;
	int number;
};
typedef struct phonenumber phonenumber;
void inputnumber(phonenumber &pn)
{
	cout<< "\nInput the area code: ";
	cin>>pn.areacode;
	cout<<"\nInput the exchange number :";
	cin>> pn.exchange;
	cout<<"\nInput the nuber :";
	cin >>pn.number;
}
void outputnumber(phonenumber &pn)
{
	cout<<" The phone number is: ("<<pn.areacode<<") "<<pn.exchange<<"-"<< pn.number;
}
int main()
{
	phonenumber x;
	phonenumber y={222,767,8900};
	outputnumber(y);
	inputnumber(x);
	outputnumber(x);
	return 0;
}
