#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float mean, sd, sdii, sum = 0;
    string textline;
    ifstream source("score.txt");

    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sd += pow(atof(textline.c_str()),2);
        count++;
    }

    mean = sum/count;
    sdii = sqrt((sd/count) - pow(mean,2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sdii << endl;
}