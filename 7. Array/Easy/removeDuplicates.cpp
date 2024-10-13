#include<bits/stdc++.h>
using namespace std;

//optimal method
int removeDuplicate(vector<int> &arr, int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);

}

//brute force method
int removeDuplicates_bruteForce(int arr[], int n) {
  set <int> set;
  for (int i=0; i<n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j=0;
  for (int x: set) {
    arr[j++]=x;
  }
  return k;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int a=removeDuplicate(arr,n);

    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}