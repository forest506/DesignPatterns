
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class TimeImp {
  public:
    TimeImp(int hr, int min) {
        hr_ = hr;
        min_ = min;
    }
    virtual void tell() {             
        std::cout << "time is:" << hr_ << min_ << std::endl;  
    }
  protected:
    int hr_, min_;
};

class CivilianTimeImp: public TimeImp {
  public:
    CivilianTimeImp(int hr, int min, int pm): TimeImp(hr, min) {
        if (pm)
        {
          apm_ = "PM";
        }
        else
        {
          apm_ = "AM"; 
        }                  
    }

    /* virtual */
    void tell() {
        std::cout << "time is " << hr_ << ":" << min_ << apm_ << endl;
    }
  protected:
    std::string apm_;;
};

class ZuluTimeImp: public TimeImp {
  public:
    ZuluTimeImp(int hr, int min, int zone): TimeImp(hr, min) {
        if (zone == 5)
          zone_ = "Eastern Standard Time";
        else if (zone == 6)
          zone_ = "Central Standard Time";
    }

    /* virtual */
    void tell() {
        std::cout << "time is " << hr_ << min_ << zone_ <<
          endl;

    }
  protected:
    std::string zone_;
};

class Time {
  public:
    Time(){}
    Time(int hr, int min) {
        imp_ = new TimeImp(hr, min);
    }
    virtual void tell() {
        imp_->tell();
    }
  protected:
    TimeImp *imp_;
};

class CivilianTime: public Time {
  public:
    CivilianTime(int hr, int min, int pm) {
        imp_ = new CivilianTimeImp(hr, min, pm);
    }
};

class ZuluTime: public Time {
  public:
    ZuluTime(int hr, int min, int zone) {
        imp_ = new ZuluTimeImp(hr, min, zone);
    }
};

