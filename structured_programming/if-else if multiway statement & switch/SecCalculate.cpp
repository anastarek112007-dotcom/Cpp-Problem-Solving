#include <iostream>
#include <iomanip>
using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 3600;
const int SECONDS_PER_DAY = 86400;

int main()
{
  // استقبال مدخلات طويلة
  long long totalSecondsInput;
  long long remainingSeconds;

  int Days, Hours, Minutes, Seconds;

  cout << "Enter number of Secondes\n";
  cin >> totalSecondsInput;

  // processing
  remainingSeconds = totalSecondsInput;

  Days = totalSecondsInput / SECONDS_PER_DAY;
  remainingSeconds %= SECONDS_PER_DAY;

  Hours = remainingSeconds / SECONDS_PER_HOUR;
  remainingSeconds %= SECONDS_PER_HOUR;

  Minutes = remainingSeconds / SECONDS_PER_MINUTE;
  Seconds %= SECONDS_PER_MINUTE;
  // Output
  cout << "\n--- Conversion Result ---\n\n\n";
  cout << "Total Seconds: " << totalSecondsInput << "\n\n";
  cout << "This is equivalent to:\n";
  cout << Days << " days \n"
       << Hours << " hours \n"
       << Minutes << " minutes and "
       << Seconds << " seconds.\n\n";
  cout << "-------------------------\n\n\n";

  return 0;
}