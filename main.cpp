#include <iostream>
#include <string>
#include "person.cpp"

using namespace std;

int main(){
	
	Person bob;
	Person tom("Tom", "M", "stupid");
	Person p3("Susan", "F", "pretty");
	person mypeople[10];
	
	cout << bob.getStats() << endl;
	cout << tom.getStats() << endl;
	cout << p3.getStats() << endl;
	
	bob.setName("Bob");
	bob.setAge(42);
	bob.setRace("Obnoxious");
	bob.setAlive(true);
	bob.setGender("Male");
	
	cout << bob.getStats() << endl;
	
	return 0;
};