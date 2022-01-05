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

		void Library::addlistofbooks(book::Book book)
		{
			_listofbooks.push_back(book);
		}

		void Library::setlistbook(std::vector<book::Book> list)
		{
			_listofbooks.insert(_listofbooks.end(), list.begin(), list.end());
		}
		

		void Library::setlistauthor(std::vector<author::Author> list)
		{
			_listofauthors.insert(_listofauthors.end(), list.begin(), list.end());
		}

		void Library::addlistofreaders(reader::Reader reader)
		{
			_listofreaders.push_back(reader);
		}

		void Library::setlistreader(std::vector<reader::Reader> list)
		{
			_listofreaders.insert(_listofreaders.end(), list.begin(), list.end());
		}
		

		void Library::addlistofauthors(author::Author author)
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

		
	

	void Library::delborrow(book::Book b)
	{
		auto it = std::find_if(_listofborrow.begin(), _listofborrow.end(), [&b](const borrow::Borrow& obj) {return obj.getbisbn() == b.getIsbn(); }); // permet de trouver l'emprenu associé au livre b


		if (it != _listofborrow.end()) {
			auto index = std::distance(_listofborrow.begin(), it);

			auto elemtoremove = _listofborrow.begin() + index;
			_listofborrow.erase(elemtoremove);
		}

	}
	void Library::borrowbook(book::Book& b, date::Date d, reader::Reader& r)
	{
		bool status = b.bookstatus();
		if (b.bookstatus() == false) {
			std::cout << "Vous ne pouvez pas emprunter un livre qui est deja emprunte." << std::endl;
		}
		else
		{

			borrow::Borrow B(b, d, r);
			b.setbookstatus(false);
			b.addlistofborrower(r.getid()); //ajout du lecteur dans la liste des empreuteurs du livre
			r.addlistborrowedbook(b.getIsbn()); //ajout de l'isbn du livre dans la liste des livres empruntés
		}

	}
	void Library::restorebook(book::Book& b, reader::Reader& r)
	{
		if (b.bookstatus() == true) {
			std::cout << "Vous ne pouvez pas rendre un livre qui n'est pas emprunte." << std::endl;
		}
		else if ((b.lastborrower(r.getid())) == false) //livre non emprunté par le lecteur
		{
			std::cout << "Vous ne n'etes pas la personne qui a emprunté ce livre" << std::endl;
		}
		else
		{

			  delborrow(b);

			b.setbookstatus(true);

		}
	}

	std::vector<book::Book> Library::allbookofanauthor(author::Author a)
	{
		return std::vector<book::Book>();
	}

	double Library::percentageofborrowedbooks()
	{
		return 0.0;
	}

	std::vector<std::string> Library::allbooksborrowed(reader::Reader r)
	{
		return std::vector<std::string>();
	}

	std::vector<std::string> Library::rankingofreader()
	{
		return std::vector<std::string>();
	}
	
	};