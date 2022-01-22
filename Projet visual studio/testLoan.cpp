#include <iostream>
#include "date.h"
#include "book.h"
#include "reader.h"
#include "loan.h"

int main () {
	//création d'une date
	//date::Date (14,12,2021);

	//création d'un livre
	//book::Book myBook ("The Hitchhiker's Guide to the Galaxy", author::Author ("Douglas", "Adams",date::Date(02,03,2000),123), " Anglais", "Science Fiction", date::Date (02,03,2021), 123456789);

	//création d'un lecteur
	//reader::Reader ("Tom", "Cosson", "123");

	//Emprunt d'un livre
	loan::Loan myLoan ();

	//affichage des info du livre
	std::cout << "Informations du livre : " << myBook.getTitle() << ", " << myBook.getAutor() << ", " << myBook.getLanguage() << ", " << myBook.getCategory() << ", " << myBook.getPubDate() << ", " << myBook.getIsbn() << std::endl;
	
	//affichage des info de l'emprunt
	std::cout << "Informations de l'emprunt : " << myLoan.getborrowingDate() << " , " << myLoan.getIsbn() << " , " << myLoan.getId() << std::endl;
	
	std::cout << "Fin du programme" << std::endl;
	
	return 0;
}