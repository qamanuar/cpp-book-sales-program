#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

 void buyer();//set of function before int main and after namespace std
 void mainmenu();
 void banner();
 void buyer();
 void exit();
 void seller();
 void display();
 void receipt();
 void jeng();

 float price[5] = {0, 52.90, 59.90, 89.90, 52.90};//array that holds value of each books, start with 0
 float total =0;//total initial, can be adjusted
 float cprice;
 int stock[5] = {0, 10, 10, 10, 10};//stocks of books for initial, can change the stocks available if want
 int amount;

 int main(){
    jeng();//function as a main function, main purpose is to use as back function
 }
void buyer(){
        int buyerc;
        system("CLS");//clear screen, must #include <stdlib.h> in preprocessor
        banner();
        cout<<"\n\t[1] Display Books"<<endl;
        cout<<"\t[2] Purchase Books"<<endl;
        cout<<"\t[0] Back"<<endl;
        cout<<"\nChoose : ";
        cin>>buyerc;//choose from the options

        if (buyerc == 2){
            buy :
            string code;
            display();
            cout<<"\nEnter code of the books : ";
            cin >> code;
            if (code == "001"){
                system("CLS");
                cout<<"Title  : Loathe to Love You"<<endl;
                cout<<"Writer : Hazelwood Ali"<<endl;
                cout<<"Price  : RM52.90"<<endl;
                cout<<"Stocks : "<<stock[1]<<endl;//display value from array
                cout<<"\nAmount of books you wish to buy : ";
                cin>>amount;
                stock[1] -= amount;//get current stocks available after books bought
                cprice = price[1] * amount;
                total += cprice;//get current total price for books
                cout<<"The price is : RM"<<fixed << setprecision(2)<<cprice;//precise the decimal to 2 decimal points

                cout<<"\n\nTotal price is : RM"<<fixed << setprecision(2)<<total;

                char another;
                cout<<"\n\nDo you want to buy another book [y/n] ?";
                cin>>another;

                if(another == 'y'  another == 'Y'){
                goto buy;//go directly to where 'buy :' located, which is line 39
                }
                else if(another == 'n'  another == 'N'){
                receipt();
                }


            }
            else if (code == "002"){
                system("CLS");
                cout<<"Title  : Mariage for One"<<endl;
                cout<<"Writer : Ella Maise"<<endl;
                cout<<"Price  : RM59.90"<<endl;
                cout<<"Stocks : "<<stock[2]<<endl;

                cout<<"\nAmount of books you wish to buy : ";
                cin>>amount;
                stock[2] -= amount;
                cprice = price[2] * amount;
                total += cprice;
                cout<<"The price is : RM"<<fixed << setprecision(2)<<cprice;

                cout<<"\n\nTotal price is : RM"<<fixed << setprecision(2)<<total;

                char another;
                cout<<"\n\nDo you want to buy another book [y/n] ?";
                cin>>another;

                if(another == 'y'  another == 'Y'){
                goto buy;
                }
                else if(another == 'n'  another == 'N'){
                receipt();
                }
            }
            else if (code == "003"){
                system("CLS");
                cout<<"Title  : 8 Rules of Love"<<endl;
                cout<<"Writer : Jay Shetty"<<endl;
                cout<<"Price  : RM89.90"<<endl;
                cout<<"Stocks : "<<stock[3]<<endl;

                cout<<"\nAmount of books you wish to buy : ";
                cin>>amount;
                stock[3] -= amount;
                cprice = price[3] * amount;
                total += cprice;
                cout<<"The price is : RM"<<fixed << setprecision(2)<<cprice;

                cout<<"\n\nTotal price is : RM"<<fixed << setprecision(2)<<total;
char another;
                cout<<"\n\nDo you want to buy another book [y/n] ?";
                cin>>another;

                if(another == 'y'  another == 'Y'){
                goto buy;
                }
                else if(another == 'n'  another == 'N'){
                receipt();
                }
            }
            else if (code == "004"){
                system("CLS");
                cout<<"Title  : The Love Hypothesis"<<endl;
                cout<<"Writer : Hazelwood Ali"<<endl;
                cout<<"Price  : RM52.90"<<endl;
                cout<<"Stocks : "<<stock[4]<<endl;

                cout<<"\nAmount of books you wish to buy : ";
                cin>>amount;
                stock[4] -= amount;
                cprice = price[4] * amount;
                total += cprice;
                cout<<"The price is : RM"<<fixed << setprecision(2)<<cprice;

                cout<<"\n\nTotal price is : RM"<<fixed << setprecision(2)<<total;

                char another;
                cout<<"\n\nDo you want to buy another book [y/n] ?";
                cin>>another;

                if(another == 'y'  another == 'Y'){
                goto buy;
                }
                else if(another == 'n'  another == 'N'){
                receipt();
                }
            }
        }
        else if (buyerc == 1){
            display();
            char wish;
            cout<<"\nDo you wish to buy [y/n]?";
            cin>>wish;

            if(wish == 'y'  wish == 'Y'){
                goto buy;
            }
            else if(wish == 'n'  wish == 'N'){
                exit();
            }

        }
        else{
            jeng();
        }
    }
