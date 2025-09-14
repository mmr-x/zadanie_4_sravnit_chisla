#include <iostream>

int main( )
{
    int one_chislo = 0;
    int two_chislo = 0;

    std::cout << "enter one number: ";
    std::cin >> one_chislo;

    std::cout << "enter two number: ";
    std::cin >> two_chislo;

    std::cout << std::endl;

    if ( one_chislo >= 100 || 
        two_chislo >= 100 )
    {
        std::cout << "Error! One of the numbers is out of connection!" << std::endl;

        return 1;
    }

    if ( one_chislo < two_chislo )
        std::cout << one_chislo << " less " << two_chislo << std::endl;
    else if ( one_chislo > two_chislo )
        std::cout << one_chislo << " more " << two_chislo << std::endl;
    else
        std::cout << one_chislo << " equals " << two_chislo << std::endl;

    return 0;
}