#include <iostream>
#include <cmath> // เพิ่มไลบรารีสำหรับการคำนวณยกกำลัง

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1; // ให้ฐานเริ่มต้นเป็น 2^0 = 1

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10; // หาค่าหลักหน่วยของเลขฐานสอง
        binaryNumber = binaryNumber / 10; // ลบค่าหลักหน่วยทิ้ง
        decimalNumber += lastDigit * base; // แปลงและบวกเข้ากับผลรวม
        base *= 2; // เพิ่มฐานเพื่อคำนวณหลักถัดไป
    }

    return decimalNumber;
}

int main() {
    int binaryNumber;

    // รับค่าเลขฐานสองจำนวน 4 หลัก
    std::cout << "Enter binary number (4 digits): ";
    std::cin >> binaryNumber;

    // แปลงเลขฐานสองเป็นฐานสิบ
    int decimalNumber = binaryToDecimal(binaryNumber);

    // แสดงผลลัพธ์
    std::cout << "Decimal value of " << binaryNumber << " = " << decimalNumber << std::endl;

    return 0;
}
