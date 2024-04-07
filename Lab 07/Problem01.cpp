#include <iostream>

float operator"" _Kelvin(unsigned long long K) {
    return static_cast<float>(K - 273.15);
}

float operator"" _Fahrenheit(unsigned long long F) {
    return static_cast<float>((F - 32) / 1.8);
}

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    
    // Code line added by me to verify the entire code.
    std::cout << "300 Kelvin to Celsius Conversion: " << a << '\n' << "120 Fahrenheit to Celsius Conversion: " << b << '\n';

    return 0;
}