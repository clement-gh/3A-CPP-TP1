#include <string>


#include "reader.h"

#ifndef BORROW_H
#define BORROW_H

namespace borrow {
	class Borrow {
		public :
			Borrow(book::Book& b,date::Date _borrowingdate , reader::Reader borrower);
			

			std::string getborrowingDate() const;
			int getbisbn() const;
			std::string getborrowerid() const;
			void setreaderid(std::string id);
			

		private :
			date::Date _borrowingdate;
			int _bookisbn;
			std::string _borrowerid;
	};
	std::ostream& operator<<(std::ostream& os, Borrow& B);
	
}

#endif