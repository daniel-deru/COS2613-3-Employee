#include "Commission.h"

Commission::Commission(double cr) : Payment("commission"), commissionRate(cr){}

void Commission::addSales(double sv) {
    totalSales += sv;
}

double Commission::pay() {
    return totalSales * commissionRate;
}
