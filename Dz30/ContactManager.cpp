#include "ContactManager.h"

void ContactManager::addContact(shared_ptr<Contact> contact) {
    contacts.push_back(contact);
}

void ContactManager::removeContact(size_t index) {
    if (index < contacts.size()) {
        contacts.erase(contacts.begin() + index);
    }
}

void ContactManager::editContact(size_t index, shared_ptr<Contact> newContact) {
    if (index < contacts.size()) {
        contacts[index] = newContact;
    }
}

shared_ptr<Contact> ContactManager::getContact(size_t index) const {
    if (index < contacts.size()) {
        return contacts[index];
    }
    return nullptr;
}

void ContactManager::showAllContacts() const {
    for (const auto& contact : contacts) {
        contact->show();
        cout << "-----------------" << endl;
    }
}

size_t ContactManager::getContactCount() const {
    return contacts.size();
}
