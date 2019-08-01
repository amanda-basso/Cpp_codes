/* This code shows the basics of how to create a class "Time" with the attributes "Hour", "Minute" and "Second",
verifying if the values passed (if passed) are valuable. If not, they are set as a pre-defined default value.*/
#include <iostream>

using namespace std;

class Hour{
public:
    Hour(){
        hour = 12;
        minute = 12;
        second = 12;
    }
    Hour(int hour, int minute, int second){
        setHour(hour);
        setMinute(minute);
        setSecond(second);
    }
    ~Hour(){
    }
    void setHour(int hour){
        if (hour >= 0 && hour < 24)
            this->hour = hour;
        else{
            this->hour = 12;
            cout << "Invalid hour. Adjusted to 12." << endl;
        }
    }
    void setMinute(int minute){
        if (minute >=0 && minute < 60)
            this->minute = minute;
        else {
            this->minute = 12;
            cout << "Invalid minute. Adjusted to 12" << endl;
        }
    }
    void setSecond(int second){
        if (second >=0 && second < 60)
            this->second = second;
        else {
            this->second = 12;
            cout << "Invalid second. Adjusted to para 12." << endl;
        }
    }
    int getHour(){
        return hour;
    }
    int getMinute(){
        return minute;
    }
    int getSecond(){
        return second;
    }
    void displayTime(){
        cout << "Time: " << endl << getHour() << " : " << getMinute() << " : " << getSecond() << endl;
    }
private:
    int hour;
    int minute;
    int second;
};

int main()
{
    Time Brazil_time;
    Time Germany_time;

    Brazil_time.setHour(23);
    Brazil_time.setMinute(48);
    Brazil_time.setSecond(59);
    
    // Shows the time with the default values
    cout << "Time in Germany:" << endl;
    Germany_time.displayTime();
    cout << endl;
    
    // Shows the time with the passed values
    cout << "Time in Brazil: " << endl;
    Brazil_time.displayTime();
    
    return 0;
}
