#include <iostream>
using namespace std;

void menu()
{
  cout << "Press 1 for Addition"<<endl;
  cout << "Press 2 for Subtraction"<<endl;
  cout << "Press 3 for Multiplication"<<endl;
  cout << "Press 4 for Division"<<endl;
  cout <<"Press 5 to exit"<<endl;
}
void result(int choice, int a, int b)
{
  switch (choice)
  {
    case 1:
    {
      cout << "Sum is "<< (a+b)<<endl;
      break;
    }
    case 2:
    {
      cout << "Difference is "<< (a-b)<<endl;
      break;
    }
    case 3:
    {
      cout << "Product is "<< (a*b)<<endl;
      break;
    }
    case 4:
    {
      cout << "Quotient is "<< (a/b)<<endl;
      break;
    }
    case 5:
    {
      cout << "Goodbye"<<endl;
      break;
    }
    default:
      cout<<"Wrong Input"<<endl;
  }
}
int main()
{
  int a,b, choice;

  menu();

  cout<<"Enter your choice:"<<endl;
  cin>>choice;
  cin>>a;
  cin>>b;


  result(choice, a, b);
  return 0;

}