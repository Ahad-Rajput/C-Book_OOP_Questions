/* Write a class Run that contains the following attributes:
> The name of the runner
> The distance covered by a runner.
The class has the following member functions: 
> Get function to input runner name and distance.
> Show function to displays runner name and distance.
The user should be able to show the name of the runner who has covered the longest distance at any point of time.
(Hint: Use static data members.)
*/

#include <iostream>
#include <string>

using namespace std;

class Run{
private:
    string name;
    float distance;

    static string top_Runner_Name;
    static float longest_Distance;
public: 
    void get(){
        cout <<"Enter Runner's name : ";
        getline(cin, name);
        cout << "Enter distance covered by " << name << " (in km) : ";
        cin >> distance;
        cin.ignore();

        // Check if this runner has covered the longest distance
        if (distance > longest_Distance)
        {
            longest_Distance = distance;
            top_Runner_Name = name;
        }
    }


    void show(){
        cout << "Runner's Name : " << name << endl;
        cout << "Distance covered by " << name << " (in km) : " << distance << endl;
    }

    static void topRunner(){
        if (longest_Distance > 0)
        {
            cout <<"\n----Runner with longest distance----\n";
            cout << "Runner's Name : " << top_Runner_Name << endl;
            cout << "Longest distance : " << longest_Distance << endl;
        }
        else
        {
            cout << "No runner data available yet !" << endl;
        }
    }
};

string Run::top_Runner_Name = "\0";
float Run::longest_Distance = 0;

int main() {
    int n;
    cout << "\n\n--------------------------------------------\n\n";
    cout << "Enter the number of runners: ";
    cin >> n;
    cin.ignore();

    Run runners[n];

    // Get details of each runner
    for (int i = 0; i < n; i++) {
        cout << "\n--- Runner " << i+1 << " ---" << endl;
        runners[i].get();
    }

    cout << "\n\n--------------------------------------------\n\n";

    // Display details of all runners
    cout << "\n--- All Runners' Details ---" << endl;
    for (int i = 0; i < n; i++) {
        runners[i].show();
    }

    cout << "\n\n--------------------------------------------\n\n";

    // Display the runner with the longest distance
    Run::topRunner();

    cout << "\n\n--------------------------------------------\n\n";

    return 0;
}