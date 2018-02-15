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
  

  cout<<"Welcome, "<< first[0]<< "."<< last[0]<< ". here is your fortune... " <<endl;

  int lucky = first.length(); 
 
  //tell fortune
 
  cout<<"Your Lucky Number Is " << lucky <<endl; 
  if ( first[0] == 'a' || first[0] == 'e'|| first[0] == 'i' || first[0] == 'o' || first[0] == 'u'|| first[0] == 'A' || first[0] == 'E' || first[0] == 'I' || first[0] == 'O' || first[0] == 'U' ) 
  { cout<< "You are destined to be famous.\n"; 
  }
 else   
 { cout<< "You should keep a low profile.\n"; 
}

int ending = last.length();
if ( last[ending - 1]  == 'a' || last[ending - 1] == 'e' || last[ending - 1] == 'i'  || last[ending - 1] == 'o' || last[ending - 1] == 'u' || last[ending - 1] =='A'
|| last[ending - 1] == 'E' || last[ending - 1]  == 'I' || last[ending - 1]  =='O' || last[ending - 1]  == 'U' ) 
{ cout<< "You have already met your true love.\n"; 
 }
 return 0;
 }

