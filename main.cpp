#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Dog.h"
#include "Goose.h"

int main() {
	Dog Tusik;
	Tusik.name = "Tusik";
	Dog Grelka;
	Grelka.name = "Grelka";
	Dog Bashmak = Grelka + Tusik;

	Bashmak.voice();
	std::cout <<"Mom: " << Bashmak.mom << ", " << "Dad: " << Bashmak.dad << std::endl;

	Goose Albert;
	Albert.name = "Albert";
	Albert.voice();
}