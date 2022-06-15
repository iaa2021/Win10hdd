#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <thread>
using std::thread;
using namespace std::this_thread;
#include <chrono>
using namespace std::chrono_literals;
#include <map>
using std::map;
#include <string>
using std::string;
void refreshForecast(map<string, int> fCastMap)
{
    while (true)
    {
        for (auto &pair : fCastMap)
        {
            pair.second++;
            cout << pair.first << " - " << pair.second << endl;
        }
        std::this_thread::sleep_for(2000ms);
    }
}
int main()
{
    map<string, int> fCastMap = {
        {"New York", 22},
        {"Mumbai", 29},
        {"Berlin", 18}
    };
    thread bhWorkers(refreshForecast, fCastMap);
    cin.get();
    return 0;
}

