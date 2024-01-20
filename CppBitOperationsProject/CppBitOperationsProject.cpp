#include <iostream>

int main()
{
    /*
    unsigned char a, b;
    a = 154;
    b = 201;

    a = 0b10011010;
    b = 0b11001001;

    std::cout << "a = " << (int)a << "\n";
    std::cout << "b = " << (int)b << "\n";

    std::cout << "a & b = " << (a & b) << "\n";
    std::cout << "a | b = " << (a | b) << "\n";
    std::cout << "a ^ b = " << (a ^ b) << "\n\n";

    int c{ 150 };
    std::cout << "c = " << c << "\n";
    std::cout << "c << 1 " << (c << 1) << "\n";
    std::cout << "c << 2 " << (c << 2) << "\n";
    std::cout << "c << 3 " << (c << 3) << "\n";
    std::cout << "c << 4 " << (c << 4) << "\n\n";

    std::cout << "c >> 1 " << (c >> 1) << "\n";
    std::cout << "c >> 2 " << (c >> 2) << "\n";
    std::cout << "c >> 3 " << (c >> 3) << "\n";
    std::cout << "c >> 4 " << (c >> 4) << "\n\n";

    c = 5;
    std::cout << (~c + 1) << "\n";
    */

    char weapon{};
    std::cout << (int)weapon << "\n";

    //weapon = weapon | (1 << 4);
    weapon |= (1 << 4);
    std::cout << (int)weapon << "\n";

    weapon = weapon & ~(1 << 4);
    std::cout << (int)weapon << "\n";

}
