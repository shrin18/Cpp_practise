#include <iostream>
#include <memory>

#include <array>
#include <chrono>


using namespace std;

class Timer{
    public:
        Timer()
        {
            chrono::high_resolution_clock::now();
        }

        ~Timer()
        {
            Stop();
        }

        void Stop()
        {
            auto endTimepoint = chrono::high_resolution_clock::now();
            
            auto start = chrono::time_point_cast<chrono::microseconds>(m_startTimepoint).time_since_epoch().count();
            auto end = chrono::time_point_cast<chrono::microseconds>(endTimepoint).time_since_epoch().count();

            auto duration = end - start;
            double ms = duration * 0.001;

            cout << duration << "us\n";
            cout << ms << "us\n";

        }
    private:
        chrono::time_point < chrono::high_resolution_clock > m_startTimepoint;
};

int main(){

    struct Vector2{
        float x,y;
    };



    array<shared_ptr<Vector2>, 100000> sharedPtrs;
    for(int i=0;i<sharedPtrs.size();i++){
        sharedPtrs[i]=shared_ptr<Vector2>(new Vector2());
    }

    int value=0;
    {
        Timer timer;   
        for(int i=0; i<1000000; i++)
            {
                value += 2;
            }
    }

    cout << value << endl;

    __debugbreak();


}