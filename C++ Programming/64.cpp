// C++ POLYMORPHISM

/*

	POLYMORPHISM

	POLYMORPHISM MEANS "MANY FORMS", AND IT OCCURS WHEN WE HAVE MANY CLASSES THAT ARE RELATED TO EACH OTHER BY INHERITANCE.

	LIKE WE SPECIFIED IN THE PREVIOUS CHAPTER; INHERITANCE LETS US INHERIT ATTRIBUTES AND METHODS FROM ANOTHER CLASS.
	POLYMORPHISM USES THOSE METHODS TO PERFORM DIFFERENT TASKS. THIS ALLOWS US TO PERFORM A SINGLE ACTION IN DIFFERENT WAYS.

	FOR EXAMPLE, THINK OF A BASE CLASS CALLED Animal THAT HAS A METHOD CALLED animalSound(). 
	DERIVED CLASSES OFF ANIMALS COULD BE PIGS, CATS, DOGS, BIRDS - AND THEY ALSO HAVE THEIR OWN IMPLEMENTATION OF AN ANIMAL SOUND (THE PIG OINKS, AND THE CAT MEOWS, ETC.).

	WHY AND WHEN TO USE "INHERITANCE" AND "POLYMORPHISM"?

	->IT IS USEFUL FOR CODDE REUSABILITY : REUSE ATTRIBUTES AND METHODS OF AN EXISTING CLASS WHEN YOU CREATE A NEW CLASS.

*/

#include <iostream>
using namespace std;

// Base class
class Animal
{
	public:
		void animalSound()
		{
			cout << "The animal makes a soung \n";
		}
};

// Derived class
class Pig : public Animal{
	public:
		void animalSound() {
			cout << "The pig says : wee wee \n";
		}
};

// Derived class
class Dog : public Animal
{
	public:
		void animalSound()
		{
			cout << "The dog says: bow wow \n";
		}
};

int main()
{
	Animal myAnimal;
	Pig myPig;
	Dog myDog;

	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();

	return 0;
}
