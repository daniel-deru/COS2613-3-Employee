#include "Employee.h"

int Employee::nextID = 1001;

Employee::Employee(QString fn, QString sn) : firstName(fn), surname(sn), id(nextID++) {};

Employee::Employee(const Employee& e) {
    firstName = e.firstName;
    surname = e.surname;
    id = e.id;
    payment = e.payment;
}

Employee::~Employee() {
    delete payment;
}

int Employee::getID() const {
    return id;
}

QString Employee::getName() const {
    return firstName + " " + surname;
}

void Employee::setPayment(Payment* pay) {
    payment = pay;
}

Payment* Employee::getPayment() const {
    return payment;
}
