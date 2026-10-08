#include<bits/stdc++.h>
using namespace std;
class vehicle
{
private:
    int id;
    string modal;
    string brand;
    double priceday;
    bool available;
public:
    vehicle ()
    {
     id=0;
     modal=" ";
     brand="";
     priceday=0;
    available=true;
    }
      vehicle (int Id, string m, string b,double pd, bool a)
    {
         id=Id;
     modal=m;
     brand=b;
     priceday=pd;
    available=a;
    }
    void setid(int Id){
    id= Id;
    }
       void setmodel( string m){
      modal=m;
    }
       void setbrand(string b){
     brand=b;
    }
     void setpriceday(double pd){
        priceday=pd;
    }
      void setavailable( bool a){
        available=a;
    }
        int getid(){
        return id;
    }
     string getmodel(){
        return  modal;
    }
      string getbrand(){
       return  brand;
    }
    double getpriceday(){
         return  priceday;
    }
    bool getavailable( ){
         return  available;
    }
    void display()
    {
            cout <<"ID="<<id<< endl;
            cout <<"Model="<<modal<< endl;
            cout <<"Brand="<<brand<< endl;
            cout <<"PriceDay="<<priceday<< endl;
            if(available)
            cout <<"Available= Yes"<< endl;
            else
            cout <<"Available= No"<< endl;
    }

};
class car :public vehicle
{
    private:
    int num_of_doors;
    public:
        car (): vehicle()
        {
            num_of_doors= 4;
        }
          car (int Id, string m, string b,double pd, bool a,int doors): vehicle(Id,m,b,pd,a)
        {
            num_of_doors= doors;
        }
        void setnum_of_doors(int doors){
         num_of_doors= doors;
        }
             int getnum_of_doors(){
        return num_of_doors;
    }
        void display()
    {
     vehicle ::display();
         cout <<"Num of Doors="<<num_of_doors<< endl;
    }
};
class motocycle :public vehicle
{
    private:
    int enginecapacity;
    public:
         motocycle (): vehicle()
        {
          enginecapacity= 0;
        }
           motocycle (int Id, string m, string b,double pd, bool a,int capacity): vehicle(Id,m,b,pd,a)
        {
            enginecapacity= capacity;
        }
        void setenginecapacity(int capacity){
    enginecapacity= capacity;
        }
             int getenginecapacity(){
        return enginecapacity;
    }
        void display()
    {
     vehicle ::display();
         cout <<"EngineCapacity="<<enginecapacity<<"cc"<< endl;
    }
};
class customer
{
private:
    int id;
    string name;
    string phone;
public:
    customer ()
    {
        id=0;
        name ="";
        phone ="";
    }
        customer (int Id, string n, string p)
    {
        id=Id;
        name =n;
        phone =p;
    }
     void setid(int Id){
   id= Id;
        }
         void setname(string n){
      name =n;
        }
      void setphone(string p){
     phone =p;
        }
         int getid(){
        return id;
    }
       string getname(){
        return name;
    }
           string getphone(){
        return phone;
    }
       void display()
    {
            cout <<"ID="<<id<< endl;
            cout <<"Name="<<name<< endl;
            cout <<"Phone="<<phone<< endl;
    }
};
class rental
{
    private:
      customer c;
      vehicle* v;
      int num_of_days;
      double total_price;
    public:
        rental(   customer C, vehicle* V, int days)
        {
          c=C;
          v=V;
          num_of_days = days;
           total_price =0;
        }
        void calculate_total ()
        {
             total_price = v->getpriceday()*num_of_days;
        }
         void display()
    {
        cout<<"Customer Information"<<endl;
        c.display();
        cout<<endl;
            cout<<"Vehicle Information"<<endl;
        v->display();
        cout<<endl;
            cout <<"Number of Days="<<  num_of_days<< endl;
            cout <<"Total Price="<<total_price<< endl;
    }
};
class payment
{
private:
    double amount;
    string method;

public:
    payment()
    {
        amount = 0;
        method = "";
    }

    payment(double a, string m)
    {
        amount = a;
        method = m;
    }

    void setAmount(double a)
    {
        amount = a;
    }

    void setMethod(string m)
    {
        method = m;
    }

    double getAmount()
    {
        return amount;
    }

    string getMethod()
    {
        return method;
    }

    void display()
    {
        cout << "Amount = " << amount << endl;
        cout << "Payment Method = " << method << endl;
    }
};

int main()
{
  car c1(1,"BMW","X5",1500,true,4) ;
c1.display();
    cout<<"-------------------------"<<endl;
   motocycle m1(2,"NINJA","Kawa",1000,true,650) ;
   m1.display();
       cout<<"-------------------------"<<endl;
       customer c(1, "Fatma","0123456789");
       c.display();
          cout<<"-------------------------"<<endl;
          rental r1(c,&c1,3);
          r1.display();
          cout<<"-------------------------"<<endl;
          payment p1(4500,"Cach")  ;
          p1.display();
    return 0;
}
