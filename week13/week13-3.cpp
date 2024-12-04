//week13-3.cpp
//3 4
//4 3
//2 5
//1 3
//3 9
//3 3
int main() {
    int a,b;
    vector<int>A,B;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    sort(A.begin(),A.end() );
    sort(B.begin(),B.end() );
    int ans=0;
    for(int i=0;i<A.size();i++){
        //cout<<A[i]<<" ";
        ans+= abs(A[i]-B[i]);
    }
    cout <<"加起來的答案是"<<ans;
}
