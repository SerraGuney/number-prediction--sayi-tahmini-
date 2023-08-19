#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int number;
	char decision='y';
	cout<<" I kept a number between 0-150"<<endl;
	srand(time(NULL));
	int rnumber=0+rand()%150;
	while(decision=='y'){
	    cout<<"guess:";
		cin>>number;
		if(number<rnumber){
			cout<<"enlarge the number"<<endl;
		}
		else if(number>rnumber){
			cout<<"reduce the number"<<endl;
		}
		else if(number==rnumber){
		    cout<<"you found!!"<<endl;
		     cout<<"do you want to play again?  (yes:y no:n)";
		     	cin>>decision;
		}
	}
	if(decision=='n'){
		cout<<"bye bye";
	}
	return 0;
}
