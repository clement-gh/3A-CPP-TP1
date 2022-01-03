#include "loan.h"

namespace loan {
	Loan::Loan(date::Date borrowingDate, book::Book isbn, reader::Reader id) : _borrowingDate(borrowingDate), _isbn(getIsbn().isbn), _id(id) {

	}

	std::string Loan::getborrowingDate() const {
		return toString(_borrowingDate);
	}

	int Loan::getIsbn() const {
		return _isbn.getIsbn();
	}

	std::string Loan::getId() const {
		return _id.getid();
	}
}