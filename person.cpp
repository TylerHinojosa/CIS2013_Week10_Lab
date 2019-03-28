#include <string>

using namespace std;

class person {
	
	private:
	
		string name;
		string gender;
		int age;
		string race;
		bool is_alive;
	
	public:
	
		string getName(){ return name; }
		string getGender(){ return gender; }
		int getAge(){ return age; }
		string getRace(){ return race; }
		bool getAlive(){ return is_alive; }
	
		void setName(string n){
			name = n;
		}
		
		void setGender(string g){
			gender = g;
		}
		
		void setAge(int a){
			age = a;
		}
			
		void setRace(string r){
			race = r;
		}
		
		void setAlive(bool a){
			is_alive = a;
		}
};