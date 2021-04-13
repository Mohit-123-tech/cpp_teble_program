#include<iostream>
using namespace std;

class tab {
    public:
    void table(){
        long long int n;
        cout<<"Enter a value --> ";
        cin>>n;
        cout<<"        =================table================"<<endl;
        for(long long int i=1; i<=10; i++){
            cout<<n<<" * "<<i<<" = "<<i*n<<endl;
        }
    }
};

int main(){
    tab t;
    t.table();
    return 0;
}