#ifndef SALARY_H
#define SALARY_H

#include "Payment.h"

class Salary : public Payment {
private:
    double salary;

public:
    Salary(double sal);
    Salary(const Salary& s);

    double pay() override;
    Payment* clone() const override;

};

#endif // SALARY_H
