#include<iostream>
using namespace std;
class Student
{
    public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    string name;
    Student(string par_name, int32_t par_id);
    void print() const;
    private:
    int bank_account;
};
Student::Student(string par_name, int32_t par_id) : name{par_name}
{
    id_number = par_id;
    bank_account = 1234567;
    
}
void Student::print() const{
    cout<<bank_account<<endl;
    cout<<name<<endl;
}
//cout<<bank_account<<endl;
auto main()->int {
    Student student1("name", 12432);
  student1.print();
  
}


