#include <iostream>
int main() {
    float fahrenheit, celsius;
 // รับค่าอุณหภูมิจากคีย์บอร์ด (ในหน่วยฟาเรนไฮต์)
    std::cout << "Enter the temperature : ";
    std::cin >> fahrenheit;
 // รับค่าอุณหภูมิจากคีย์บอร์ด (ในหน่วยฟาเรนไฮต์)
    celsius = (fahrenheit - 32) * 5 / 9;
 // แสดงผลลัพธ์
    std::cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << std::endl;

    return 0;
}
