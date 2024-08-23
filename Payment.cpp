#include "Payment.h"

Payment::Payment(QString typ) : type(typ) {

}

Payment::Payment(Payment& p) {
    type = p.getType();
}

Payment::~Payment() {}

QString Payment::getType() const {
    return type;
}

