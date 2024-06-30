#include "Person.h"
#include "Colleague.h"
#include "Friend.h"
#include "ContactManager.h"
#include <iostream>
#include <memory>

using namespace std;

void showMenu() {
    cout << "1. Add Contact" << endl;
    cout << "2. Remove Contact" << endl;
    cout << "3. Edit Contact" << endl;
    cout << "4. Show All Contacts" << endl;
    cout << "5. Exit" << endl;
}

int main() {
    ContactManager manager;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore(); // Clear newline character from input buffer

        if (choice == 1) {
            int type;
            cout << "Select type of contact to add: 1. Person, 2. Colleague, 3. Friend" << endl;
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string surname, address, phoneNumber;
                cout << "Enter surname: ";
                getline(cin, surname);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);

                manager.addContact(make_shared<Person>(surname, address, phoneNumber));
            }
            else if (type == 2) {
                string orgName, address, phoneNumber, fax, contactPerson;
                cout << "Enter organization name: ";
                getline(cin, orgName);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter fax: ";
                getline(cin, fax);
                cout << "Enter contact person: ";
                getline(cin, contactPerson);

                manager.addContact(make_shared<Colleague>(orgName, address, phoneNumber, fax, contactPerson));
            }
            else if (type == 3) {
                string surname, address, phoneNumber, birthdate;
                cout << "Enter surname: ";
                getline(cin, surname);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter birth date: ";
                getline(cin, birthdate);

                manager.addContact(make_shared<Friend>(surname, address, phoneNumber, birthdate));
            }
        }
        else if (choice == 2) {
            size_t index;
            cout << "Enter index of contact to remove: ";
            cin >> index;
            manager.removeContact(index - 1);
        }
        else if (choice == 3) {
            size_t index;
            cout << "Enter index of contact to edit: ";
            cin >> index;
            cin.ignore();

            shared_ptr<Contact> contact = manager.getContact(index - 1);
            if (dynamic_pointer_cast<Person>(contact)) {
                string surname, address, phoneNumber;
                cout << "Enter new surname: ";
                getline(cin, surname);
                cout << "Enter new address: ";
                getline(cin, address);
                cout << "Enter new phone number: ";
                getline(cin, phoneNumber);

                manager.editContact(index - 1, make_shared<Person>(surname, address, phoneNumber));
            }
            else if (dynamic_pointer_cast<Colleague>(contact)) {
                string orgName, address, phoneNumber, fax, contactPerson;
                cout << "Enter new organization name: ";
                getline(cin, orgName);
                cout << "Enter new address: ";
                getline(cin, address);
                cout << "Enter new phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter new fax: ";
                getline(cin, fax);
                cout << "Enter new contact person: ";
                getline(cin, contactPerson);

                manager.editContact(index - 1, make_shared<Colleague>(orgName, address, phoneNumber, fax, contactPerson));
            }
            else if (dynamic_pointer_cast<Friend>(contact)) {
                string surname, address, phoneNumber, birthdate;
                cout << "Enter new surname: ";
                getline(cin, surname);
                cout << "Enter new address: ";
                getline(cin, address);
                cout << "Enter new phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter new birth date: ";
                getline(cin, birthdate);

                manager.editContact(index - 1, make_shared<Friend>(surname, address, phoneNumber, birthdate));
            }
        }
        else if (choice == 4) {
            manager.showAllContacts();
        }
    } while (choice != 5);

    return 0;
}
