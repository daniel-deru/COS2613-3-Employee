#include "Salary.h"

Salary::Salary(double sal) : Payment("salary"), salary(sal) {}

Salary::Salary(const Salary& s) : Payment(s.getType()), salary(s.salary) {};

double Salary::pay() {
    return salary;
}

Payment* Salary::clone() const {
    return new Salary(*this);
}
