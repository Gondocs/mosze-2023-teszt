#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];           // not defined "NELEMENTS", previously we defined N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // missing ";" + also too many characters in character constant, i should use "" later instead to fix it.
        for (int i = 0;)                   // this loop condition is not valid, it's missing arguments
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // Missed writing out the correct numbers, missing <<std::endl (not necessary to run, but it will look better imo)
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                           // variable is not initialized
    for (int i = 0; i < N_ELEMENTS, i++) // the condition is seperated with a "," instead of a ";"
    {
        atlag += b[i] // again, missing ";"
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // deallocating the dynamically allocated memory?

    return 0;
}
