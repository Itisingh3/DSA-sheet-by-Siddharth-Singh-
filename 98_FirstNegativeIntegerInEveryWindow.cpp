vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 long long firstNegativeIndex=0,firstNegativeElement;
                                                 vector<long long>ans;
                                                 for(int i=k-1;i<n;i++){
                                                     while((firstNegativeIndex<i)&&(firstNegativeIndex<=i-k || arr[firstNegativeIndex]>=0))
                                                        firstNegativeIndex++;
                                                    if(arr[firstNegativeIndex]<0)firstNegativeElement=arr[firstNegativeIndex];
                                                    else firstNegativeElement=0;
                                                    ans.push_back(firstNegativeElement);
                                                 }
                                                 return ans;
 }
