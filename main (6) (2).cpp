/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter the number of lines: ";
    int num_lines;
    if (!(std::cin >> num_lines) || num_lines < 1 || 15 < num_lines) {
        std::cerr << "Input error. Bye :(\n\n";
        return EXIT_FAILURE;
    }

    for (int current_line{ 1 }; current_line <= num_lines; ++current_line) {
        for(int spaces = 0; spaces < num_lines - current_line; ++spaces)
            std::cout << "   ";

        for(int number = current_line; number; --number)
            std::cout << std::setw(2) << std::right << number << ' ';

        for (int number = 2; number <= current_line; ++number)
            std::cout << std::setw(2) << std::right << number << ' ';

        std::cout.put('\n');
    }
}
