
#include <iostream>
#include <iomanip>
int main()
{

bool flag;
std::cout << "unesi " << true << " - " << false << std::endl;
std::cin >> flag;
std::cout << std::noboolalpha << flag << std::endl;
int a = 255;
std::cout << "hex " << std::nouppercase << std::hex << a << std::endl;
std::cout << "dec " << std::dec << a << std::endl;
std::cout << "oct " << std::oct << a << std::endl;
double pi = 3.141592;
std::cout << "pi = " << std::fixed << std::right << std::ws <<std::uppercase;
std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0');
std::cout << pi << std::endl;

//std::cout << std::nouppercase << std::hex << 15 <<std::endl;
}
