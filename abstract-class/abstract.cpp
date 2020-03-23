#include<iostream>
using namespace std;

class Employee{
	protected:
		int wage;
		int extra;
		
			
		
	public:
		virtual int wagePayment()=0;
		virtual int rise()=0;
		
		
};
class Engineer: public Employee {  
public:
	int wagePayment(){
		wage =7000;
		cout << "Engineer's wage is 7000$." << endl;
		return wage;
		
		
	}
	int rise(){
		wage =7000;
		extra =875;
		int x = this->wage +this->extra;
		return x;
	}
	
	
	
};
class Manager: public Employee{
	public:
		int wagePayment(){
			wage = 10000;
			cout<< "Manager's wage is 10000$" << endl;
			return wage;
			
		}
		int rise(){
			extra=5000;
			wage =10000;
			return extra +wage;
		}
	    

};

int main(){
	
	
	Engineer engineer;
	
	Manager manager;
	
	cout<< "wage: "<<engineer.wagePayment() << endl;
	cout<< "rise:"<<engineer.rise()<<endl;
	cout<< "wage: "<<manager.wagePayment() << endl;
	cout<< "rise "<<manager.rise() << endl;
	
	return 0;
}
