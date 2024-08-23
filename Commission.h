#ifndef COMMISSION_H
#define COMMISSION_H

#include "Payment.h"

class Commission : public Payment {
private:
    double commissionRate;
    double totalSales;

public:
    Commission(double cr);
    Commission(const Commission& c);

    void addSales(double sv);
    double pay() override;
    Payment* clone() const override;
};

#endif // COMMISSION_H
