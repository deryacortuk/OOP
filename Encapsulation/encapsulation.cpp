#include<iostream>

using namespace std;

//Encapsulation

class rectangle{
	private:
		int height;
		int width;
		
	public:
		int area();
		int perimeter(){
			
			return 2*(height + width);
		}	
		
	int getHeight(){
		return height;
	}
	void setHeight(int y){
	   if(y>=0)  
	   	
	   	   height = y;
	   else 
	       height =0;
	   
	 	
	}
	int getWidth(){
		return width;
	}
	
	int setWidth(int x){
		if(x>=0)
		  width = x;
		else
		  width =0;
	}
};


int rectangle::area(){
	return height * width;
}


int main(){
	
	rectangle x;
	
	x.setHeight(17);
	x.setWidth(7);
	
	cout << "height: "<< x.getHeight( ) << "\nwidth:" << x.getWidth() << "\narea: " << x.area() << endl; ;
	cout << "perimeter: " << x.perimeter();
	
	
	return 0;
}
