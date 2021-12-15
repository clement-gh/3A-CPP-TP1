#pragma once
#include <iostream>
#include <vector>
namespace reader {
class Reader
{
private:

	std::string _firstname;// Prénom
	std::string _surname; //Nom
	std::string _id;
	std::vector<int> _borrowedbooks;


public:
	Reader(std::string firstname, std::string surname, std::string id);

	std::string getfirstname()const;
	std::string getsurname()const;
	std::string getid()const;
	void setid(std::string id);
	std::vector<int> getlistborrowedbook()const;
	void addlistborrowedbook(int isbnbook); //ajout livre dans la liste
	 
};
};

