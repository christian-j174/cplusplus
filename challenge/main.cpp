
#include <iostream>
#include<iomanip>
using namespace std;

const int N = 5;


class Performer
{
private:
const int N = 5;
string name;
double scores[5];

public:
void setWidth(double);
void setLength(double);
double getWidth() const;
double getLength() const;
double getArea() const;
};



int findLowest(double* arr)
{
    double min = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return (int)min;
}


int findHighest(double* arr)
{
    double max = arr[0];
    for(int i = 0; i < N; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return (int)max;
}


void calcScore(double* arr)
{
    double sum = 0.0;
    for(int i = 0; i <N; i++)
        sum += arr[i];
    double highest = findHighest(arr);
    double lowest = findLowest(arr);
    sum -= (highest + lowest);
    double avg = ((double)sum / 3.0);
    cout << setprecision(2) << fixed << avg << endl;
}


void getJudgeData(double &score)
{
    cout << "Enter a score: " << endl;
    cin >> score;
    while (score < 0 || score > 10)
    {
        cout << "Score should be between 0 and 10!\n";
        cout << "Enter a score: ";
        cin >> score;
    }
}


int main()
{
    double* arr;
    arr = new double[5];
    for (int i = 0; i < N; i++)
    {
        double score;
        getJudgeData(score);
        arr[i] = score;
    }
    cout << "\nHighest score = " << findHighest(arr) << endl;
    cout <<"\nLowest score = " << findLowest(arr) << endl;
    cout << "Score after dropping the highest and the lowest scores = ";
    calcScore(arr);
    cout << endl;
    return 0; 
}

