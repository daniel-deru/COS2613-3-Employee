#include <QCoreApplication>
#include "EmployeeList.h"
#include "Employee.h"
#include "Salary.h"
#include "Hourly.h"
#include "Commission.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EmployeeList employees;

    Employee dave = Employee("dave", "brit");
    dave.setPayment(new Salary(3000));
    employees.append(dave);

    Employee sara = Employee("sara", "can");
    sara.setPayment(new Salary(3500));
    employees.append(sara);

    Employee john = Employee("john", "doe");
    john.setPayment(new Hourly(3.5));
    employees.append(john);

    Employee jane = Employee("jane", "doe");
    jane.setPayment(new Hourly(4));
    employees.append(jane);

    Employee bob = Employee("bob", "smith");
    bob.setPayment(new Commission(0.1));
    employees.append(bob);

    Employee monica = Employee("monica", "willis");
    monica.setPayment(new Commission(0.12));
    employees.append(monica);

    return a.exec();
}
