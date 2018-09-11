#include <bits/stdc++.h>
#define gc() getchar_unlocked()
 
using namespace std;
 
#define MAX_DIGITS 16
 
struct Node {
    int prefixes = 0;
};
 
Node trie[1<<18];
 
void addNumber(int x) {
    int node = 1, pos = MAX_DIGITS;
    trie[node].prefixes++;
    while(pos >= 0) {
        node = (node << 1) | ((x >> pos) & 1);
        trie[node].prefixes++;
        --pos;
    }
}
 
/*
x: the number with which we are taking the XOR
k: the maximum value of XOR.
Returns the number of pairs (x, ai) s.t. (ai ^ x) < k
*/
long long countPairs(int x, int k) {
    if(k >= (1 << (MAX_DIGITS + 1))) return trie[1].prefixes;
 
    int node = 1, pos = MAX_DIGITS;
    long long count = 0;
    while(pos >= 0) {
        int child1 = (node << 1) | !((x >> pos) & 1);
        int child0 = (node << 1) | ((x >> pos) & 1);
        if(k & (1 << pos)) {
            count += trie[child0].prefixes;
            node = child1;
        } else {
            node = child0;
        }
        
        if(!trie[node].prefixes) break;
        
        --pos;
    }
    return count;
}
 
void read_int(int &ret) {
    ret = 0;
    int sign = 1;
    char c = gc();
    while(c != '-' && (c<'0' || c>'9')) c = gc();
    if(c == '-') {
        sign = -1;
        c = gc();
    }
    while(c>='0' && c<='9') {
        ret = (ret<<3) + (ret<<1) + c - '0';
        c = gc();
    }
    ret *= sign;
}
 
int main() {
    int t, n, x, k;
    int prefXOR;
    long long count;
    read_int(t);
    while(t--) {
        memset(trie, 0, sizeof(trie));
        read_int(n);
        read_int(k);
        count = 0;
        prefXOR = 0;
        for(int i = 0; i < n; i++) {
            addNumber(prefXOR);
            read_int(x);
            prefXOR ^= x;
            count += countPairs(prefXOR, k);
        }
        cout<<count<<endl;
    }
} 
