#include<iostream>
#include<math.h>
using namespace std;

double B(double a,double h){
       //double hasil = h/2*((2*(pow(a,2)-1))+(2*(pow(a+h,2)-1)));
       double x;
	   double hasil = h/2 *((x*x)-(6*x)+10);
	   return hasil;
       }
       
int main(){
	
    double a=1,b,h;
    int n;
    double luas=0;
    cin>>b>>n;
    
    h = (b-a)/n;
    for(int i=0;i<n;i++){
            luas+=B(a,h);
			a+=h;
            }
        
            
    cout<<luas<<endl;
    
    system("pause");
   
    
}
