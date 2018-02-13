//Authors:Pachia Vang 
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first, last;  
  //get user input
  cout<<"What is your first name?\n"; 
  cin>>first;
  cout<< "What is your last name?\n";
  cin>>last;
  
  string word = first; 
  string letter = last;
  cout<<"Welcome, "<< word[0]<< "."<< letter[0]<< ". here is your fortune... " <<endl;
  
  //tell fortune

  return 0;
}
