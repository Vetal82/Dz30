#include "Friend.h"

Friend::Friend(const string& surname, const string& address, const string& phoneNumber, const string& birthdate)
    : surname(surname), address(address), phoneNumber(phoneNumber), birthdate(birthdate) {}

void Friend::show() const {
    cout << "Friend Contact:" << endl;
    cout << "Surname: " << surname << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Birth Date: " << birthdate << endl;
}

void Friend::setSurname(const string& surname) {
    this->surname = surname;
}

void Friend::setAddress(const string& address) {
    this->address = address;
}

void Friend::setPhoneNumber(const string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Friend::setBirthdate(const string& birthdate) {
    this->birthdate = birthdate;
}

string Friend::getSurname() const {
    return surname;
}

string Friend::getAddress() const {
    return address;
}

string Friend::getPhoneNumber() const {
    return phoneNumber;
}

string Friend::getBirthdate() const {
    return birthdate;
}
