#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include<windows.h>
#include<minmax.h>
#include <time.h>
#include <ctime>
#include<fstream>
using namespace std;


int main(){
	  ofstream myfile;
	vector<int> info;
	string message="INKI808.Marija.Tashevska";
	string address;
	int n1 = 0;
    int n2 = 0;
	int n3 = 0;
//ispishuvanje na poraka na pochetok na programa
	cout<<message<<endl;
//vnesuvanje na e-mail adresa koja se koristi na fakultet
	cout<<"Vnesi ja tvojata e-mail adresa: "<<endl;
	cin>>address;
//pechatenje na podatocite vo normalen oblik
	cout<<"Tvoite podatoci se: "<<address<<" "<<message<<endl;

	n1 = message.length();
    n2 = address.length();
//vmetnuvanje na podatocite vo vektor 
    if(n1 > n2){
						for(int i = 0; i < n1; i++)
						{
							n3 = int(message.at(i));
							info.push_back(n3); 
					        
					        	if(n2 > i){
					        n3 = int(address.at(i));
							info.push_back(n3);
					        				}
						}
	} 					else{
					        	for(int i = 0; i < n2; i++){
					                
					            if(n1 > i){
					                n3 = int(message.at(i));
					                info.push_back(n3);
					                    }
					                    
					        n3 = int(address.at(i));
							info.push_back(n3);
					        
														} 
    						} 
//vnesuvanje na rodendenot preku tastatura i vmetnuvanje na istiot vo vektorot
    	cout<<"\n\n Vnesi go tvojot datum na ragjanje:";
		for(int i = 0; i < 3; i++){
		cin>>n3;
		info.push_back(n3);
		}
	
    n1 = info.size();
//pecatenje na vektorot koj gi sodrzi site podatoci vo ASCII code
    cout<<"\n\nTvoite podatoci vo ascii kod se:"<<endl;
	for(int i = 0; i < n1; i++){
		cout<<info.at(i)<<" ";
	}
//sortiranje na ASCII kodot na vektorot spored golemina
	sort(info.begin(), info.end()); 

    cout<<"\n\n\nSortiranite podatoci se: "<<endl;
	for(int i = 0; i < n1; i++){
		cout<<info.at(i)<<" ";
	}
//vnesuvanje na site podatoci vo nadvoreshen fajl
  myfile.open ("INKI808-MarijaTAshevska.txt");
  myfile <<message<<endl;
  myfile<<address<<" "<<n3<<endl;
  myfile.close();
	system("EXIT SUCCESS");
	return 0;
}
