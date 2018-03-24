#include<bits/stdc++.h>
 
using namespace std;
 
void lcs( string X, string Y, int m, int n )
{
   int L[m+1][n+1];
   
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   int index =  L[m][n];
   
   char lcs[index+1];
   lcs[index] = '\0'; 
   
   vector<int> indicesx;
   vector<int> indicesy;
   
   int i = m, j = n;
   while (i > 0 && j > 0){
      
      if (X[i-1] == Y[j-1])
      {
          lcs[index-1] = X[i-1];
		  indicesy.push_back(j-1);
		  indicesx.push_back(i-1); 
          i--; j--; index--;    
      }
 
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
 
   reverse(indicesx.begin(),indicesx.end());
   reverse(indicesy.begin(),indicesy.end());
   
   int currx = 0;
   int curry = 0;
   int prevy = 0;
   for(i=0;i<X.size();i++){
   		if(currx!=indicesx.size() && i==indicesx[currx]){
   			for(j=prevy;j<indicesy[curry];j++){
   				cout<<Y[j];
   			}
   			cout<<X[i];
   			currx++;
   			prevy = indicesy[curry]+1;
			curry++;
   			
   		}
   		else{
   			cout<<X[i];
   		}
   }
   
   for(i=prevy;i<Y.size();i++){
   		cout<<Y[i];
   }
 
   //cout  << lcs;
}
 
 
int main(){
	
	string a,b;
	
	while(cin>>a>>b){
		lcs(a, b, a.size(), b.size());
		cout<<"\n";
	}
	
	return 0;
} 
