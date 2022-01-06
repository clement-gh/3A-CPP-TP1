#include "author.h"
#include "date.h"
#include <iostream>

namespace author {
	Author::Author(std::string firstname, std::string surname, date::Date birthday, int id) : _firstname(firstname), _surname(surname), _birthday(birthday), _id(id) {

	}

	int Author::getId() const {
		return _id;
	}
	
	std::string Author::getFirstname() const {
		return _firstname;
	}

	std::string Author::getSurname() const {
		return _surname;
	}

	std::string Author::getBirthday() const {
		return toString(_birthday);
	}

	std::string Author::getFullname() {
		std::string fullname = _firstname + ' ' + _surname;
		return fullname;
	}

	//surchage d'opérateur (affichage)
	std::ostream& operator<<(std::ostream& os, Author& a) {
		os << "Informations sur l'auteur : ";
		os << a.getId();
		os << ", ";
		os << a.getFullname();
		os << ", ";
		os << a.getBirthday();

		return os;

	}
}