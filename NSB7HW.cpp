#include<iostream>
#include <bits/stdc++.h>

using namespace std;
typedef vector<string> viS;
typedef vector<int> vi;
typedef map<string,viS> msvs;
#define forn(i,n) for(int i=0;i<n;i++)
void populate_maps(msvs &crush_map){
    crush_map["Rishi"]={"Priya"};
    crush_map["Mihir"]={"Dharmi"};


    
}
void populate_collection(map<int,string> &collection){
    collection[0]="zero";
    collection[1]="one";
    collection[2]="two";
    collection[3]="three";
    collection[4]="four";
    collection[5]="five";
    collection[6]="six";
    collection[7]="seven";
    collection[8]="eight";
    collection[9]="nine";
    collection[10]="ten";
    collection[11]="eleven";
    collection[12]="t";

}

string spell(int num){
    map<int,string> collection;
    c

    


}
void print_crushlists(vector<string> &crush_list){
    vector<string>::iterator itr;
    for(itr=crush_list.begin();itr!=crush_list.end();itr++){
        cout<<(*itr)<<", ";
    }
    cout<<"\n";

}
void print_maps(msvs &crush_map){
    // msvs::iterator itr;
    // for(itr = crush_map.begin();itr!=crush_map.end();itr++){
    //     cout<<itr->first<<" crushes are : ";
    //     print_crushlists(itr->second);
    

    // }
    for(auto[student,crush_list]:crush_map){
        cout<<student<<" crushes are : ";
        print_crushlists(crush_list);

    }
    

}


void playing_map(){
map<string,viS> crush_map;
crush_map["Kaushal"]={"Nandani","armando","saba"};
populate_maps(crush_map);
print_maps(crush_map);




}


int main(){
    playing_map();




return 0;
}//amortization
//iterator is an pointer
