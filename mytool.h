#include<iostream>
#include<functional>
#include<iomanip>
#include<string>
#include<string.h>
#include<conio.h>




//tic tac tic
using namespace std;

int winner=0;
int loop_winner;
//string square[]={"0","1","2","3","4","5","6","7","8"};
char square[]={'0','1','2','3','4','5','6','7','8'};




class board{
public:
    void board2(){
    cout<<"                        |     |     "<<endl;
    cout<<"                     "<<square[0]<<"  "<<"|  "<< square[3]<<"  |  "<<square[6]<<endl;
    cout<<"                   _____|_____|_____"<<endl;
    cout<<"                        |     |     "<<endl;
    cout<<"                     "<<square[1]<<"  "<<"|  "<< square[4]<<"  |  "<<square[7]<<endl;
    cout<<"                   _____|_____|_____"<<endl;
    cout<<"                        |     |     "<<endl;
    cout<<"                     "<<square[2]<<"  "<<"|  "<< square[5]<<"  |  "<<square[8]<<endl;
    }
    void board3(){
    cout<<"     |     |     "<<endl;
    cout<<"  "<<square[0]<<"  "<<"|  "<< square[3]<<"  |  "<<square[6]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<square[1]<<"  "<<"|  "<< square[4]<<"  |  "<<square[7]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<square[2]<<"  "<<"|  "<< square[5]<<"  |  "<<square[8]<<endl;

}
}b[100];
//


enum player1{
    x='X',
    x1=1,
};
enum player2{
    o='o',
    o1=2,
};

void tic_tac_toe(){
    string symbol1,symbol2;
    int symbol3,symbol4;
    int i=1,check=0,u=0;
    int number1=0,number2=-1;
    int emoji=0,emoji_number,temp;
    string res;

    restart:
    do{
        system("cls");
        cout<<"                  ------------------"<<endl;
        cout<<"                 | Tic Tac Toe Game |                           \n";
        cout<<"                  ------------------"<<endl;
        cout<<"*Note1: Square 0 = 0, Square 1 = 1,........,Square 8 = 8.\n";
        cout<<"*Note2: Player cannot choose the same cell."<<endl;
        cout<<"*Style: Player1-> "<<(char)1<<" , Player2-> "<<(char)2;
        cout<<endl;
        cout<<"---------------------------------------------------------\n"<<endl<<endl;
        if(i){
            if(u==0){
                b[u].board2();
            }else{
                b[u].board3();
            }
            cout<<"\n\n";
            //
            //
            if(i%2!=0){
                again1:
                cout<<"Player1's turn (choose number of square): ";cin>>number1;
                /*cout<<"Player 1->insert: ";cin.seekg(0);
                cin>>symbol1;*/
                //
                if(number1!=number2){
                        //symbol1=player1::x1;
                        if(square[check]==square[check+1]&&square[check+1]==square[check+2]){
                            cout<<"Player1 is the WINNER"<<endl;
                            break;
                        }
                        square[number1]=player1::x1;
                }else{
                    cout<<"WARNIG: Player cannot choose the same cell. Please insert number of square again."<<endl;
                    cout<<(char)7;
                    //cin.fail();
                    //cin.ignore();
                    goto again1;
                }
            }else{
                again2:
                cout<<"Player2's turn (choose number of square): ";cin>>number2;
                /*cout<<"Player 1->insert: ";cin.seekg(0);
                cin>>symbol1;*/
                //
                if(number2!=number1){
                        //symbol2=player2::o1;
                        square[number2]=player2::o1;
                }else{
                    cout<<"WARNING: Player cannot choose the same cell. Please insert number of square again."<<endl;
                    cout<<(char)7;
                    goto again2;
                }
            }
        }
        cout<<"\n\n"<<endl;
        cout<<endl;
        i++;
    }while(i<=10);
    cout<<"                        Game Draw."<<endl;
    cout<<"----------------------------------------------------------------------\n"<<endl;
    cout<<"Insert 1 to restart or 0 to leave: ";getline(cin,res);
    cin>>res;
    if(res=="1"){
            u++;
        goto restart;
    }else{
        cout<<"Program ended!!."<<endl;
    }
    cin.get();
}
//---------------------------------------
//Login form


string first_name,last_name;
char password[8];
int loop;

void create_account(){
    cout<<"                    Create your Pagraph account"<<endl;
    cout<<"                    ..........................."<<endl<<endl;
    //form
    cout<<"..........."<<endl;
    cout<<"First name: ";cin.seekg(0);
    getline(cin,first_name);
    cout<<"..........."<<endl;
    cout<<"Last name: ";cin.seekg(0);
    getline(cin,last_name);
    cout<<"................"<<endl;
    cout<<"Create password: ";
}

//
class detail{
public:
    void describe(){
        cout<<setw(50)<<"1. Add member"<<endl;
        cout<<setw(51)<<"2. View member"<<endl;
        short int i;
        for(i=0;i<20;i++){
            sleep((float)0.5);
            cout<<"-";
        }
        cout<<endl;
    }
    void choose(){
        short int choose;
        cout<<"Choose number: ";cin>>choose;
        switch (choose){
        case 1:
            cout<<"Add: "<<endl;
        }
    }
};









