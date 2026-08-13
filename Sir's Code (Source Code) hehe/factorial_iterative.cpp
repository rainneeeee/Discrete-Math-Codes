#include<iostream>

using namespace std;

int main() {
    double ctr=1, n, fact =1;

    cout<<"\n\n\n\t\t\t PLEASE ENTER THE VALUE OF N:        ";
    cin>> n;
    
    while (ctr<=n) {	
        fact = fact * ctr; 
        cout<<"\n\t\t\t The FACTORIAL OF " << ctr <<" IS:  " << fact << endl;
        ctr++;	
    }

    return 0;
}