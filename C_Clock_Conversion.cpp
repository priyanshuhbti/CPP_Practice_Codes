#include <iostream>
#include <sstream>
#include <iomanip>

std::string convertTo12HourFormat(std::string time_24h) {
    int hours, minutes;
    char colon;
    std::istringstream timeStream(time_24h);
    timeStream >> hours >> colon >> minutes;

    std::string period = (hours < 12) ? "AM" : "PM";
    hours = hours % 12;
    if (hours == 0)
        hours = 12;

    std::ostringstream resultStream;
    resultStream << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2) << std::setfill('0') << minutes << " " << period;
    return resultStream.str();
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string time_24h;
        std::cin >> time_24h;
        std::cout << convertTo12HourFormat(time_24h) << std::endl;
    }
    return 0;
}
