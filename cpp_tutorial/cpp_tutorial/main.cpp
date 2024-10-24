#include <iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double x{};
    std::cin >> x;
    return x;
}

double calculateBallHeight(double towerHeight, int seconds)
{
    double gravity = 9.8;
    double distanceFallen = gravity*(seconds*seconds)/2;
    return towerHeight - distanceFallen;
}

void printBallHeight(double ballHeight, int seconds)
{
    if (ballHeight > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << '\n';
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground." << '\n';
}

void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
    double ballHeight = calculateBallHeight(towerHeight, seconds);
    printBallHeight(ballHeight, seconds);
}

int main()
{
    double towerHeight { getHeight() };
    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);

    
    return 0;
}
