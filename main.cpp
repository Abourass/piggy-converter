#include <iostream>

int main() {
    double pesos, reais, soles, pesoDollars, reaisDollars, solesDollars, totalDollars;
    std::cout << "Enter number of Columbian Pesos:";
    std::cin >> pesos;
    pesoDollars = pesos * 0.052;
    std::cout << "You have $" << pesoDollars << " in Pesos. \n";
    std::cout << "Enter number of Brazilian Reais:";
    std::cin >> reais;
    reaisDollars = reais * 0.24;
    std::cout << "You have $" << reaisDollars << " in Reais. \n";
    std::cout << "Enter number of Peruvian Soles:";
    std::cin >> soles;
    solesDollars = soles * 0.30;
    std::cout << "You have $" << solesDollars << " in Nuevos Soles. \n";
    totalDollars = pesoDollars + reaisDollars + solesDollars;
    std::cout << "In total you have $" << totalDollars  << std::endl;
    return 0;
}