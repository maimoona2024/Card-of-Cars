#include<iostream>
using namespace std;
class newCars {
	private:
	string carName;
	string carCompany;
	int carModel;
	string carColor;
	string carCondition;
	public:
		void setcarName(string n) {
			carName = n;
		}
		void setcarCompany(string c) {
			carCompany = c;
		}
		void setcarModel(int m) {
			carModel = m;
		}
		void setcarColor(string l) {
			carColor= l;
		}
		void setcarCondition(string b){
			carCondition = b;
		}
		void display() {
			cout<<"\nName of Car: "<<carName<<endl;
			cout<<"Company of Car: "<<carCompany<<endl;
			cout<<"Model of Car: "<<carModel<<endl;
			cout<<"Color of Car: "<<carColor<<endl;
			cout<<"Condition of Car: "<<carCondition<<endl;
		}
};
int main() {
	newCars car1;
	cout<<"\n\n********************************CAR # 1*******************"<<endl;
	car1.setcarName("Alto");
	car1.setcarColor("White");
	car1.setcarCompany("Mitsubishi");
	car1.setcarModel(2002);
	car1.setcarCondition("Good");
	car1.display();
	newCars car2;
	cout<<"\n\n********************************CAR # 2*******************"<<endl;
	car2.setcarName("Core");
	car2.setcarColor("White");
	car2.setcarCompany("Mitsubishi");
	car2.setcarModel(2003);
	car2.setcarCondition("Good");
	car2.display();
	
}
