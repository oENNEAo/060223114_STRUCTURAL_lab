#include <iostream>

int main() {
    int startKm, endKm;
    int hours, minutes, seconds;

    // รับค่ากิโลเมตรเริ่มต้นและสิ้นสุด
    std::cout << "Enter start kilometer: ";
    std::cin >> startKm;
    std::cout << "Enter end kilometer: ";
    std::cin >> endKm;

    // รับค่าเวลาที่ใช้ในการเดินทาง (ในรูปของชั่วโมง นาที วินาที)
    std::cout << "Enter time used (hour minute second): ";
    std::cin >> hours >> minutes >> seconds;

    // แปลงเวลาที่ใช้ในการเดินทางเป็นชั่วโมง
    double totalHours = hours + minutes / 60.0 + seconds / 3600.0;

    // คำนวณหาระยะทางที่เดินทางได้
    int distance = endKm - startKm;

    // คำนวณความเร็วเฉลี่ย
    double averageVelocity = distance / totalHours;

    // แสดงผลลัพธ์
    std::cout << "Car traveled " << distance << " kilometers in "
              << hours << " hrs " << minutes << " min " << seconds << " sec." << std::endl;
    std::cout << "Average velocity was " << averageVelocity << " kph." << std::endl;

    return 0;
}