void banner(){
        cout<<"---------Book Sales Program---------"<<endl;
    }
void mainmenu(){
        cout<<"\n\t[1] Customer"<<endl;
        cout<<"\t[2] Admin"<<endl;
        cout<<"\t[3] Exit"<<endl;
    }

void exit(){
        system("CLS");
        //setfill and setw example
        cout<<setfill('-')<<setw(9)<< '-'<<"Thank you"<<setfill('-')<<setw(9)<<'-';
        //fill the value in setw() with character '-'
    }

void seller(){
        int sellerc;
        system("CLS");
        banner();

        login :
        string uname, pword;
        cout<<"Username : ";
        cin>>uname;
        cout<<"Password : ";
        cin>>pword;

        for(int i=0;i<20;i++){//loop for loading screen
        system("cls");
        cout<<"Verifying Combination\n";
        cout<<"[";
        cout<< setw(19) << left << string(i,'=');//set width(blanks) as 19 and loop up to 19 to fill the blanks with increasing =
        cout<<"]";
        Sleep(100);

        }


        if(uname == "kemy" && pword == "123"){//both the username and password need to match to continue
            system("CLS");
             cout<<"  Welcome back !"<<endl;
            Sleep(1000);
        }
        else{
            system("CLS");
            cout<<"  Wrong Combination"<<endl;
            Sleep(1000);
            system("CLS");
            banner();
            goto login;
        }
        system("CLS");
        banner();
        cout<<"\n\t[1] Display Books"<<endl;
        cout<<"\t[2] Report"<<endl;
        cout<<"\t[0] Logout"<<endl;
        cout<<"\nChoose : ";
        cin>>sellerc;

        if (sellerc == 1){
            display();
        }
        else if (sellerc == 2){
            system("CLS");
        banner();

        cout<<"Books sold today :\n\n";
        cout<<"Loathe to Love You  : "<<10-stock[1]<<endl;
        cout<<"Mariage for One     : "<<10-stock[2]<<endl;
        cout<<"8 Rules of Love     : "<<10-stock[3]<<endl;
        cout<<"The Love Hypothesis : "<<10-stock[4]<<endl;

        cout<<"\nTotal sales is : RM"<<fixed << setprecision(2)<<total;
        }
        else if (sellerc == 0){
            jeng();
        }
    }

void display(){
  system("CLS");
        banner();
        cout<<"\nCode   : 001"<<endl;
        cout<<"Title  : Loathe to Love You"<<endl;
        cout<<"Writer : Hazelwood Ali"<<endl;
        cout<<"Price  : RM52.90"<<endl;
        cout<<"Stocks : "<<stock[1]<<endl;

        cout<<"\nCode   : 002"<<endl;
        cout<<"Title  : Mariage for One"<<endl;
        cout<<"Writer : Ella Maise"<<endl;
        cout<<"Price  : RM59.90"<<endl;
        cout<<"Stocks : "<<stock[2]<<endl;

        cout<<"\nCode   : 003"<<endl;
        cout<<"Title  : 8 Rules of Love"<<endl;
        cout<<"Writer : Jay Shetty"<<endl;
        cout<<"Price  : RM89.90"<<endl;
        cout<<"Stocks : "<<stock[3]<<endl;

        cout<<"\nCode   : 004"<<endl;
        cout<<"Title  : The Love Hypothesis"<<endl;
        cout<<"Writer : Hazelwood Ali"<<endl;
        cout<<"Price  : RM52.90"<<endl;
        cout<<"Stocks : "<<stock[4]<<endl;
    }

void receipt(){
    system("CLS");
    banner();

    cout<<"Here is your purchases :\n\n";
    cout<<"Loathe to Love You  : "<<10-stock[1]<<endl;
    cout<<"Mariage for One     : "<<10-stock[2]<<endl;
    cout<<"8 Rules of Love     : "<<10-stock[3]<<endl;
    cout<<"The Love Hypothesis : "<<10-stock[4]<<endl;

    cout<<"\nTotal price is : RM"<<fixed << setprecision(2)<<total;
    cout<<"\n\nCash Paid      : RM";
    float paid;
    cin>>paid;
    cout<<"Change         : RM"<<fixed << setprecision(2)<<paid - total;
    cout<<"\n\n-------------Thank you-------------"<<endl;

    cout<<"\nAny more business ? [y/n]";
    char purchase;
    cin>>purchase;

        if(purchase == 'y' || purchase == 'Y'){
            jeng();
        }
}

void jeng(){
    int choose;

    system("CLS");
    banner();
    mainmenu();
    cout<<"\nChoose : ";
    cin>>choose;
    if(choose == 1){
        buyer();
    }
    else if(choose == 2){
        seller();
    }
    else if(choose == 3){
        exit();
    }
    else{
        system("CLS");
        banner();
        cout<<"Error key. Try again.";
        cout<<"\nPress any key to continue";
        _getch();//function to press any key to continue, must #include <conio.h>
        jeng();
    }
}
