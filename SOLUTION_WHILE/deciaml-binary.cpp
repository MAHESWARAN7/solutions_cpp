#include<iostream>
#include <string>
#include<cmath>
using namespace std;
class conversion{
   public :


      conversion(long long b){
            int remainder=0, decimal=0 ,i=0;
while(b != 0){
   remainder = b%10;
   b=b/10;
   decimal += remainder * pow(2,i);
   i++;
}
cout<<"decimal : "<< decimal;
      }
};
int main(){
  long long a;
  cin>>a;
  conversion binary (a);
}