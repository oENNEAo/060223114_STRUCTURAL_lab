#include <iostream>
#include <iomanip>// เพิ่มไลบรารีสำหรับการจัดรูปแบบแสดงผล
int main()
{
    int number;
    // เพิ่มไลบรารีสำหรับการจัดรูปแบบแสดงผล
    std::cout <<"Enter a 4 digit integer number : ";
    std::cin  >> number;
    // แยกและแสดงผลตัวเลขนั้นโดยแยกออกมาที่ละหลักโดยมีช่องว่างคั่นที่ละ 3 ตัว
    std::cout <<"result : "<<std::setw(1)<<(number/1000)<<" "
                            <<std::setw(1)<<((number/100) % 10)<<" "
                            <<std::setw(1)<<((number/10) % 10)<<" "
                            <<std::setw(1)<<(number % 10)<<std::endl;
                            return(0);
}