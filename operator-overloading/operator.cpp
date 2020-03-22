#include<iostream>

using namespace std;

class Rectangle{
	private:
		int height;
		int width;
	public:
	void setHeight(int height){
		if(height<0)
		  this->height=0;
		else
		  this->height =height;
		
	}
	int getHeight(){
		
		return height;
	}
	void setWidth(int width){
		if(width<0)
		   width=0;
		else
		   this->width = width;
	}
	int getWidth(){
		
		return width;
	}
	Rectangle operator+(const Rectangle&r){
		Rectangle rec;
		rec.height = this->height + r.height;
		rec.width = this->width + r.width;
		return rec;
		
	}
};

int main(){
	
	Rectangle rect;
	rect.setHeight(17);
	rect.setWidth(7);
	Rectangle x;
	x.setHeight(11);
	x.setWidth(13);
	Rectangle total = x + rect;
	cout << "height: "<<total.getHeight() << "\nwidth:" << total.getWidth();
	return 0;
}
