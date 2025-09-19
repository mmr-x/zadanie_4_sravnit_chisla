#include <iostream>
#include <string>

std::string names_1[ 20 ] = {
    "",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen"
};

std::string names_2[ 10 ] = {
    "",
    "",
    "twenty",
    "thirty",
    "forty", 
    "fifty",
    "sixty",
    "seventy", 
    "eighty", 
    "ninety"
};

std::string function_int_to_name( int num ) 
{
    if ( num < -99 || num >= 100 )
        return "error";

    if ( num == 0 )
        return "zero";

    if ( num < 0 )
        return "minus " + function_int_to_name( -num );
    
    if ( num < 20 )
        return names_1[ num ];
    else
    {
        int num_1 = num / 10;
        int num_2 = num % 10;

        if ( num_2 == 0 )
            return names_2[ num_1 ];
        else
            return names_2[ num_1 ] + " " + names_1[ num_2 ];
    }
}

int main( ) 
{
    int one_chislo = 0;
    int two_chislo = 0;

    std::cout << "enter one number: ";
    std::cin >> one_chislo;

    std::cout << "enter two number: ";
    std::cin >> two_chislo;

    std::cout << std::endl;

    if ( one_chislo >= 100 || one_chislo < -99 || two_chislo >= 100 || two_chislo < -99 )
    {
        std::cout << "Error! One of the numbers is out of connection!" << std::endl;
        return 1;
    }

    std::string word_1 = function_int_to_name( one_chislo );
    std::string word_2 = function_int_to_name( two_chislo );

    if ( one_chislo < two_chislo )
        std::cout << word_1 << " is less than " << word_2 << std::endl;
    else if ( one_chislo > two_chislo )
        std::cout << word_1 << " is greater than " << word_2 << std::endl;
    else
        std::cout << word_1 << " equals " << word_2 << std::endl;

    return 0;
}