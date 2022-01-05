#include "library.h"

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vect) {

	for (auto number : vect)
		os << number << " ";
	os << std::endl;
	return os;
}

int main() {
	
	author::Author jkrowling("Joanne", "Rowling", date::Date(31, 7, 1965), 1), jdicker("Joël", "Dicker", date::Date(16, 6, 1995), 2), dadams("Douglas", "Adams", date::Date(2, 3, 2000), 3),
		jrrtolkien("John Ronald Reuel", "Tolkien", date::Date(03, 01, 1892), 4) , acamus("Albert", "Camus", date::Date(7,8, 1913), 5);


	std::vector<author::Author> mesauteurs = { jkrowling, jdicker ,jrrtolkien,  acamus , dadams };

	book::Book hgtg("The Hitchhiker's Guide to the Galaxy", dadams, " Anglais", "Science Fiction", date::Date(2, 3, 2021), 4466245),
		etranger("L'étranger", acamus, "Français", "Policier", date::Date(19, 5, 1942),954655);






	return 0;
}