#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

using namespace std;

class Contact {
public:
    virtual void show() const = 0; // Pure virtual function
    virtual ~Contact() = default;  // Virtual destructor
};

#endif // CONTACT_H
