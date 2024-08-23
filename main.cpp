#include <QCoreApplication>
#include <iostream>
#include "EmployeeList.h"
#include "Employee.h"
#include "Salary.h"
#include "Hourly.h"
#include "Commission.h"

void showPaymentReport(const EmployeeList& employeelist);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EmployeeList employees;

    Employee dave = Employee("dave", "brit");
    Salary davePayment = Salary(3000);
    dave.setPayment(&davePayment);
    employees.append(dave);

    Employee sara = Employee("sara", "can");
    //Salary saraPayment = Salary(3500);
    //sara.setPayment(&saraPayment);
    //employees.append(sara);


    Employee john = Employee("john", "doe");
    // Hourly* johnPayment = new Hourly(3.5);
    // johnPayment->addHours(30);
    // john.setPayment(johnPayment);
    // employees.append(john);

    Employee jane = Employee("jane", "doe");
    // Hourly* janePayment = new Hourly(4);
    // janePayment->addHours(25);
    // jane.setPayment(janePayment);
    // employees.append(jane);

    Employee bob = Employee("bob", "smith");
    // Commission* bobCommission = new Commission(0.1);
    // bobCommission->addSales(10000);
    // bob.setPayment(bobCommission);
    // employees.append(bob);

    Employee monica = Employee("monica", "willis");
    // Commission* monicaCommission = new Commission(0.12);
    // monicaCommission->addSales(12000);
    // monica.setPayment(monicaCommission);
    // employees.append(monica);

    // showPaymentReport(employees);

    return a.exec();
}

void showPaymentReport(const EmployeeList& employeelist) {
    for(Employee emp: employeelist) {
        std::cout << "Name: " << emp.getName().toStdString() << "\t";
        std::cout << "Type: " << emp.getPayment()->getType().toStdString() << "\t";
        std::cout << "Amount: " << emp.getPayment()->pay() << std::endl;
    }
}





