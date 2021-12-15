#include <iostream>
#include "date.h"
#include "book.h"
#include "author.h"

int main ()
{
	//création d'un livre
	Book myBook("The Hitchhiker's Guide to the Galaxy", author::Author ("Douglas", "Adams",date::Date(02,03,2000),123), " Anglais", "Science Fiction", date::Date (02,03,2021), 123456789);
	
	//affichage des info du livre
	std::cout << "Informations du livre : " << myBook.getTitle() << ", " << myBook.getAutor() << ", " << myBook.getLanguage() << ", " << myBook.getCategory() << ", " << myBook.getPubDate() << ", " << myBook.getIsbn() << std::endl;
	
	std::cout << "Fin du programme" << std::endl;
	
	return 0;
}