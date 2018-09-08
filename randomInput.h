#ifndef RANDOMINPUT_H
#define RANDOMINPUT_H
#include<vector>

using namespace std;
template <typename T>
vector<T> generateRandomNumber(int n)
{
    srand(time(0));
    vector<T> random;
    for(int i=0;i<n;i++){
        random.push_back(rand()%10000);
    }
    //random_shuffle(random.begin(),random.end());
    return random;
}
template <typename T>
vector<T> generateAscendingVector(int n)
{
    vector<T> random;
    for(int i=1;i<=n;i++){
        random.push_back(i);
    }
    return random;
}
template <typename T>
vector<T> generateDecendingVector(int n)
{
    vector<T> random;
    for(int i=n;i>=1;i--){
        random.push_back(i);
    }
    return random;
}

#endif // RANDOMINPUT_H
