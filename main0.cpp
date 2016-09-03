#include <iostream>

const int setPiece[] = {1, 1, 2, 2, 2, 8};

int main()
{
    int element, result;

    for(int i = 0; i < 6; i++)
    {
       std::cin >> element;

       if(element < setPiece[i])
       {
            result = setPiece[i] - element;
            std::cout << result << " ";
       }
       else if(element > setPiece[i])
       {
            result = (element - setPiece[i]) * -1;
            std::cout << result << " ";
       }
       else
        std::cout << 0 << " ";
    }

    std::cout << "\n" << std::endl;

    return 0;
}
