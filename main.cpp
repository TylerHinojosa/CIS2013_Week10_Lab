#include <iostream>
#include <string>
#include "person.cpp"

using namespace std;

int main(){
	
	person bob;
	
	bob.setName("Bob");
	bob.setAge(42);
	bob.setRace("Obnoxious");
	bob.setAlive(true);
	bob.setGender("Male");
	
	cout << "Name: " << bob.getName() << endl;
	cout << "Age: " << bob.getAge() << endl;
	cout << "Alive? " << bob.getAlive() << endl;
	
	return 0;
};