#include "borrow.h"

namespace borrow {
	Borrow::Borrow(date::Date borrowingdate, book::Book&b) : _borrowingdate(borrowingdate), _bookisbn(b.getIsbn())
	{
		
	}
	

	std::string Borrow::getborrowingDate() const {
		return toString(_borrowingdate);
	}

	int Borrow::getIsbn() const
	{
		return _bookisbn;
	}

	std::string Borrow::getborrowerid() const
	{
		return _borrowerid;
	}

	void Borrow::setreaderid(std::string id)
	{
		_borrowerid = id;
	}


}