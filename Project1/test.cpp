#include "date.h"

int main(){
	date::Date d;

	std::cout  << d.day() <<"/" << d.month() << "/" << d.year() << std::endl;
	date::Date d2 (1,3,2021);
	std::cout << date::toString(d2) << std::endl;
	d2.updateYear(2022);
	std::cout << date::toString(d2) << std::endl;
	std::cout << d2.year();
	

	std::cout << date::toString(d2) << std::endl;






	return 0;

}