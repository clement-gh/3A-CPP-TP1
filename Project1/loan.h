#include <string>
#include "date.h"
//#include "book.h"
#include "author.h"
#include "reader.h"

#ifndef LOAN_H
#define LOAN_H

namespace loan {
	class Loan {
		public :
			//constructeur
			Loan(date::Date borrowingDate, book::Book isbn, reader::Reader id);

			//getters
			std::string getborrowingDate() const;
			int getIsbn() const;
			std::string getId() const;

		private :
			date::Date _borrowingDate;
			book::Book _isbn;
			reader::Reader _id;
	};

}

#endif