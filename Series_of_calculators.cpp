#include <iostream>
#include <cmath>

int main(){
    int count, num1, num2, total;
    char continuar;

    std::cout << "Do you want to add two numbers? Y/N: ";
    std::cin >> continuar;

    while (continuar == 'y' || continuar == 'Y'){
            count == 0;

            std::cout << "what's the first number?: " << std::endl;
            std::cin >> num1;

            std::cout << "what's the second number?: " << std::endl;
            std::cin >> num2;

            total = num1+num2;

            std::cout << num1 << "+" << num2 << "=" << total;
            std::cout << ". Continue?: Y/N: " << std::endl;
            std::cin >> continuar;

            count += 1;
        }
        std::cout << "You summed " << count << " times. Bye.";

    return 0;
}

