#pragma once
#include "reader.h"
#include "book.h"
class Library
{
private:
	std::vector<book::Book> _listofbooks;
	std::vector<reader::Reader> _listofreaders;
	std::vector<author::Author> _listofauthors;



public:
	Library(std::vector<book::Book> listofbooks, std::vector<reader::Reader> listofreaders,
		std::vector<author::Author> listofauthors);


	std::vector<book::Book> getlistofbooks() const;
	std::vector<reader::Reader> getlistofreaders() const;
	std::vector<author::Author> getlistofauthors() const;
	void setlistofbooks(book::Book book);
	void setlistofreaders(reader::Reader reader);
	void setlistofauthors(author::Author author);
};

