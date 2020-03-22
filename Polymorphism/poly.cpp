#include<iostream>

using namespace std;

class Figure{
	
	protected:
		int width;
		int height;
		
	
	
    public:
    	void setWidth(int width){
    		this->width =width;
    		
		}
		int   getWidth(){
			
			return width;
		}
	    void setHeight(int height){
	    	
	    	this->height= height;
		}
		int getHeight(){
			return height;
		}
		virtual int area(){
			cout <<"\narea figure:" ;
		}
        Figure(int x,int y){
		width= x;
		height = y;
	}
};
class rectangle: public Figure{
	public:
		int area (){
			
			return width* height;
		}
		
		rectangle(int x, int y): Figure(x,y){}
	
};
class triangle: public Figure{
	public:
		int area(){
			return (width*height)/2;
		}
		
	triangle(int x, int y):Figure(x,y){
	}
};
int main(){
	triangle tr (3,8);
	rectangle rec(7,3);
	cout << "triangle area: "<< tr.area();
	cout <<"\nrectangle area: "<< rec.area();
	
	Figure * f;
	f = &rec;
	cout <<"\nArea rectangle: " << f->area();
	
	f =&tr;
	cout << "\nArea triangle: " << f->area();
	
	Figure x(7,2);
	cout << "\nfigure area: " << x.area();
	
	return 0;
}
