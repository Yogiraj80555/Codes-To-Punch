#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
    Student(std::string fname, std::string lname, int id, std::vector<int> s){
        this->firstName = fname;
        this->lastName = lname;
        this->id = id;
        this->testScores = s;
    }
       


        
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int size = testScores.size(),marks = 0;
            for(int i=0; i<size; i++){
                marks += testScores[i];
            }
            float result = marks/size;
            if(result >= 90)
                return 'O';
            else if (result >= 80)
                return 'E';
            else if (result >= 70)
                return 'A';
            else if (result >= 55)
                return 'P';
            else if(result >= 40)
                return 'D';
            return 'T';
            




            
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}