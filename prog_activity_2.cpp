#include <iostream>
#include <utility> // Include for swap function
using namespace std;

struct Time {
    int hour;
    int mins;
    int secs;
};

Time findTimeDifference(Time t1, Time t2);

int main() {
    Time t1, t2, diff;

    // Get first time 
    cout << "Enter first time (hours minutes seconds): ";
    cin >> t1.hour >> t1.mins >> t1.secs;

    // Get second time 
    cout << "Enter second time (hours minutes seconds): ";
    cin >> t2.hour >> t2.mins >> t2.secs;

    // Ensure t1 is the later time
    if (t1.hour < t2.hour || 
        (t1.hour == t2.hour && t1.mins < t2.mins) || 
        (t1.hour == t2.hour && t1.mins == t2.mins && t1.secs < t2.secs)) {
        swap(t1, t2); // Swap if t2 is later
    }

    diff = findTimeDifference(t1, t2);

    cout << "Time Difference = " << diff.hour << ":" << diff.mins << ":" << diff.secs << endl;
    return 0;
}

Time findTimeDifference(Time t1, Time t2) {
    Time diff;

    if (t2.secs > t1.secs) {
        --t1.mins;
        t1.secs += 60;
    }
    diff.secs = t1.secs - t2.secs;

    if (t2.mins > t1.mins) {
        --t1.hour;
        t1.mins += 60;
    }
    diff.mins = t1.mins - t2.mins;
    diff.hour = t1.hour - t2.hour;

    return diff;
}