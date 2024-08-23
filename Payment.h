#ifndef PAYMENT_H
#define PAYMENT_H

#include <QString>

class Payment {
protected:
    QString type;

public:
    Payment(QString typ);
    Payment(Payment& p);
    virtual ~Payment() = 0;

    QString getType() const;
    virtual double pay() = 0;
    virtual Payment* clone() const = 0;
};

#endif // PAYMENT_H
