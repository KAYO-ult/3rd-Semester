#include<iostream>
#include<string>

using namespace std;

class vehicle{
    private:
        int model_number;
        int price;
        int seat_capacity;
        string vehicle_type;

    public:
        void SetDetails(int mn, int p, int seat, string veh){
            model_number = mn;
            price = p;
            seat_capacity = seat;
            vehicle_type = veh;
        }

        void display(){
            cout << endl;
            cout << "Model Number : " << model_number << "\n";
            cout << "Price: " << price << "\n";
            cout << "Seat Capacity: " << seat_capacity << "\n";
            cout << "Vehicle Type: " << vehicle_type << "\n";
        }
};

int main(){
    vehicle car, bus;

    int mn, p, seat;
    string veh;

    cout << "Enter details for bus:\n";
    cout << "Model Number: ";
    cin >> mn;
    cout << "Price: ";
    cin >> p;
    cout << "Seat Capacity: ";
    cin >> seat;
    cout << "Vehicle Type: ";
    cin >> veh;
    bus.SetDetails(mn, p, seat, veh);
    bus.display();

    cout << "\n";

    cout << "Enter details for car:\n";
    cout << "Model Number: ";
    cin >> mn;
    cout << "Price: ";
    cin >> p;
    cout << "Seat Capacity: ";
    cin >> seat;
    cout << "Vehicle Type: ";
    cin >> veh;
    car.SetDetails(mn, p, seat, veh);
    car.display();

    return 0;
}