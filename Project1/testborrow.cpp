#include "book.h"
#include "borrow.h"
#include "reader.h"




	std::ostream& operator<<(std::ostream & os, const std::vector<int>&vect){

		for (auto number : vect)
			os << number << " ";
		os << std::endl;
		return os;
	}

	int main() {
		author::Author ADouglas("Douglas", "Adams", date::Date(02, 03, 2000), 123);
		
			book::Book myBook("The Hitchhiker's Guide to the Galaxy", ADouglas, " Anglais", "Science Fiction", date::Date(02, 03, 2021), 123456789);
		reader::Reader Tom("Tom", "Cosson", "tcosson");
		Tom.addlistborrowedbook(myBook.getIsbn());
		
		std::cout << Tom.getfirstname() << " a lu le livre de n isbn:" << std::endl;
		/* 
		std::cout << Tom.getlistborrowedbook();
		std::cout << myBook.getTitle() << myBook.getstatusofbook() << std::endl;


		borrow::Borrow emprunt(date::Date(02, 03, 2020), myBook, Tom);
		std::cout << myBook.getTitle() << myBook.getstatusofbook() << std::endl;*/


		Tom.borrow(myBook, date::Date(02, 03, 2020));

		std::cout << myBook.getTitle() << myBook.getstatusofbook() << std::endl;

		Tom.borrow(myBook, date::Date(02, 03, 2020));

	return 0;
}