#include <bits/stdc++.h>
#include <iomanip>
#include <chrono>
#include <vector>
#include "randomInput.h"
#include "printVec.h"

using namespace std;
template<typename T, typename A>
vector<T> bubbleSort(vector<T,A>);
template<typename T, typename A>
vector<T> insertionSort(vector<T,A>);
template<typename T, typename A>
vector<T> selectionSort(vector<T,A>);

int dataSize[8] = {10,50,100,500,1000,2000,5000,10000};

int main()
{
    freopen("out.txt","w",stdout);

    for(int x=0;x<8;x++){
    cout<<"Data Size: "<<dataSize[x]<<endl;

    //cout<<fixed<<setprecision(6);

    vector<int> avg,best,worst,sorted;
    avg    = generateRandomNumber<int>(dataSize[x]);
    best   = generateAscendingVector<int>(dataSize[x]);
    worst = generateDecendingVector<int>(dataSize[x]);


    /**bubblesort**/

//best case
    sorted.clear();
    clock_t start = clock();
    sorted = bubbleSort<int>(best);
    clock_t en = clock();
    double duration =  double(en-start)/CLOCKS_PER_SEC;
    cout<<"Bubble Sort duration(best)    : "<<duration<<endl;

//average case

    sorted.clear();
    start = clock();
    sorted = bubbleSort<int>(avg);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Bubble Sort duration(avg)     : "<<duration<<endl;

//worst case

    sorted.clear();
    start = clock();
    sorted = bubbleSort<int>(worst);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Bubble Sort duration(worst)   : "<<duration<<endl;
    cout<<endl;

    /**insertionsort**/

//best case

    sorted.clear();
    start = clock();
    sorted = insertionSort<int>(best);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Insertion Sort duration(best) : "<<duration<<endl;

//average case

    sorted.clear();
    start = clock();
    sorted = insertionSort<int>(avg);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Insertion Sort duration(avg)  : "<<duration<<endl;

//worst case

    sorted.clear();
    start = clock();
    sorted = insertionSort<int>(worst);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Insertion Sort duration(worst): "<<duration<<endl;
    cout<<endl;

    /**selectionsort**/

//best case
    sorted.clear();
    start = clock();
    sorted = selectionSort<int>(best);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Selection Sort duration(best) : "<<duration<<endl;

//average case

    sorted.clear();
    start = clock();
    sorted = selectionSort<int>(avg);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Selection Sort duration(avg)  : "<<duration<<endl;

//worst case

    sorted.clear();
    start = clock();
    sorted = selectionSort<int>(worst);
    en = clock();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"Selection Sort duration(worst): "<<duration<<endl;
    cout<<endl;

    }
    return 0;
}

template<typename T, typename A>
vector<T> bubbleSort(vector<T,A> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}

template<typename T, typename A>
vector<T> insertionSort(vector<T,A> arr)
{
    int tmp,j,n=arr.size();
    for(int i=0;i<n;i++){
        j=i-1;
        tmp=arr[i];
        while(j>=0 && arr[j]>tmp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
    return arr;
}

template<typename T, typename A>
vector<T> selectionSort(vector<T,A> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        int highIndex = 0;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[highIndex])
                highIndex = j;
        }
        swap(arr[highIndex],arr[n-i-1]);
    }
    return arr;
}
