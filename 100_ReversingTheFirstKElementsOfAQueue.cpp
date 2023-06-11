queue<int> reverseFirstK(queue<int> q, int k) {
	solve(q, k);
	int s = q.size() - k;
	while (s-- > 0) {
		int x = q.front();
		q.pop();
		q.push(x);
	}
	return q;
}

void solve(queue<int>& q, int k) {
	if (k == 0) return;
	int e = q.front();
	q.pop();
	solve(q, k - 1);
	q.push(e);
}
