#include<bits/stdc++.h>
using namespace std;


int findCeil(vector<int> arr,int n,int x){
    int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

int findFloor(vector<int> arr,int n,int x){
    int low = 0;
    int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] <= x) {
			ans = arr[mid];
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}
	}
	return ans;
}

pair<int,int> getFloorCeil(vector<int> arr,int n,int x){
    int f = findFloor(arr,n,x);
    int c = findCeil(arr,n,x);

    return make_pair(f,c);
}



int main(){
    vector<int> arr;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int x ;
    cin>>x;


    

    pair<int,int> ans = getFloorCeil(arr,n,x);

    cout<<"Floor: "<<ans.first<<"\nCeil: "<<ans.second<<endl;

    cout<<findCeil(arr,n,x);
    return 0;
}