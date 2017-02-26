/*monkeyLuffy.cpp
Feb 26, 2017
My__Boo
*/
#include <iostream>
using namespace std;
int main()
{
	for (int x=0;x<=100;x++){
			if(x % 5 == 0 && x % 3 ==0){
				cout<<x<<" : Monkey D. Luffy"<<endl;
			}
		    else if(x % 3 ==0){
				cout<<x<<" : monkey"<<endl;
			}
			else if(x % 5 ==0){
				cout<<x<<" : luffy"<<endl;
			}
			else{
				cout<<x<<endl;
			}
		}
return 0;
}
