#include <iostream> 
using namespace std;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){
  Day today = thursday;
  
  switch (today){
    case sunday:
      cout << "Today is Sunday\n";
      break;
    case monday:
      cout << "Today is Monday\n";
      break;
    case tuesday:
      cout << "Today is Tuesday";
      break;
    case wednesday:
      cout << "Today is Wednesday\n";
      break;
    case thursday:
      cout << "Today is Thursday\n";
      break;
    case friday:
      cout << "Today is Friday\n";
      break;
    case saturday:
      cout << "Today is Saturday\n";
      break;
  }
  
  
  return 0;
}