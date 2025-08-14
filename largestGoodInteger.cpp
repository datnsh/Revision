/* Problem 2264 on Leetcode. Difficulty: Easy*/
class Soluion {
public:
	string largestGoodInteger(string num) {
		int n = num.size();
		string cur = "";
		string res = "";
		for (int i = 0; i + 2 < n; i++) {
			if (num[i + 1] == num[i] && num[i + 2] == num[i]) {
				cur = num.substr(i, 3);
				if (res.empty() || cur > res) {
					res = cur;
				}
			}
		}
		return res;
	}
};