#include<bits/stdc++.h>
using namespace std;


void expainVector()
{
    /*********** Vectors Basics ***********/
    vector<int> v;

    v.push_back(1);//it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.

    v.emplace_back(2);//similar to push back

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);


    vector<int> v(5,100);//{100,100,100,100,100}

    vector<int> v(5);//says that the size of the array is 5 , all though it does not matter we can increase the size

    vector<int> v1(3,20);//{20,20,20}
    
    vector<int> v2(v1); //v2 makes copy of v1

    /***********Iterators***********/

    vector<int>:: iterator it=v.begin(); // Iterator points to the first element
    it++;
    cout<<*(it)<<" ";//prints the second letter

    vector<int>::iterator it_begin = v.begin(); // Iterator pointing to the beginning of the vector
    vector<int>::iterator it_end = v.end();     // Iterator pointing to the end of the vector

    cout<<v[1]<<" "<<v.at(1);//both are same 

    cout<<v.back()<<" ";// Output the value of the last element in the vector

    /***********Printing the vector***************/

    for(vector<int> ::iterator it=v.begin(); it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin(); it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }

    /************** Erase ***************/
    //sappose we have a vector {1,2,3,4,5}
    v.erase(v.begin()+1);//{1,3,4,5}

    v.erase(v.begin()+1,v.begin()+3);//{1,5}

    /************** Insert ***************/

    vector<int> v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    //sappose {10,20}
    cout<<v.size();//2

    //sappose {10,20}
    v.pop_back();//{10}

    // v1->{10,20}
    // v2->{30,40}

    v1.swap(v2);
    // v1-> {30,40} v2->{10,20}

    v1.clear(); //clear all the values of the vector

    cout<<v1.empty();//return Ture or False
}

int main()
{
    return 0;
}