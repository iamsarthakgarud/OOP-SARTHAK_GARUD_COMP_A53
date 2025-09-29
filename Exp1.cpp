#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    
    private:
        string acc_holder_name;
        string acc_type;
        int accno;
        int amount;
        int depo;
        int with;
    public:
        void create_account(string name,string acctype,int accountno, int initial_amt){
             acc_holder_name=name;
             acc_type=acctype;
             accno=accountno;
             amount=initial_amt;
             cout<<"------Account Created Successfully-------";
             
            displayinfo();
        }
        
       
        void deposit(string name,int accountno,int deposit){
            acc_holder_name=name;
            accno=accountno;
            depo=deposit;
            amount=amount+depo;
           
            cout<<"------Amount Deposited Successfully !!---------"<<endl;
            displayinfo();
            
        }
        void withdrawn(string name,int accountno,int withdrawn){
            acc_holder_name=name;
            accno=accountno;
            with=withdrawn;
            amount=amount-with;
            cout<<"------Amount withdrawed Successfully !!---------";
            displayinfo();
        }
        void displayinfo(){
            cout<<""<<endl;
            cout<<"********** INFORMATION *************"<<endl;
            cout<<"Name: "<<acc_holder_name<<endl;
            cout<<"Account type: "<<acc_type<<endl;
            cout<<"Account No: "<<accno<<endl;
            cout<<"Current Account Balance: "<<amount<<endl;
            cout<<""<<endl;
            
        }
        
        
};

int main(){
    string name;
    int accountno;
    string acctype;
    int deposite;
    int withdrawn;
    int initial_amt;
    int choice=1;
    bankaccount cust1;
    
    while(choice!=0){
        
        cout<<"-------------MENU-------------"<<endl;
        cout<<"Create account(1)\ndeposite money(2)\nwithdrawn money (3)\nExit(0) "<<endl;
        cin>>choice;
        
         if(choice==1){
        cout<<"Enter name: ";
        cin>>name;
        
        cout<<"Enter account type: ";
        cin>>acctype;
        
        cout<<"Enter account number: ";
        cin>>accountno;
        
        cout<<"Enter the initial amount you want to add: ";
        cin>>initial_amt;
         cout<<""<<endl;
        
        cust1.create_account(name,acctype,accountno,initial_amt);
    }
    
    else if(choice==2){
        cout<<"Enter name: ";
        cin>>name;
        
        cout<<"Enter account number: ";
        cin>>accountno;
        
        cout<<"Enter the amount to deposit: ";
        cin>>deposite;
        cout<<""<<endl;
        
        cust1.deposit(name,accountno,deposite);
    }
    else if(choice==3){
        cout<<"Enter name: ";
        cin>>name;
        
        cout<<"Enter account number: ";
        cin>>accountno;
        
        cout<<"Enter the amount withdrawn: ";
        cin>>withdrawn;
        cout<<""<<endl;
        
        cust1.withdrawn(name,accountno,withdrawn);
    }
}
  
    return 0;
}



