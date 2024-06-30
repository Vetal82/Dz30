#include "Person.h"

Person::Person(const string& surname, const string& address, const string& phoneNumber)
    : surname(surname), address(address), phoneNumber(phoneNumber) {}

void Person::show() const {
    cout << "Person Contact:" << endl;
    cout << "Surname: " << surname << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
}

void Person::setSurname(const string& surname) {
    this->surname = surname;
}

void Person::setAddress(const string& address) {
    this->address = address;
}

void Person::setPhoneNumber(const string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

string Person::getSurname() const {
    return surname;
}

string Person::getAddress() const {
    return address;
}

string Person::getPhoneNumber() const {
    return phoneNumber;
}
