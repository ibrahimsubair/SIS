//1771103023

#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
	 void  setname(string );
	void setsurname(string );
	void  setid_no(int );
 	void  setstatus(string );	
	void setdepartment(string);
	void  setage(int ); 
	string getname( );
	string getsurname();
	int getid_no();
	string getstatus();
	string getdepartment();
	int getage();
	
	private:
	string name;
	string surname;
	int id_no;
	string status;
	string department;
	int	age;
			
};

void Student::setname(string x){
	name=x;	
}
void Student::setsurname(string y){
	surname=y;
}
void Student::setid_no(int z){
	id_no=z;
}
void Student::setstatus(string a){
	status=a; 
}
void Student::setdepartment(string b){
	department=b;
}
void Student::setage(int c){
	age=c;
}
string Student::getname(){
	return name;
}
string Student::getsurname(){
	return surname;
}
int Student::getid_no(){
	return id_no;
}
string Student::getstatus(){
	return status;
}
string Student::getdepartment(){
	return department;
}
int Student::getage(){
	return age;
}
int main(){
	 Student s;
	 string name;
	 cout<<"Enter students name :";
	 cin >>name;
	 s.setname(name);
	 
	 string surname;
	 cout<<"Enter students surname:";
	 cin >>surname;
	 s.setsurname(surname);
	 
	 int id_no;
	 cout<<"Enter student ID Number:";
	 cin>>id_no;
	 s.setid_no(id_no);
	 
	 string status;
	 cout<<"Are you a student or not "<<endl;
	 cout<<"YES/NO"<<endl;
	 cin>>status;
	 s.setstatus(status);
	 
	 string department;
	 cout<<"input present department:";
	 cin>>department;
	 s.setdepartment(department);
	
	int age;
	cout<<"input students present age:";
	cin>>age;
	s.setage(age);
		return 0;
	 
}





