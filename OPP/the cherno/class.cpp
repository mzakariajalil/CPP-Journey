#include<iostream>
using namespace std;

class Log{
    public:
    const int logLevelError=0;
    const int logLevelWarning=1;
    const int logLevelInfo=2;
    private:
    int m_logLevel=logLevelInfo;

    public:
    void setLogLevel(int level){
        m_logLevel=level;
    }

    void warning(const char* messege){
        if(m_logLevel>=logLevelWarning)
        cout<<"warning: "<<messege<<endl;
    }
    void error(const char* messege){
        if(m_logLevel>=logLevelError)
        cout<<"error: "<<messege<<endl;
    }
     void info(const char* messege){
        if(m_logLevel>=logLevelInfo)
        cout<<"Info: "<<messege<<endl;
    }
};


int main()
{
    Log log;
    log.setLogLevel(log.logLevelError);
    log.warning("hello");
    log.error("hello");
    log.info("hello");

    return 0;
}
