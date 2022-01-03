#include <string>
#include "date.h"
#include "author.h"
#include "reader.h"

#ifndef LOAN_H
#define LOAN_H

namespace borrow {
	class Borrow {
		public :
			Borrow(date::Date _borrowingdate, book::Book &b, reader::Reader &r);
			

			std::string getborrowingDate() const;
			int getIsbn() const;
			std::string getreaderid() const;

		private :
			date::Date _borrowingdate;
			int _bookisbn;
			std::string _readerid;
	};

}

#endif