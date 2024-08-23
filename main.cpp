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

    EmployeeList employees = EmployeeList();

    Employee dave = Employee("dave", "brit");
    Salary davePayment = Salary(3000);
    dave.setPayment(&davePayment);
    employees.append(dave);

    Employee sara = Employee("sara", "can");
    Salary saraPayment = Salary(3500);
    sara.setPayment(&saraPayment);
    employees.append(sara);


    Employee john = Employee("john", "doe");
    Hourly johnPayment = Hourly(23);
    johnPayment.addHours(120);
    john.setPayment(&johnPayment);
    employees.append(john);

    Employee jane = Employee("jane", "doe");
    Hourly janePayment = Hourly(26);
    janePayment.addHours(160);
    jane.setPayment(&janePayment);
    employees.append(jane);

    Employee bob = Employee("bob", "smith");
    Commission bobCommission = Commission(0.04);
    bobCommission.addSales(100000);
    bob.setPayment(&bobCommission);
    employees.append(bob);

    Employee monica = Employee("gene", "may");
    Commission monicaCommission = Commission(0.03);
    monicaCommission.addSales(120000);
    monica.setPayment(&monicaCommission);
    employees.append(monica);

    showPaymentReport(employees);

    return a.exec();
}

void showPaymentReport(const EmployeeList& employeelist) {

    EmployeeList salariedEmployees = EmployeeList();
    EmployeeList commissionEmployees = EmployeeList();
    EmployeeList hourlyEmployees = EmployeeList();

    for(const Employee& emp: employeelist) {

        if(emp.getPayment()->getType() == "salary") salariedEmployees.append(emp);
        if(emp.getPayment()->getType() == "commission") commissionEmployees.append(emp);
        if(emp.getPayment()->getType() == "hourly") hourlyEmployees.append(emp);
    }

    std::cout << "\nSalaried Employees\n" << std::endl;
    for(const Employee& emp: salariedEmployees) {
        std::cout << "Name: " << emp.getName().toStdString() << "\t\t";
        std::cout << "Type: " << emp.getPayment()->getType().toStdString() << "\t\t";
        std::cout << "Amount: " << emp.getPayment()->pay() << std::endl;
    }

    std::cout << "\nCommission Employees\n" << std::endl;
    for(const Employee& emp: commissionEmployees) {
        std::cout << "Name: " << emp.getName().toStdString() << "\t\t";
        std::cout << "Type: " << emp.getPayment()->getType().toStdString() << "\t\t";
        std::cout << "Amount: " << emp.getPayment()->pay() << std::endl;
    }

    std::cout << "\nHourly Employees\n" << std::endl;
    for(const Employee& emp: hourlyEmployees) {
        std::cout << "Name: " << emp.getName().toStdString() << "\t\t";
        std::cout << "Type: " << emp.getPayment()->getType().toStdString() << "\t\t";
        std::cout << "Amount: " << emp.getPayment()->pay() << std::endl;
    }
}





