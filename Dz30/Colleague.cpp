#include "Colleague.h"

Colleague::Colleague(const string& organizationName, const string& address, const string& phoneNumber,
    const string& fax, const string& contactPerson)
    : organizationName(organizationName), address(address), phoneNumber(phoneNumber), fax(fax), contactPerson(contactPerson) {}

void Colleague::show() const {
    cout << "Colleague Contact:" << endl;
    cout << "Organization Name: " << organizationName << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Fax: " << fax << endl;
    cout << "Contact Person: " << contactPerson << endl;
}

void Colleague::setOrganizationName(const string& organizationName) {
    this->organizationName = organizationName;
}

void Colleague::setAddress(const string& address) {
    this->address = address;
}

void Colleague::setPhoneNumber(const string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Colleague::setFax(const string& fax) {
    this->fax = fax;
}

void Colleague::setContactPerson(const string& contactPerson) {
    this->contactPerson = contactPerson;
}

string Colleague::getOrganizationName() const {
    return organizationName;
}

string Colleague::getAddress() const {
    return address;
}

string Colleague::getPhoneNumber() const {
    return phoneNumber;
}

string Colleague::getFax() const {
    return fax;
}

string Colleague::getContactPerson() const {
    return contactPerson;
}
