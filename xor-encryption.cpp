#include<iostream>
#include<string>
using namespace std;
//xor þifreleme
string XOR(string data, char key[]){
	string xorstring = data;
	for(int i = 0; i<xorstring.size();i++){
		xorstring[i] = data[i] ^ key[i % (sizeof(key)/sizeof(char))];
	}
	return xorstring;
}

int main(){
	char key[3] = {'K','E','Y'};
	cout<<XOR("lemon",key);
	return 0;
}
