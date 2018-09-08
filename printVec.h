#ifndef PRINTVEC_H
#define PRINTVEC_H

using namespace std;
template <typename T, typename A>
void print(vector<T,A> const &arr)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
        cout<<arr.at(i)<<"\t";
    cout<<endl;
}

#endif // PRINTVEC_H
