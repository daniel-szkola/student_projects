#include <iostream>
#include <ctime>
using namespace std;

int main() {
    

srand (time(NULL));

    int board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int ship_num_total;
    int ship_num;
    int row;
    int column;
    int turns = 0;

    cout << "Witaj w grze statki, plansza ma 9 pól, plansza jest 3x3. Na ilu polach mają być statki?" << endl;
    cin >> ship_num_total;

    if(ship_num_total < 1 || ship_num_total > 9) {
        cout << "Musisz wybrać liczbę od 1 do 9!" << endl;
        return 1;
    }


    for(int i = 0; i < ship_num_total; ) {
        int r = rand() % 3;
        int c = rand() % 3;
      
        if (board[r][c] == 0) {
            board[r][c] = 1;
            i++;
        }
    }

    ship_num = ship_num_total;
    do {
        cout << "Podaj rząd (1-3): ";
        cin >> row;
        cout << "Podaj kolumnę (1-3): ";
        cin >> column;

    
        row--;
        column--;

       
        if(row < 0 || row > 2 || column < 0 || column > 2) {
            cout << "Podano nieprawidłowe współrzędne! Wybierz rząd i kolumnę od 1 do 3." << endl;
            continue; 
        }

        if(board[row][column] == 0) {
            cout << "Nie trafiłeś!" << endl;
            turns++;
        } else {
            cout << "Trafiłeś!" << endl;
            ship_num--;
            cout << "Zostały " << ship_num << " statki." << endl;
            turns++;
            board[row][column] = 0; 
        }
    } while(ship_num > 0);

    cout << "Gratulacje, wygrana! Gra zajęła ci " << turns << " rund!" << endl;

    return 0;
}
