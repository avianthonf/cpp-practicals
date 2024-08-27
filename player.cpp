/*Create a class called player with the following variables: player_name, address, age, height. 
Initialize the above instance variables using a constructor. use static members to count the number of objects created
and display the count. Also include  a display method to display the player details.*/

# include <iostream>
using namespace std;

class Player
{
    private:
        string name, address;
        int age;
        float height;
        

    public:
        static int count;

        Player(string n = "", string addr = "", int a = 0, float h = 0)
        {
            count++;

            name = n;
            address = addr;
            age = a;
            height = h;
        }

        void displayDetails()
        {
            cout << "Name: " << name << endl << "Address: " << address << endl
            << "Age: " << age << endl << "Height: " << height << endl;
        }


};

int Player::count = 0;


int main()
{
    Player avi("Avinash", "Mapusa", 20, 171), a, b, c, d;

    avi.displayDetails();

    cout << Player::count << " Instances of Player created" << endl;

}