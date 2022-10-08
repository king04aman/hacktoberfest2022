#include<bits/stdc++.h>
using namespace std;

void explainSorting(){

    int a[] = {3,5,2,9,4};
    sort(a, a + 5);// it will sort element before of a+5
    sort(a+2,a+4); // it will sort element from 3rd to 4th

    vector<int>v = {9,5,8,7,2,3};
    sort(v.begin(),v.end());
    
    sort(a, a+5 , greater<int>()); // sorting in descending order.
    
    int max = *(max_element(a,a+4));
    cout << "max: "<< max << endl; 
}

bool customComparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // now execute this part only if p1.sec == p2.sec so we dont need to write that condition

    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;
    return true;
}

void customSortingOrder(){  //custom comparator
    pair<int,int>p[] = {{1,2},{2,3},{4,2}};

    int size = (sizeof(p))/(sizeof(p[0]));
    //******** This is properties of custom comparator******
    // sort it according to 2nd element.
    // if 2nd element is same then sort it according to 1st element.
    // according to 1st element but in descending order.
    
    sort(p,p+3,customComparator);
    for(int i=0;i<size;i++ ){
        cout << p[i].first << " " << p[i].second << endl; 
    }
}

void noOfSetBit(){
    int num = 8;
    int count = __builtin_popcount(num); // it will returns no of 1s in their binary number
    cout << count << endl;

    long long num1 = 123456789123;
    int cnt = __builtin_popcountll(num1); // gives no of set bits. but it is for long long integer.
    cout << cnt << endl; 
}

void noOfPermutations(){
    string s = "123";
    do{
        cout << s << endl; 
    }while(next_permutation(s.begin(),s.end()));
    
    cout << "********************************" << endl;
    
    // it will show permutation after 231 so if we need all permutation
    // then 1st of all, we require to sort the string in ascending order then make permutation of it.
    
    string s2 = "231";
    
    sort(s2.begin(),s2.end()); // -> sorting string to get full permutations.
    
    do{
        cout << s2 << endl; 
    }while(next_permutation(s2.begin(),s2.end()));
          
}

int main(){
    explainSorting();
    // customSortingOrder();
    // noOfSetBit();
    // noOfPermutations();
}
