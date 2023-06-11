void generatePrintBinary(int n)
{
  vector<long long>ans;
	queue<string> q;
	q.push("1");
	while (n--) {
		string s1 = q.front();
		q.pop();
		ans.push_back(s1);
		string s2 = s1; 
		q.push(s1.append("0"));
		q.push(s2.append("1"));
	}
}
