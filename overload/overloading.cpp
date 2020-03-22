#include<iostream>


using namespace std;

class vehicle{
	private :
		int price;
		
		
	public:
		void setPrice(int x){
			price =x;
		}
		void setPrice(float x){
			price=x*100;
		}
		
		int getPrice(){
			return price;
		}
		
};


int main(void){
	vehicle bentley;
	float x = 17.37;
	bentley.setPrice(x);
	cout<< "price:" << bentley.getPrice();
	bentley.setPrice(17);
	cout<< "\nprice: "<< bentley.getPrice();	
	
	
	return 0;
}
