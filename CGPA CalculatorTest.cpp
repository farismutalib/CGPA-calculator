#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	
	string name;
	
public:
	Student (); // Default constructor
	Student(string StudentName);
	void setName(string);
    string getName();
	virtual double calcGPA();
};

Student ::Student()
{
}
Student::Student( string  StudentName)
{
	name = StudentName;
	
	return;
}

void Student::setName(string name2)
{
		name = name2;
		return;
}

string Student::getName() 
{	

return name;
		
}

double Student::calcGPA()
{
	cout << "Student calcGPA" << endl;
	return (0);
}

class gpa : public Student
{
private:
	double creditHrs;
	double pointers;
public:
	gpa ( double = 0, double = 0);
	virtual double calcGPA ();
	void setCreditHrs(int);
	void setPointers(int);
};

gpa::gpa(double Hours, double Points)
{
	creditHrs = Hours;
	pointers = Points;
}

double gpa::calcGPA ()
{
	double GPA = 0.0;
	if (creditHrs > 0)
		GPA = pointers / creditHrs;
	cout << "Student GPA";
	return (GPA);
}

void gpa::setCreditHrs (int C)
{
	creditHrs = C;
	return;
}

void gpa::setPointers (int Q)
{
	pointers = Q;
	if (Q < 0)
		pointers = 0;
	return;
}


int main()
{
	char ans = 'n', Status;
	string StudentName;
	int CreditHrs, points;

	
	Student* a = NULL;


		{
			  gpa* ug;
			  ug = new gpa;
			  a = ug;
			  

			cout << "Enter Student name: ";
			getline(cin, StudentName);
			ug->setName (StudentName);


			cout << "Enter credit hours: ";
			cin >> CreditHrs;
			ug->setCreditHrs(CreditHrs);

			cout << "Enter pointers: ";
			cin >> points;
			ug->setPointers(points);
			cout << endl;
			
			
		}

		cout <<  "\nName: " << a->getName()<< "\nGPA: "<< a->calcGPA() << endl;




	return 0;
} 
