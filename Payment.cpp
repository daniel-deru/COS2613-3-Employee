#include "Payment.h"

Payment::Payment(QString typ) : type(typ) {

}

Payment::~Payment() {}

QString Payment::getType() const {
    return type;
}

