#include <iostream>
#include <assert.h>

class Box{

	public:
	double lenght,breadth,height;
	
	double volume() {
		assert(lenght>0);
		assert(breadth>0);
		assert(height>0);
		return lenght*breadth*height;
	}
	
};

int main(){

	Box b1;
	b1.lenght = 5;
	b1.breadth=15;
	b1.height=3;

	std::cout << b1.volume() << "\n";
}
