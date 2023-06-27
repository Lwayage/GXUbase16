#include <iostream>
#include <string>
using namespace std;
string transHex(int n){
    int x;
    string s;
    string t="0123456789ABCDEF";
    while(n!=0){
        x = n % 16;
        s = t[x] + s;
	n /= 16;
    }
    int l = s.length();
    if (l < 4) {
	string temp = "";
        for(int i = 0; i < 4-l; i++){
	    temp+='0';
	}
	return temp+s;
    }
    else return s;
}
string decode(string s){
    int h[5];
    for(int i=0; i < 4; i++){
        if(s[i] >= 'A'){
	    h[i] = int(s[i])-55;
	}
	else h[i] = int(s[i])-48;
    }
    int sum = (h[1]+h[3]+h[0]*16+h[2]*16)%256;
    return transHex(sum);
}
int main(){
    double money;
    int dex_money;
    
reinput:cout<<"输入想要充值的数值：(范围：[0, 655.35])"<<endl;
    cin>>money;
    dex_money=money*100;
    if(dex_money < 0 || dex_money > 65535) goto reinput;
    string temp = transHex(dex_money);
    string res="";
    res+=temp.substr(2,2)+temp.substr(0,2);
    res+="00000000000000000000000000"+decode(temp);
    cout<<res<<endl;
    return 0;
}
