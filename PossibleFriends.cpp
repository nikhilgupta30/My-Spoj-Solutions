#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        string str;
        int i, j, gr[52][52], ii = 0, jj = 0;
        for (i = 0; i < 52; i++) {
            for (j = 0; j < 52; j++) {
                gr[i][j] = 0;
            }
        }
        cin >> str;
        vector < int > gra[52];
        for (i = 0; i < str.size(); i++) {
            if (str[i] == 'Y') {
                gr[ii][jj] = 1;
                gra[ii].push_back(jj);
            }
            jj++;
        }
        int s = str.size() - 1, ss;
        ss = s + 1;
        while (s--) {
            cin >> str;
            ii++;
            jj = 0;
            for (i = 0; i < str.size(); i++) {
                if (str[i] == 'Y') {
                    gra[ii].push_back(jj);
                    gr[ii][jj] = 1;
                }
                jj++;
            }
        }
        int k;
        int index, possible_friends = 0, max_possible_friends = -1;
        for (i = 0; i < ss + 1; i++) {
            possible_friends = 0;
            bool check[53];
            for (ii = 0; ii < 53; ii++) check[ii] = false;
            for (j = 0; j < ss + 1; j++) {
                if (gr[i][j] == 1) {
                    for (k = 0; k < gra[j].size(); k++) {
                        if (i != gra[j][k] && check[gra[j][k]] == false && gr[i][gra[j][k]] == 0) {
                            possible_friends++;
                            check[gra[j][k]] = true;
                        }
                    }
                }
            }
            if (possible_friends >= max_possible_friends) {
                if (possible_friends == max_possible_friends) {
                    index = min(index, i);
                } else {
                    index = i;
                    max_possible_friends = possible_friends;
                }
            }
            possible_friends = 0;
        }
        printf("%d %d\n", index, max_possible_friends);
    }
    return 0;
} 
