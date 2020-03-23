#include<iostream>
#include <exception>

using namespace std;


class Except: public exception{
	
	public:
		char *fault(){
			return "there was an error.";
		}
	
};
class Error: public exception{
	
	public:
		char *fault(){
			return "zero division error.";
		}
};

class test{

	public:
		int division(int x,int y){
			if(x>0 && y==0){
				throw Error();
				
			}
			 else if (x>0 && y>0) {
				return x/y;
			}
			else if(x==0 && y==0) {
				
					throw Except();
				}
				else {
					throw Except();
				}
				
			}
		
		
};

int main(){
	
	test d;
	try {
		cout <<d.division(7,2) << endl;
		cout<<d.division(0,0)<<endl;
	    cout <<d.division(7,0)<<endl;
	    
	}
	catch(Except ex){
		cout<< ex.fault() <<endl;
	}catch(Error er){
		cout<<er.fault()<<endl;
	}					
	
	
	return 0;
	
}
