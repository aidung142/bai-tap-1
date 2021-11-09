#include <iostream>
using namespace std;
 
void sosanh(string s1, string s2)
{
 
    if (s1 != s2)
    {
        cout << s1 << " khong bang " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " hon " << s2 << endl;
        else
            cout << s2 << " hon " << s1 << endl;
    }
    else
        cout << s1 << " bang " << s2 << endl;
}
 
// Driver code
int main()
{
	string s1,s2;
   while(true){
			cout<<"Nhap chuoi s1:"; cin>>s1;
			cout<<"Nhap chuoi s2:"; cin>>s2;
		for(int i=0;i<s1.length(); i++){
			if(s1[i]<'0'||s1[i]>'9'){
					cout<<"Chuoi khong hop le";
					return 0;
				}
				}
   sosanh(s1, s2);
    return 0;
}
}
