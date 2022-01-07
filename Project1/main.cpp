#include "library.h"

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vect) {

	for (auto number : vect)
		os << number << " ";
	os << std::endl;
	return os;
}

int main() {
	
	author::Author  jkrowling("Joanne", "Rowling", date::Date(31, 7, 1965), 1), 
				jdicker("Joël", "Dicker", date::Date(16, 6, 1995), 2), 
				dadams("Douglas", "Adams", date::Date(2, 3, 2000), 3),
				jrrtolkien("John Ronald Reuel", "Tolkien", date::Date(03, 01, 1892), 4) ,
				acamus("Albert", "Camus", date::Date(7,8, 1913), 5);


	std::vector<author::Author> mesauteurs = { jkrowling, jdicker ,jrrtolkien,  acamus , dadams };

	book::Book hgtg("The Hitchhiker's Guide to the Galaxy", dadams, " anglais", "Science Fiction", date::Date(2, 3, 2021), 4466245), //possibilité de simplifier la décaration mais complique l'appel des livre dans les fonctions
		etranger("L'étranger", acamus, "Français", "Policier", date::Date(19, 5, 1942), 954655),
		hpecolesorcier("Harry Potter à l'école des sorciers", jkrowling, "français", "Roman", date::Date(26, 6, 1997), 56632386),
		hpchambre("Harry Potter et la Chambre des secrets", jkrowling, "français", "Roman", date::Date(23, 3, 1999), 42113786),
		hpprisonnier("Harry Potter et le Prisonnier d'Azkaban", jkrowling, "français", "oman", date::Date(19, 10, 1999), 4369874),
		hpcoupe("Harry Potter et la Coupe de feu", jkrowling, "français", "Roman", date::Date(29, 11, 2000), 42216786),
		hpphoenix("Harry Potter et l'Ordre du Phénix", jkrowling, "français", "Roman", date::Date(3, 12, 2003), 1151386),
		hpprince("Harry Potter et le Prince de sang-mêlé", jkrowling, "français", "Roman", date::Date(1, 10, 2005), 1836786),
		hprelique("Harry Potter et les Reliques de la Mort", jkrowling, "français", "Roman", date::Date(26, 10, 2007), 55635826),
		sa("Le Seigneur des anneaux", jrrtolkien, "anglais", "fantasy", date::Date(1, 1, 1954), 59854631),
		hobbit("Le Hobbit", jrrtolkien, "anglais", "fantasy", date::Date(1, 1, 1969), 59877731),
		dispasteph("La Disparition de Stephanie Mailer", jdicker, "français", "Policier", date::Date(1, 3, 2018), 666543), //ajout possible constructeur de date avec uniquement mois,annee et juste annee
		veritéhq("La Vérité sur l'affaire Harry Quebert",jdicker,"français","Policier",date::Date(19,9,2012),3329912);

	std::vector<book::Book> meslivres = { hgtg,hobbit,hpchambre,hpcoupe,hpphoenix,hpecolesorcier,hpprisonnier,hprelique,hpprince,sa,dispasteph,veritéhq,etranger };

	reader::Reader clem("Clement", "GHYS"), tom("Tom", "COSSON"), jeanmich("Jean", "MICHEL");
	std::vector<reader::Reader> meslecteurs = { clem,tom,jeanmich };



	std::cout << clem << std::endl;

	library::Library lib(meslivres, meslecteurs, mesauteurs,{});



	lib.allbookofanauthor(jkrowling);
	
	std::cout << sa.getstatusofbook() << std::endl;

	lib.borrowbook(sa, date::Date(5, 12, 2021), clem);
	std::cout << sa.getstatusofbook()<<std::endl;

	 lib.printlistborrow();

	lib.restorebook(sa, clem);
	std::cout << sa.getstatusofbook() << std::endl;
	 

	lib.printlistborrow();
	


	return 0;
}