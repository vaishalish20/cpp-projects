#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;
void registration();
void login();
void forgot();

int main(){
         cout<<" \n\t\t\t\t WELCOME TO LOGIN & REGISTRATION FORM"<<endl;
         cout<<" \n choose any one of the following"<<endl;
         cout<<" \n 1)REGISTER"<<endl;
         cout<<" \n 2)LOGIN"<<endl;
         cout<<" \n 3)Forgot password"<<endl;
         cout<<" \n 4) Exit"<<endl;


         int choice;
         cout<<"\n\t";
         cin>>choice;

        switch(choice){
        case 1:
        registration();
        break;

        case 2:
        login();
        break;

        case 3:
        forgot();
        break;

        case 4:
            system("cls");
        cout<<"\n\t thank you for visiting"<<endl;
        break;

        default:

    cout << "\t\t Invalid choice, please enter a valid choice" << endl;
    while (choice < 1 || choice > 4) {
        cout << "\n\t";
        cin >> choice;
        if (choice == 1)
            registration();
        else if (choice == 2)
            login();
        else if (choice == 3)
            forgot();
        else if (choice == 4) {
            system("cls");
            cout << "\n\t thank you for visiting" << endl;
            return 0;
        }
        else {
            system("cls");
            cout << "Invalid choice, please enter a valid choice" << endl;
        }
    }
    break;


         }
return 0;

}

void login(){
    int count;
    string userid,password,uid,upass;
    system("CLS");
    cout<<"\n enter your user id /user name"<<endl;
    cin>>userid;
    cout<<"\n enter your password"<<endl;
    cin>>password;

    ifstream input("record.txt");

    while(input >> uid >> upass){
        if(userid==uid && password == upass){
            count=1;
            system("cls");
        }

    }
    input.close();
    if(count==1){
    cout<<"\t\t"<<userid<<",your login is successful"<<endl;
    main();

    }
    else{
    cout<<"\t\t error!!!!"<<endl;
    cout<<"\t\t details not found"<<endl;
    main();
    }
    }
void registration(){
    system("cls");
    string ruserid,rpassword;
    cout<<"\n enter your user name"<<endl;
    cin>>ruserid;
    cout<<"\n enter your password"<<endl;
    cin>>rpassword;

    ofstream f1("record.txt",ios::app);
    f1<<ruserid<<' '<<rpassword<<endl;
    system("CLS");
    cout<<"\t\t registration is successful"<<endl;
    main();


}
void forgot(){
    int option;
    system("CLS");
    cout<<"\n your forgot your password,don't worry"<<endl;
    cout<<"\n press 1 to search for id by user name"<<endl;
    cout<<"\n press 2 to go back to main menu"<<endl;
    cout<<"\n\n enter your choice"<<endl;
    cin>>option;

        switch(option){
        case 1:
        {
        int count=0;
        string userId, password, sId, spass;
        cout<<"\n enter the user name which you remembered"<<endl;
        cin>>userId;

        ifstream f2("record.txt");
        while(f2>> sId >>spass){
        if(sId==userId){
        count=1;
        password=spass;
        break;
        }
        }
        f2.close();
        if(count==1){
        cout<<"\t\t account found"<<endl;
        cout<<"\t your password is"<<" "<<password<<endl;
        main();
        }
        else{
        cout<<"your account not found!!"<<endl;
        main();
        }
        break;
        }
        case 2:{
        main();
        break;
        }
        default:
        cout<<"\t\t wrong choice"<<endl;
        forgot();
}

}


