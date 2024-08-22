#include "Hourly.h"

Hourly::Hourly(double hr) : Payment("hourly"), hourlyRate(hr) {}

void Hourly::addHours(double hrs) {
    hours += hrs;
}

double Hourly::pay() {
    return hourlyRate * hours;
}
