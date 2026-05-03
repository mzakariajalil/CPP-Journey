#include <iostream>
using namespace std;

class printable{
    public:
    virtual string getClassName()=0;
};

class Entity :public printable {
    public:
    string GetName(){
        return "Entity";
    }
    string getClassName() override{return "Entity";}
};

class player :public Entity{
    private:
  string mName;  

  public:
  player(const string& name):mName(name){}
  string GetName(){return mName;}

      string getClassName() override{return "player";}

};
void printName(Entity* entity){
    cout<<entity->GetName()<<endl;
}

void print(printable* obj){
    cout<<obj->getClassName()<<endl;
}

int main(){
    Entity* e = new Entity();
    //printName(e);

    player* p=new player("chern");
   // printName(p);
    print(e);
    print(p);
    

    return 0;

}