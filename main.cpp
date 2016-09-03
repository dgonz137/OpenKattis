#include <iostream>

int main()
{
    int n, currElement, prev, totalDiff;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        totalDiff = 0, currElement = 1, prev = 1;

        while(currElement != 0)
        {
            std::cin >> currElement;

            if(currElement > prev * 2)
            {
                totalDiff += currElement - (prev * 2);
            }

            prev = currElement;
        }

        std::cout << totalDiff << std::endl;
    }

    return 0;
}
