#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstring>
//#include<array>
// Add any extra import statements you may need here

using namespace std;

// encrypt string S
//create memory for the resulting encrypted string R
//Check to see if even or odd numbers of characters
//copy into char array



string findEncryptedWord(string s) {
  //find  lenth of string
  int lenth;
  lenth = s.length();
  bool even = false;
  string output;
  int middle;
  string temp;
  string lefttemp;
  string righttemp;
 
  cout << "[\"lenth is " << lenth << "\"]\n";
  cout << " current string "  <<output <<  "\n";

  //if lenth is even devide by 2 and  shift left one
  if ( lenth % 2 == 0)
  {
    cout << lenth << " is even.\n";
    middle = (lenth/2)-1;
    even = true;
    cout << " the middle of even chars is "  << s[middle]  <<  "\n";
    temp = s.substr (middle,1);
    cout << " the sub of even chars is "  << temp  <<  "\n";
     output= output + temp;
  }
  else{
  cout << lenth << " is odd.\n";
  middle = (lenth/2);
  cout << " the middle of odd chars is "  << s[middle]  <<  "\n";
   temp = s.substr (middle,1);
   cout << " the sub of odd chars is "  << temp  <<  "\n";
   output= output + temp;
  }
  
  //find middle of input string
  // Copy middle character to output
  //Concatenates string s2 onto the end of string output.
  // strcat(output, temp);
 
  cout << " new string "  <<output <<  "\n";
  
  //copy all elements to to left and 2 the right
 lefttemp = s.substr (0,middle);
  righttemp=s.substr (middle+1, lenth);
   cout << " lefttemp "  << lefttemp << " and lefttemp size " << lefttemp.length() <<"\n";
   cout << " righttemp "  << righttemp << " and righttemp size " << righttemp.length() <<"\n";
 
  
//recusively keep going  
if(lefttemp.length()>1)
{
  cout << " starting left temp " << lefttemp <<" w new string "  << output <<  "\n";
  findEncryptedWord(lefttemp);
}
else
  output= output + lefttemp;
  
 if(righttemp.length()>2)
{
   cout << " starting right temp w new string "  <<output <<  "\n";
  findEncryptedWord(righttemp);
}
else
  output= output + righttemp;
 
  

  return output;
}
