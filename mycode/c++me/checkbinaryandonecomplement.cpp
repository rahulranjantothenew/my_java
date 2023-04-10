#include<iostream>
#include<string>
using namespace std;
class binary {
    string s;
    public:
    void read(void);
    void chkbin(void);
    void onescompliment(void);
    void display(void);
};
void binary::read(void){
    cout<<"enter a binary number="<<endl;
    cin>>s;
}
void binary::chkbin(void) {
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary formet";
            exit(0);
        }
    }
}
void binary::onescompliment(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }else{
            .+
            s.at(i)='0';
        }
    }
}
void binary::display(void){
    cout<<"displaying your binary number="<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    b.chkbin();
    b.onescompliment();
    b.display();
    return 0;
}