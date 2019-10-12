#include<iostream> 
#include<cstring> 
#include<cstdlib> 
using namespace std; 

void lcs( char *X, char *Y, int m, int n ) 
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

   int index = L[m][n]; 

   char lcs[index+1]; 
   lcs[index] = '\0'; 

   int i = m, j = n; 
   while (i > 0 && j > 0) 
   { 

      if (X[i-1] == Y[j-1]) 
      { 
          lcs[index-1] = X[i-1]; 
          i--; j--; index--;    
      } 

      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 

   cout << "LCS of " << X << " and " << Y << " is " << lcs <<endl; 
} 

int main() 
{ 
  char s1[20],s2[20];
  cout<<"Enter string 1 : ";
  cin>>s1;
  cout<<"Enter string 2 : ";
  cin>>s2; 
  int m = strlen(s1); 
  int n = strlen(s2); 
  lcs(s1,s2, m, n); 
  return 0; 
} 