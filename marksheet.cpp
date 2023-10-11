#include <iostream>
using namespace std;
int main() {
	// user name input
   string fullName;
   cout << "Type your full name:";
   getline (cin, fullName);
   
   // user class input
   string className;
   cout << "Type your class name:";
   getline (cin, className);
   
   //marks of user input
   
   //english marks input
   int eng;
   cout << "Please Enter Your English marks";
   cin >> eng;
   
   //Math marks input
   int math;
   cout << "Please Enter Your Math marks";
   cin >> math;
   
   //Chemistry marks input
   int chemistry;
   cout << "Please Enter Your chemistry marks";
   cin >> chemistry;
   
   //Physics marks input
   int Physics;
   cout << "Please Enter Your physics marks";
   cin >> Physics;
   
   //total & percentage output
   
   //username and class printing output  
   cout << "/\--------------------------------/\ \n";
   cout << "Your name is: " << fullName << "\n";
   cout << "Your class is: " << className << "\n";
   
   //total marks formula and output
   float avg = eng+math+chemistry+Physics;
   //total marks printing output   
   cout << "Your Total Marks Are: " << avg << "\n";
   
   //percentage formula and output
   int perce = (avg/400)*100;
   //total marks printing output    
   cout<<"Percentage Marks: "<<perce<<"%";
}
