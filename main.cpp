#include <iostream>
using namespace std;
int main() {

    int n=0,a=1,b=1,c=1;

    cin>>n;

    if (n>=2)
    {
        cout<<a<<"\n"<<b<<"\n";

        for(int i=2;i<n;i++){

            c=a+b;
            cout << c << std::endl;
            a=b;
            b=c;
        }

    }
    else
        cout << "errore" << endl;
    return 0;
}
