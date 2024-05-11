#include <iostream>
using namespace std ;
int main()
{
    int n;
    do {} while (cout << "donnez un nombre >0 ", cin >> n, n<=0) ;
}

//Plus lisible :

do
  cout << "donnez un nombre >0";
while (cin >> n, n<=0);

//OU

do 
  { cout << "donnez un nombre >0 ";
    cin >> n;
  }
wgile (n<=0);
  
