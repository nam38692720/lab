#include<iostream>
using namespace std;
class employee{
	private:
		int id;
		float money;
	public:
		employee(int id,float money){
			this->id=id;
			this->money=money;
		}
		void tinh(int year){
			float m=this->money;
			for(int i=0;i<year;i++){
				m=(m+(m*0.055));
			}
			cout<<"so tien sau "<< year <<" : "<<m<<endl;
		}
};
int main(){
	employee e1(1,3000);
	e1.tinh(3);
}
