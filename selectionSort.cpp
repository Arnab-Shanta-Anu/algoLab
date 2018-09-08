#include <bits/stdc++.h>
#include <vector>
#include "randomInput.h"
#include "printVec.h"

using namespace std;
//template<typename T, typename A>
vector<int> bubbleSort(vector<int>);
//template<typename T, typename A>
vector<int> insertionSort(vector<int>);
//template<typename T, typename A>
vector<int> selectionSort(vector<int>);

int main()
{
    vector<int> inputs,sorted;
    inputs = generateRandomNumber(10);

    print(inputs);


    //bubblesort

    sorted.clear();
    time_t start = clock();
    sorted = bubbleSort(inputs);
    time_t en = clock();

    print(sorted);
    sorted.clear();
    //print(sorted);
    double duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"duration: "<<duration<<endl;


    //insertionsort


    start = clock();
    sorted = insertionSort(inputs);
    en = clock();

    print(sorted);
    sorted.clear();

    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"duration: "<<duration<<endl;


    //selectionsort


    start = clock();
    sorted = selectionSort(inputs);
    en = clock();

    print(sorted);
    sorted.clear();
    duration = double(en-start)/CLOCKS_PER_SEC;
    cout<<"duration: "<<duration<<endl;

    return 0;
}

//template<typename T, typename A>
vector<int> bubbleSort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    return arr;
}

//template<typename T, typename A>
vector<int> insertionSort(vector<int> arr)
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

//template<typename T, typename A>
vector<int> selectionSort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    return arr;
}
