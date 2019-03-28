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
	cout << "	Age: " << bob.getAge() << endl;
	cout << tom.getStats() << endl;
	cout << "	Age: " << tom.getAge() << endl;
	cout << p3.getStats() << endl;
	cout << "	Age: " << p3.getAge() << endl;
	
	bob.setName("Bob");
	bob.setAge(1000);
	cout << "	Age: " << bob.getAge() << endl;
	bob.setRace("Obnoxious");
	bob.setAlive(true);
	bob.setGender("Male");
	
	cout << bob.getStats() << endl;
	
	return 0;
};