#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include "Contact.h"
#include <vector>
#include <memory>

using namespace std;

class ContactManager {
private:
    vector<shared_ptr<Contact>> contacts;

public:
    void addContact(shared_ptr<Contact> contact);
    void removeContact(size_t index);
    void editContact(size_t index, shared_ptr<Contact> newContact);
    shared_ptr<Contact> getContact(size_t index) const;
    void showAllContacts() const;
    size_t getContactCount() const;
};

#endif // CONTACTMANAGER_H
