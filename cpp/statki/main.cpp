#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int board [3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int ship_num_total;
    int ship_num;
    int row;
    int column;
    int turns = 0;

    cout<<"Witaj w statkach. Plansza ma 9 pól ułożonych 3x3. Na ilu polach mają być statki?"<<endl;
    cin>>ship_num_total;

    for(int i = 0; i< ship_num_total; i++){
	int r, c;
	r = rand() % 3;
	c = rand() % 3;
	board[r][c] = 1;
    }


    ship_num = ship_num_total;

    while(ship_num > 0){
        cout<<"podaj rząd"<<endl;
        cin>>row;
        row--;
        cout<<"podaj kolumnę"<<endl;
        cin>>column;
        column--;
        if(board[row][column] = 0){
	    cout<<"nie trafiłeś"<<endl;
	    turns++;
	    row = 0;
	    column = 0;
        }else{
	    cout<<"trafiłeś"<<endl;
	    ship_num--;
	    cout<<"zostały "<<ship_num<<" statki"<<endl;
	    turns++;
	    board[row][column] = 0;
	    row = 0;
	    column = 0;
	    }
	}

    cout<<"gratuluje wygranej, gra zajela ci "<<turns<<" Turn!"<<endl;


return 0;
}