#include <string>
#include "date.h"

#ifndef AUTHOR_H
#define AUTHOR_H

namespace author {
	class Author
	{
		public :
			//constructeur
			Author( std::string firstname, std::string surname, date::Date birthday ,int id);

			//getters
			int getId() const;
			std::string getFirstname() const;
			std::string getSurname() const;
			std::string getBirthday() const;

			std::string getFullname();

		private :
			int _id;
			std::string _firstname;
			std::string _surname;
			date::Date _birthday;
	};

	std::ostream& operator<<(std::ostream& os, Author& a);
}

#endif