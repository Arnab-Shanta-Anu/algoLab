#ifndef RANDOMINPUT_H
#define RANDOMINPUT_H
#include<vector>

using namespace std;
//template <typename T>
vector<int> generateRandomNumber(int n)
{
    srand(time(0));
    vector<int> random;
    for(int i=0;i<n;i++){
        random.push_back(rand()%10000);
    }
    return random;
}

#endif // RANDOMINPUT_H
