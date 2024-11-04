#include <iostream>

struct AdRevenue
{
    int adsWatched {};
    double adsClickedPercent {};
    double averageEarnings {};
};

AdRevenue getAdvertising()
{
    AdRevenue temp {};
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adsWatched;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.adsClickedPercent;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.averageEarnings;
    
    return temp;
}


void printAdData(const AdRevenue& adData)
{
    std::cout << "Ads watched: " << adData.adsWatched;
    std::cout << " Percent of ads clicked: " << adData.adsClickedPercent;
    std::cout << " Average earnings per click: " << adData.averageEarnings;
    std::cout << " Today's revenue: " << adData.adsWatched * (adData.adsClickedPercent / 100) * adData.averageEarnings << '\n';
}

int main()
{
    AdRevenue ad{ getAdvertising() };
    printAdData(ad);

    return 0;
}
