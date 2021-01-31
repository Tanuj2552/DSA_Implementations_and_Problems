#include<bits/stdc++.h>
using namespace std;

int contint(string s){
	stringstream ss;
    ss << s;
    int x = 0;
    ss >> x;
    return x;
}

int main() {

    string s;
    cin >> s;
    
    int ls = s.length();
    int c = 0;
    set <int> sp,sk,sh,st;
    int p=13,k=13,h=13,t=13;
    
    for(int i = 0; i < ls; i += 0){
        string l = s.substr(i,1);
        //cout << l << endl;
        string no = s.substr(i+1,i+2);
        int x = contint(no);
        //cout << x << endl;
        if(l == "P"){ //cout << "cool" ;
            if(sp.find(x) != sp.end()){cout << "ERROR" ; c = 1; break;}
            sp.insert(x);
            p--;
        }
        else if(l == "K"){
            if(sk.find(x) != sk.end()){cout << "ERROR" ; c = 1; break;}
            sk.insert(x);
            k--;
        }
        else if(l == "H"){
            if(sh.find(x) != sh.end()){cout << "ERROR" ; c = 1; break;}
            sh.insert(x);
            h--;
        }
        else if(l == "T"){
            if(st.find(x) != st.end()){cout << "ERROR" ; c = 1; break;}
            st.insert(x);
            t--;
        }
           
        i += 3;
        if((i > ls) || (i==ls)){break;}
    }
    
    if(c!=1){cout << p << " " << k << " " << h << " " << t << endl;}
    
}
