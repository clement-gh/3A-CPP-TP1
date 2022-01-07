#include "library.h"

namespace library {

	Library::Library(std::vector<book::Book> listofbooks, std::vector<reader::Reader> listofreaders,
		std::vector<author::Author> listofauthors, std::vector<borrow::Borrow> listofborrow) : _listofbooks(listofbooks), _listofauthors(listofauthors), _listofreaders(listofreaders)
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
		auto it = std::find_if(_listofborrow.begin(), _listofborrow.end(), [&b](const borrow::Borrow& obj) {return obj.getbisbn() == b.getIsbn(); }); // permet de trouver l'emprenunt associé au livre b


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
			addlistofborrow(B);
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
			std::cout << b.getTitle() << " a ete rendu." << std::endl;
		}
	}

	

	void Library::printlistborrow()
	{
		if (_listofborrow.size() == 0) {
			std::cout << "aucun emprunts en cours"<< std::endl;
		}
		else {
			std::cout << _listofborrow << std::endl;
		}

	}
	
	void Library::printlistreader()
	{
		std::cout << _listofreaders << std::endl;
	}

	void Library::printlistauthor()
	{
		std::cout << _listofauthors << std::endl;
	}

	void Library::printlistbook()
	{
		
		std::cout << _listofbooks << std::endl;
	}
	
	
	std::ostream& operator<<(std::ostream& os, const std::vector<borrow::Borrow>& vect)
	{
		for (auto d : vect) 
			os << d;
		for (auto it = vect.begin(); it != vect.end(); ++it) {
		os << " ";
		}

		
		return os;
	}
	std::ostream& operator<<(std::ostream& os, const std::vector<reader::Reader>& vect) {
		for (auto d : vect)
			os << d;
		for (auto it = vect.begin(); it != vect.end(); ++it) {
			os << " ";
		}


		return os;
	}
	std::ostream& operator<<(std::ostream& os, const std::vector<author::Author>& vect) {
		for (auto d : vect)
			os << d;
		for (auto it = vect.begin(); it != vect.end(); ++it) {
			os << " ";
		}


		return os;
	}
	std::ostream& operator<<(std::ostream& os, const std::vector<book::Book>& vect) {
		for (auto d : vect)
			os << d;
		for (auto it = vect.begin(); it != vect.end(); ++it) {
			os << " ";
		}


		return os;
	}
	//auto i = std::find_if(_listofbooks.begin(), _listofbooks.end(), [&a](const book::Book& book) {return book.getbookauthor() == a.getFullname(); });

	void Library::allbookofanauthor(author::Author a)
	{
	

		for (auto i = 0; i != _listofbooks.size(); i++) {
			if (a.getFullname() == _listofbooks.at(i).getbookauthor())
				std::cout << _listofbooks.at(i) << std::endl;
		}

		
		
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