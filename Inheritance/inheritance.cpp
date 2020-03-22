#include<iostream>
#include<string>

using namespace std;



class motor{
	
	protected:
		int model;
		int transactionPrice;
	
	
	
	
	
};

class car: public motor{
	private:
		string color;
		int seat;
		
	public:
	int getModel(){
		return model;
	}	
	void setModel(int x){
		model =x;
	}
	int getTransactionPrice(){
		return transactionPrice;
	}
	void setTransactionPrice(int x){
		transactionPrice =x;
	}
	
	void setColor(string carColor){
		color = carColor;
	}
	string getColor(){
		return color;
	}
	void setSeat(int x){
		seat=x;
	}
	int getSeat(){
		return seat;
	}
	
	
};


int main(void){
	
	
	car ferrari;
	ferrari.setModel(2020);
	ferrari.setTransactionPrice(17);
	ferrari.setSeat(2);
	ferrari.setColor("red");
	cout <<"model: " << ferrari.getModel() ;
	cout <<"\ntransaction price: " << ferrari.getTransactionPrice();
	cout<< "\nseat: " << ferrari.getSeat();
    cout<<"\ncolor: "<<ferrari.getColor();
	
	
	
	
	
	
	
	
	
	return 0;
}
