#include <iostream>
#include <string>
using namespace std;

class Person{

private:
    char gender;

public:
    string name;
    int age;

    Person() {}

    Person(string name, int age, char gender){
        this->name = name;
        this->age = age;
        this->setGender(gender);
    }

    string print(){
        return "Name: " + this->name +
               "\nAge: " + to_string(this->age) +
               "\nGender: " + getGender() + '\n';
    }

    string getGender(){
        if (this->gender == 'M')
            return "Male";
        else if (this->gender == 'F')
            return "Female";

        return "Undefined";
    }

    void setGender(char gender){
        gender = toupper(gender);

        if (gender != 'M' && gender != 'F')
            gender = 'N';

        this->gender = gender;
    }
};

int main(){

    Person p;
    char gender;

    cout << "Enter your name: ";
    getline(cin, p.name);

    cout << "Enter your age: ";
    cin >> p.age;

    cout << "enter your gender: ";
    cin >> gender;

    p.setGender(gender);

    cout << "\nYour name is " << p.name << " and you're " << p.age << " years old\n"
         << endl;
    cout << p.print();

    return 0;
}