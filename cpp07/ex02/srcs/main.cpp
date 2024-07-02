#include <cstdlib>
#include <iostream>
#include "../include/TemplateArray.tpp"

#define MAX_VAL 750

void	personal(void)
{
	Array<int> swag;
	Array<char> swag1(0);
	Array<int> swag2(5);

	for (int i = 0; i < 6; i++) {
		try {
		swag2[i] = (i << 2);
		std::cout << swag2[i] << " ";
		}
		catch(const std::exception& e) {
			std::cerr << e.what();
		}
	}
	swag = swag2;
	swag2[0] = 2;
	for (int i = 0; i < 6; i++) {
		try {
		std::cout << swag2[i] << " ";
		}
		catch(const std::exception& e) {
			std::cerr << e.what();
		}
	}
	for (int i = 0; i < 6; i++) {
		try {
		std::cout << swag[i] << " ";
		}
		catch(const std::exception& e) {
			std::cerr << e.what();
		}
	}
	std::cout << "\n";
}

int main(void)
{
	std::cout << "----------- PERSONAL TESTS -----------\n";
	personal();
	std::cout << "-----------  OTHER  TESTS  -----------\n";
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
