class Solution {
public:
   string addBinary(string a, string b) {

    vector<int> vec1, vec2;

    // string → vector<int>
    for (char ch : a) vec1.push_back(ch - '0');
    for (char ch : b) vec2.push_back(ch - '0');

    int i = vec1.size() - 1;
    int j = vec2.size() - 1;
    int carry = 0;

    string bin = "";

    // SAME IDEA: last se add
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += vec1[i--];
        if (j >= 0) sum += vec2[j--];

        bin.push_back((sum % 2) + '0');
        carry = sum / 2;
    }

    reverse(bin.begin(), bin.end());
    return bin;
}
};