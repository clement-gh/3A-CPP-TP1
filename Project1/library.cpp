#include "library.h"

Library::Library(std::vector<book::Book> listofbooks, std::vector<reader::Reader> listofreaders,
	std::vector<author::Author> listofauthors): _listofbooks(listofbooks), _listofauthors(listofauthors), _listofreaders(listofreaders)
{
}

std::vector<book::Book> Library::getlistofbooks() const
{
	return _listofbooks;
}

std::vector<reader::Reader> Library::getlistofreaders() const
{
	return _listofreaders;
}

std::vector<author::Author> Library::getlistofauthors() const
{
	return _listofauthors;
}

void Library::setlistofbooks(book::Book book)
{
	_listofbooks.push_back(book);
}

void Library::setlistofreaders(reader::Reader reader)
{
	_listofreaders.push_back(reader);
}

void Library::setlistofauthors(author::Author author)
{
	_listofauthors.push_back(author);
}
