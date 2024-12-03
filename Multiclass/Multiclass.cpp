#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <vector>
#include<fstream>
#include <algorithm>
#include<map>
using namespace std; 
class Student 
{ public:
	Student(string fio)
	{this -> fio = fio; }
	Student(string fio, int age)
	{
	this ->fio =fio; 
	
	if (age >= 14 && age <= 35) {
		this->age = age;
	}
	}
	void vivod() 
	{ cout << fio <<" "<<age<< endl; 
	}
private:
	
	int age;
protected:
	string fio;
	};
class Praktika : public Student
{ public:
	Praktika(string fio, string company, string kurator, int mark) : Student(fio)
	{
		
		this->company = company; this->kurator = kurator; 
		if (mark >=1 && mark<=5) { this->mark = mark; }
	
	}
	void show() { cout << fio << " " << company << " " << kurator << " " << mark << endl; }
	 
private:
	string company;
	string kurator;
	int mark;
};

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student ivan1("Антонцев Иван Константинович", 20);
	ivan1.vivod();
	Praktika ivan("Антонцев Иван Константинович", "Yandex", "Иванов Андрей", 5);
	
	ivan.show();
	 

}