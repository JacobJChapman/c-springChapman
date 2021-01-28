#include <iostream>

using namespace std;

int main() {
  int roomCapacity;
  int meetingAttendees;
  int exceedingCapacity;
  //enter integers
  cout << "Enter the maximum room capacity for the meeting room:" << endl;
  cin >> roomCapacity;
  cout << "Per fire safety laws, the room can only hold " << roomCapacity << "." << endl;
  cout << "Enter how many attendees will be at the meeting:" << endl;
  cin >> meetingAttendees;
  //find out the difference in attendees and capacity
  //simply determine which is higher
  exceedingCapacity = meetingAttendees - roomCapacity;
  if (meetingAttendees > roomCapacity) {
    cout << "The meeting cannot commence legally with " << exceedingCapacity << " people exceeding capacity limit." << endl << "Therefore the meeting cannot start as planned." << endl;
  }
  else {
    cout << "The meeting attendee amount remains within fire safety regulations, therefore the meeting is legal and can proceed as planned." << endl;
  }

  return 0;

}
