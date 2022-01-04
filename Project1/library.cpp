#include "library.h"

namespace library {
	Library::Library(std::vector<book::Book> listofbooks, std::vector<reader::Reader> listofreaders,
		std::vector<author::Author> listofauthors, std::vector<borrow::Borrow> listofborrow) : _listofbooks(listofbooks), _listofauthors(listofauthors), _listofreaders(listofreaders), _listofborrow(listofborrow)
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

	std::vector<borrow::Borrow> Library::getlistofborrow() const
	{
		return _listofborrow;
	}

	void Library::addlistofborrow(borrow::Borrow borrow)
	{

		_listofborrow.push_back(borrow);

	}

	void Library::setlistofborrow(std::vector<borrow::Borrow> list)
	{
		_listofborrow = list;
	}

	

	void Library::delborrow(book::Book b)
	{
		auto it = std::find_if(_listofborrow.begin(), _listofborrow.end(), [&b](const borrow::Borrow& obj) {return obj.getbisbn() == b.getIsbn(); });


		if (it != _listofborrow.end()) {
			auto index = std::distance(_listofborrow.begin(), it);

			auto elemtoremove = _listofborrow.begin() + index;
			_listofborrow.erase(elemtoremove);
		}

	}
	/*
	void library::delborrow(book::Book b)
	{

		auto it = std::find_if(_listofborrow.begin(), _listofborrow.end(), [&b](const borrow::Borrow& obj) {return obj.getbisbn() == b.getIsbn(); });


		if (it != _listofborrow.end()) {
			auto index = std::distance(_listofborrow.begin(), it);

			auto elemtoremove = _listofborrow.begin() + index;
			_listofborrow.erase(elemtoremove);
		}

	}
	*/
}