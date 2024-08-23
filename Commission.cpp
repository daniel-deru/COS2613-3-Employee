#include "Commission.h"

Commission::Commission(double cr) : Payment("commission"), commissionRate(cr){}

Commission::Commission(const Commission& c) : Payment(c.getType()), commissionRate(c.commissionRate), totalSales(c.totalSales) {}

void Commission::addSales(double sv) {
    totalSales += sv;
}

double Commission::pay() {
    return totalSales * commissionRate;
}

Payment* Commission::clone() const {
    return new Commission(*this);
}
