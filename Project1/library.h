#pragma once
#include "reader.h"
#include "book.h"
class Library
{
private:
	std::vector<book::Book> _listofbooks;
	std::vector<reader::Reader> _listofreaders;
	std::vector<author::Author> _listofauthors;
	std::vector<borrow::Borrow> _listofborrow;


public:
	Library(std::vector<book::Book> listofbooks, std::vector<reader::Reader> listofreaders,
	std::vector<author::Author> listofauthors,std::vector<borrow::Borrow> listofborrow);


	//getteur setteur de la liste de livres
	std::vector<book::Book> getlistofbooks() const;
	void setlistofbooks(book::Book book);

	//getteur setteur de la liste de lecteurs
	std::vector<reader::Reader> getlistofreaders() const;
	void setlistofreaders(reader::Reader reader);

	//getteur setteur de la liste d'auteurs
	std::vector<author::Author> getlistofauthors() const;
	void setlistofauthors(author::Author author);

	//getteur setteur de la liste d'emprunts
	std::vector<borrow::Borrow> getlistofborrow() const;
	void setlistofborrow(borrow::Borrow borrow);
};

