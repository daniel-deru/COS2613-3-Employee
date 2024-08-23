#include "Hourly.h"

Hourly::Hourly(double hr) : Payment("hourly"), hourlyRate(hr) {}

Hourly::Hourly(const Hourly& h) : Payment(h.getType()), hourlyRate(h.hourlyRate), hours(h.hours) {};

void Hourly::addHours(double hrs) {
    hours += hrs;
}

double Hourly::pay() {
    return hourlyRate * hours;
}

Payment* Hourly::clone() const {
    return new Hourly(*this);
}
