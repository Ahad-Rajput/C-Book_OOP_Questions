// Write a class Player that contains attributes for the player's name, average and team. Write three functions to input, change and display these attributes. Also write a constructor that asks for input to initialize all the attributes.


#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string pname;
    float avg;
    string team;
public:
    // Constructor to initialize all the attributes
    Player(){
        cout << "Enter player's name : ";
        getline(cin, pname);
        cout << "Enter player's average : ";
        cin >> avg;
        cin.ignore();
        cout << "Enter player's team : ";
        getline(cin, team);
    }

    // Function to input player attributes (can be used to re-input or update)
    void input(){
        cout << "Enter player's name : ";
        getline(cin, pname);
        cout << "Enter player's average : ";
        cin >> avg;
        cin.ignore();
        cout << "Enter player's team : ";
        getline(cin, team);
    }

    // Function to change player attributes
    void change(string newName, float newAvg, string newTeam){
        pname = newName;
        avg = newAvg; 
        team = newTeam;
    }

    // Function to display player attributes
    void display(){
        cout << "Player's Name : " << pname << endl;
        cout << "Player's Average : " << avg << endl;
        cout << "Player's Team : " << team << endl;
    }
};

main()
{
    Player player1;

    // Displaying initial details
    cout << "\n\t.....Player Details.....\n\n";
    player1.display();

    // Changing player details
    cout << "\n\t.....Changing Player Details.....\n\n";
    player1.change("Shahid Afridi", 4.8, "Pakistan");
    player1.display();

    // Re-input player details
    cout << "\n\t.....Input New Player Details.....\n\n";
    player1.input();
    cout <<"\n\n";
    player1.display();

}