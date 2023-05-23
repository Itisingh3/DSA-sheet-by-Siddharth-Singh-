
int countMinReversals(string expr)
{
	int len = expr.length();

	// length of expression must be even to make
	// it balanced by using reversals.
	if (len % 2)
		return -1;

	// After this loop, stack contains unbalanced
	// part of expression, i.e., expression of the
	// form "}}..}{{..{"
	stack<char> s;
	for (int i = 0; i < len; i++) {
		if (expr[i] == '}' && !s.empty()) {
			if (s.top() == '{')
				s.pop();
			else
				s.push(expr[i]);
		}
		else
			s.push(expr[i]);
	}

	int red_len = s.size();

	// count opening brackets at the end of
	// stack
	int n = 0;
	while (!s.empty() && s.top() == '{') {
		s.pop();
		n++;
	}
//Let m be the total number of closing brackets and n be the number of opening brackets. We need ⌈m/2⌉ + ⌈n/2⌉ reversals. 
  //For example }}}}{{ requires 2+1 reversals.
	return (red_len / 2 + n % 2);
}
