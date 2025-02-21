#include<bits/stdc++.h>
using namespace std;


int numTilePossibilities(string tiles){
    
    vector<int> counts(26); // alphabet store
    vector<int> fac(tiles.size() + 1); // factorial store
    fac[0] = 1;
    // storing factorail array
    for (int i = 1; i < fac.size(); i++){
        fac[i] = i * fac[i  - 1];
    }
    // mapping characters in count array
    for (int  i = 0; i < tiles.size(); i++){
        counts[tiles[i] - 'A']++;
    }
    vector<int> lengthCount(tiles.size() + 1);
    
    lengthCount[0] = 1;

    for (int i = 0; i < counts.size(); i++){
        if(counts[i] != 0){// checking alphabet existence
            vector<int> temp(tiles.size() + 1);

            for (int j = 0; j < lengthCount.size() && lengthCount[j] > 0; j++){
                for (int k = 1; k <= counts[i]; k++){//looping through frequency of character
                    int totalLength = j + k;
                    temp[totalLength] += lengthCount[j] * fac[totalLength] / (fac[k] * fac[j]);
                }
            }

            for (int j = 0; j < temp.size(); j++){
                lengthCount[j] += temp[j];
            }
            
            
        }
    }

    int ans = 0;

    for (int i = 1; i < lengthCount.size(); i++){
        ans += lengthCount[i];
    }

    return ans;
}

int main(){
    string tiles;
    cin >> tiles;

    cout<<tiles<<endl;
    return 0;
}