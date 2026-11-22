#include "../Include/PatientFeature.h++"
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void patient::patientInfo()
{
    cout << "Enter Patient ID: ";
    cin >> patientId;
    cin.ignore(); // Clear newline from buffer

    cout << "Enter Patient Name: ";
    getline(cin, patientName);

    cout << "Enter Phone Number: ";
    cin >> phoneNo;

    cout << "Enter Room ID: ";
    cin >> roomID;

    cout << "Enter Bed ID: ";
    cin >> bedId;

    cout << "Enter Check-in Date (DD MM YYYY): ";
    cin >> checkInDate >> checkInMonth >> checkInYear;

    cout << "Enter Check-out Date (DD MM YYYY): ";
    cin >> checkOutDate >> checkOutMonth >> checkOutYear;
}



void patient::patientInfoPrint() {
    cout << "\n========== Patient Information ==========" << endl;
    cout << "Patient ID      : " << patientId << endl;
    cout << "Patient Name    : " << patientName << endl;
    cout << "Phone Number    : " << phoneNo << endl;
    cout << "Room ID         : " << roomID << endl;
    cout << "Bed ID          : " << bedId << endl;
    cout << "Check-in Date   : " << checkInDate << "/"
         << checkInMonth << "/" << checkInYear << endl;
    cout << "Check-out Date  : " << checkOutDate << "/"
         << checkOutMonth << "/" << checkOutYear << endl;
    cout << "Days in Hospital: " << stay << " days" << endl; // Removed .count()
    cout << "=========================================\n";
}

void patient::checkOutDay() {
    using namespace std::chrono;
    sys_days checkIn = year(checkInYear) / month(checkInMonth) / day(checkInDate);
    sys_days checkOut = year(checkOutYear) / month(checkOutMonth) / day(checkOutDate);
    
    // Assign to class member 'stay' and subtract checkIn from checkOut
    stay = (checkOut - checkIn).count(); 
}
