#include <iostream>
using namespace std;

class Entity {
    public:
    string GetName(){
        return "Entity";
    }
};

class player :public Entity{
    private:
  string mName;  

  public:
  player(const string& name):mName(name){}

  string GetName(){return mName;}
};
void printName(Entity* entity){
    cout<<entity->GetName()<<endl;
}


int main(){
    Entity* e = new Entity();
    printName(e);

    player* p=new player("chern");
    printName(p);
    
    // Entity* e = new Entity();
    // cout<<e->GetName()<<endl;

    // player* p=new player("chern");
    // cout<<p->GetName()<<endl;

    // Entity* entity=new player("chern");
    // cout<<entity->GetName()<<endl;

    return 0;

}
