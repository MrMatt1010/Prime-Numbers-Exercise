// Prime-Numbers.cpp :

#include <iostream>
#include <vector>

//Prime number variables and calculations are here
bool is_prime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
    int main() {
        int start, end;
        std::vector<int> divisible_by_7;
        std::vector<int> prime_numbers;
        //This is where the user inputs the required start and end numbers and the code checks to see if the start is lower than the end number
       //Also the output of the prime numbers, how many there are is done here
        std::cout << "Enter the starting Number: ";
        std::cin >> start;

        std::cout << "Enter the ending Number: " << std::endl;
        std::cin >> end;

        if (start > end) {
            std::cout << "Starting number should be less than the ending number." << std::endl;
        }
        else {
            std::cout << "Numbers divisible by 7 from(" << start << " to " << end << "): " << std::endl;
            std::cout << "*****************************" << std::endl << std::endl;
            for (int num = start; num <= end; num++) {
                if (num % 7 == 0) {
                    divisible_by_7.push_back(num);
                }
            }

            for (int num = start; num <= end; num++) {
                if (is_prime(num)) {
                    prime_numbers.push_back(num);
                }
            }

            std::cout << "\n\nDivisible by 7: " << std::endl;
            for (int num : prime_numbers) {
                std::cout << num << " ";
            }

            std::cout << "\n\nPrime Numbers: " << std::endl;
            for (int num : prime_numbers) {
                std::cout << num << " ";
            }
            std::cout << "\n\nTotal prime numbers in the range: " << prime_numbers.size() << std::endl;
        }

        return(0);
    }
