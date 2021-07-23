#include <iostream>

using namespace std;


int main() {


   int n,m;

   cin>>n>>m;

   int accounts[n][m];

   int i,j;

   for(i=0; i<n; i++)

   {

       for(j=0; j<m; j++)

       {

           cin>>accounts[i][j];

       }

   }

   int max = 0;

   for(i=0; i<n; i++)

   {

       int sum = 0;

       for(j=0; j<m; j++)

       {

           sum += accounts[i][j];

       }

       if(sum>max) max = sum;

   }

   cout<<max<<endl;

   return 0;

}
