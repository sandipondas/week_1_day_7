typedef long long ll;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
              
              vector<ll>v;
              queue<pair<ll,ll>>q;
              int l=0,r=0;
              
              while(r<N)
              {
                  if(A[r]<0){
                      q.push({r,A[r]});
                  }
                  if(r-l+1==K)
                  {
                      if(!q.empty())
                      {
                          pair<int,int> x=q.front();
                          int index=x.first;
                          int val=x.second;
                          v.push_back(val);
                          if(l==index)
                          {
                            q.pop();  
                          }
                      }
                      else
                      {
                          v.push_back(0);
                      }
                      l++;
                  }
                  r++;
                  
              }
              return v;
 }
