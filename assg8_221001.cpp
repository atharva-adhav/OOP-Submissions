#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   fstream file;


   file.open("MyFiles.txt",ios::out);

   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }

   cout<<"File created successfully."<<endl;

   file<<"Atharva Adhav, SY BTech Comp A, VIIT, PUNE \n";

   file.close();


   file.open("MyFiles.txt",ios::in);

   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }


   string str;
   cout<<"File content: \n";

   getline(file, str, '\n');
   cout << str;

   file.close();

   return 0;
}
