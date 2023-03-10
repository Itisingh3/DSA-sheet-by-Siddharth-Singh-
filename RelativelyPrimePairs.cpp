void solve(long l,long r ){
  cout<<"YES"<<endl;
  vector<int,int> ans;
  for(int i=0;i<r-l+1;i+=2){
    ans.push_back({l+i,l+i+1});
  }
  return ans;
}
