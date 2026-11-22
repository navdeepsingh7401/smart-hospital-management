#pragma once
#include <string>
#include <chrono>

class patient {
private:
    int roomID, patientId, bedId;
    int checkInDate, checkInMonth, checkInYear;
    int checkOutDate, checkOutMonth, checkOutYear;
    int stay = 0; // Store as plain int
    double fee;
    long int phoneNo;
    std::string patientName;

public:
    void patientInfo();
    void patientInfoPrint();
    void checkOutDay();
};
