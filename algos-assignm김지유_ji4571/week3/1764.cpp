#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);//c와c++사이 동기화 해제로 입출력 속도 높임
    cin.tie(NULL); //cin과cout 묶는 tie설정 해제, 속도 높임
    cout.tie(NULL); 
    int N, M;
    cin >> N >> M;
    vector<string> ds;
    vector<string> bs;
    
    for(int i = 0; i<N+M;i++){
        string name;
        cin >> name;
        ds.push_back(name);
    }
    sort(ds.begin(),ds.end());
    
    int c = 0;
    for(int i =1; i< N+M; i++){
        if(ds[i]==ds[i-1]){
            bs.push_back(ds[i]);
            c++;
        }
    }
    cout << c<<"\n";
    
    for(int i=0; i< bs.size();i++)
        cout << bs[i]<<"\n";
    
}
