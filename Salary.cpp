#include "Salary.h"

Salary::Salary(double sal) : Payment("salary"), salary(sal) {}

double Salary::pay() {
    return salary;
}
