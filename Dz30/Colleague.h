#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "Contact.h"

class Colleague : public Contact {
private:
    string organizationName;
    string address;
    string phoneNumber;
    string fax;
    string contactPerson;

public:
    Colleague(const string& organizationName, const string& address, const string& phoneNumber,
        const string& fax, const string& contactPerson);

    void show() const override;

    void setOrganizationName(const string& organizationName);
    void setAddress(const string& address);
    void setPhoneNumber(const string& phoneNumber);
    void setFax(const string& fax);
    void setContactPerson(const string& contactPerson);

    string getOrganizationName() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getFax() const;
    string getContactPerson() const;
};

#endif // COLLEAGUE_H
