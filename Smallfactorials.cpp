#include<iostream>
#include<stdio.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    for(int h=0;h<t;h++){
    	int n; 
    scanf("%d",&n);
    int arr[1000] = {0};
    arr[0] = 1;
    int len = 1;
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = 0; j < len; j++) {
            int mul = i * arr[j] + carry;
            int dig = mul % 10;
            arr[j] = dig;
            carry = mul / 10;
        }
 
        while (carry) {
           len++;
           int dig = carry % 10;
           arr[len - 1] = dig;
           carry /= 10;
        }
    }
 
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
	cout<<endl;
    }
    return 0;
}
