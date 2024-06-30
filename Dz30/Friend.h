#ifndef FRIEND_H
#define FRIEND_H

#include "Contact.h"

using namespace std;

class Friend : public Contact {
private:
    string surname;
    string address;
    string phoneNumber;
    string birthdate;

public:
    Friend(const string& surname, const string& address, const string& phoneNumber, const string& birthdate);

    void show() const override;

    void setSurname(const string& surname);
    void setAddress(const string& address);
    void setPhoneNumber(const string& phoneNumber);
    void setBirthdate(const string& birthdate);

    string getSurname() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getBirthdate() const;
};

#endif // FRIEND_H
