#include <iostream>

using namespace std;

int main(){


int tab1[4] = {3, 2, 5, 1};

if(tab1[0] > tab1[1] && tab1[0] > tab1[2] && tab1[0] > tab1[3]) {
    cout<<tab1[0];
    if(tab1[1]>tab1[2] && tab1[1]>tab1[3]){
	cout<<tab1[1];
	if(tab1[2]>tab1[3]){
	    cout<<tab1[2]<<endl;
	    cout<<tab1[3]<<endl;
	}else if(tab1[3]>tab1[2]){
	    cout<<tab1[3]<<endl;
	    cout<<tab1[2]<<endl;
	}

    }else if(tab1[2]>tab1[1] && tab1[2]>tab1[3]){
	cout<<tab1[2];

    }else if(tab1[3]>tab1[2] && tab1[3]>tab1[1]){
	cout<<tab1[3];
    


}else if(tab1[1] > tab1[0] && tab1[1] > tab1[2] && tab1[1] > tab1[3]){
    cout<<tab1[1];
}else if(tab1[2] > tab1[1] && tab1[2] > tab1[0] && tab1[2] > tab1[3]){
    cout<<tab1[2]<<endl;
    }if(tab1[0] > tab1[1] && tab1[0] > tab1[3]){
	cout<<tab1[0]<<endl;
	if(tab1[1] > tab1[3]){
	    cout<<tab1[1]<<endl;
	    cout<<tab1[3]<<endl;
	}else if(tab1[3]> tab1[1]){
	    cout<<tab1[3]<<endl;
	    cout<<tab1[1]<<endl;
	}
    };





}else if(tab1[3] > tab1[1] && tab1[3] > tab1[2] && tab1[3] > tab1[0]){
    cout<<tab1[3];
};

	return 0;
}
