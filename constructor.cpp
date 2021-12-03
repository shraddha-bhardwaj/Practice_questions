#include <bits/stdc++.h>

using namespace std;
class Product{
    int id;
    int cp;
    int sp;
    char name[100];
public:
      Product(){
          cout<<"non parameterized constructor"<<endl;
      }
      Product(int id,char const* n,int cp,int sp){
          cout<<"parameterized"<<endl;
          this->id=id;
          this->cp=cp;
          this->sp=sp;
          strcpy(name,n);
          
      }
      void setcp(int price){
         cp=price;
          
      }
      void setsp(int price){
         sp=price;
          
      }
        int getcp(){
            cout<<id<<endl;
        return cp;
    }
         int getsp(){
             cout<<name<<endl;
      return sp;
    }
    
};

int main()
{
    Product shraddha(42,"shraddhaaaaa",25000,26000);
    Product obj;
    obj.setsp(72);
    cout<<shraddha.getcp()<<obj.getsp()<<endl;

    return 0;
}
