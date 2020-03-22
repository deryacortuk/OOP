#include<iostream>

using namespace std;



class Car{
	
	private: 
	   int model;
	   int price;
	   
	public:
		Car(){
		model =2021;
		price = 7;	
			
		}
		Car(int x){
			model = x;
		}
		Car(int x,int y){
			model = x;
			price = y;
		}
		void setModel(int y){
			model = y;
			
		}
		int getModel(){
			return model;
		}
		
		void setPrice(int x){
			price = x;
		}
		int getPrice(){
			return price;
		}
};
int main(){
	
	Car porsche;
	Car ferrari (2020,17);
	Car bentley(2022);
	
	cout<<"Porsche: : " << porsche.getModel() << "\nFerrari: " << ferrari.getModel()<< "\nBentley: "<<bentley.getModel()<< "\nFerrari:" << ferrari.getPrice();
	
	return 0;	
	
	
}
