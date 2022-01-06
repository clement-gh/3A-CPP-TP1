#include "book.h"

namespace book {
	Book::Book(std::string title, author::Author bookAuthor, std::string language, std::string category, date::Date pubDate, int isbn) : _title(title), _bookAuthor(bookAuthor), _language(language), _category(category), _pubDate(pubDate), _isbn(isbn) , _isborrowed(true)
	{
		//this->setbookstatus(true);
	}

	std::string Book::getTitle() const {
		return _title;
	}

	std::string Book::getAutor() {
		return _bookAuthor.getFullname();
	}

	std::string Book::getLanguage() const {
		return _language;
	}

	std::string Book::getCategory() const {
		return _category;
	}

	std::string Book::getPubDate() const {
		return toString(_pubDate);
	}

	int Book::getIsbn() const {
		return _isbn;
	}
	bool Book::bookstatus() const
	{
		return _isborrowed;
	}
	void Book::setbookstatus(bool status)
	{
		_isborrowed = status;
	}
	std::string Book::getstatusofbook() const
	{
		if (_isborrowed == true) {
			return this->getTitle() + " est disponible.";
		}
		return this->getTitle() + " est emprunte.";
	}
	void Book::addlistofborrower(std::string borrower)
	{
		_borrowedby.push_back(borrower);

	}

	bool Book::lastborrower(std::string borrower)
	{
		auto it = std::find(_borrowedby.begin(), _borrowedby.end(), borrower);

		 if (it != _borrowedby.end()) {
			 auto index = std::distance(_borrowedby.begin(), it);



			 if (index != _borrowedby.size() ) { // si index = dernièreposition alors le borrower est le derrnier emprunteur de ce livre
				 return true;  //retourne true si le lecteur est dans la liste des emprunteurs
			 }
			 else {
				 return false;
			 }
		 }
		 else
			 
		 return false;
	}
	


	std::ostream& operator<<(std::ostream& os, Book& b)
	 {
			os << "Informations sur le Livre : ";
			os << b.getTitle();
			os << ", ";
			os << b.getAutor();
			os << ", ";
			os << b.getLanguage();
			os << ", ";
			os << b.getCategory();
			os << ", ";
			os << b.getPubDate();
			os << ", ";
			os << b.getIsbn();
			return os;

		}
	}

	