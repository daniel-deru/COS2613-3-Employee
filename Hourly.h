#ifndef HOURLY_H
#define HOURLY_H

#include "Payment.h"

class Hourly : public Payment {
private:
    double hourlyRate;
    double hours;

public:
    Hourly(double hr);
    Hourly(const Hourly& h);

    void addHours(double hrs);
    double pay() override;
    Payment* clone() const override;
};

#endif // HOURLY_H
