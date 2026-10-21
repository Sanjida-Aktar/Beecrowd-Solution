#include<bits/stdc++.h>
using namespace std;

int main() {
    string sentence;
    int count = 0;

    while (getline(cin, sentence)) {
        string ans = "";

        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] == '"') {
                if (count % 2 == 0) {
                    ans += "``";
                } else {
                    ans += "''";
                }
                count++;
            } else {
                ans += sentence[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
  