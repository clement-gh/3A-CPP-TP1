#include "date.h"
#include "reader.h"



int main() {
	
	//std::vector<int> vect = { 1,2,3};

	reader::Reader Tom ("Tom", "Cosson", "tcosson");
	Tom.addlistborrowedbook(8910);
	Tom.addlistborrowedbook(13);
	std::cout << Tom.getfirstname() << " a lu le livre de n isbn:"  << std::endl;
		std::cout << Tom.getlistborrowedbook();


	return 0;
}