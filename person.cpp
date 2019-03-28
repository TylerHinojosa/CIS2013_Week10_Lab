#include <string>

using namespace std;

class person {
	
	private:
		string gender;
		int age;
		string race;
		bool is_alive;
	
	public:
	
		Person(){
			name = "unknown";
			gender = "M";
			race = "ugly";
		}
		
		person(string n, string g, string r){
			name = n;
			gender = g;
			race = r;
		}
	
		string getStats(){
			return "Name: " + name + "\n" + "Gender:" + gender + "\n" + "Race: " + race;
		}
	
		string getName(){ return name; }
		string getGender(){ return gender; }
		int getAge(){ return age; }
		string getRace(){ return race; }
		bool getAlive(){ return is_alive; }
	
		void setName(string n){name = n; }
		void setGender(string g){gender = g; }		
		void setAge(int a){age = a; }
		void setRace(string r){race = r; }
		void setAlive(bool a){is_alive = a; }
};