#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	string spells; 

	int health = 100;
	const int MAX_HEALTH = 100;
	string spell = "";

	Player() {
		cout << "Player has been constructed" << endl;
	}
	~Player() {
		cout << "Player has been deconstructed" << endl;
	}
	bool Find_Spell = false;
};



class item // class for items / using items 
{
public:
	item() {
		cout << "inventory active" << endl; // class start
	}
	~item() {
		cout << "inventory closed" << endl; 
	}
		string magic_book = " ";

		//input use inside of inventory function when i make it
		void Use(int item) { // use command, when user inputs the word use or item or smthn,
								//it shows all avaliable items and gives them a use promt
			cout << "\nhere are your items, select the item you would like to use by entering the numbers on your keyboard." << endl;
			cout << magic_book << endl; // add all items here 1!!!!1!!!1
			// MAKE THIS VOID TO JUST VIEW ITEMS OR SOMETHING, ITEMS NEED TO BE WHOLE SEPERATE CLASS
			cin >> item; 
			switch (item){
			case 1:
				cout << magic_book << endl;
				cout << "\n to view your unlocked magic, type spells in the console." << endl; // telling user to accsess spells calss
			
			}
		}

};



class Room
{
public:
	
	Room() { cout << "You have entered the dungeon... \n\n" << endl; }
	~Room() { cout << "\n\nYou are leaving the dungeon... \n\n" << endl; }

	
	void Item_room() {
		int choice;
		cout << rom_descript;
		for (int i = 0; i < 2;) {
			cout << "The items in this room are ----" << item_1 << "---- and ----" << item_2 << "----" << endl; // displaying items in each room
			cout << "Type    1    or    2    to examine each item.\n" << endl; // user input
			cin >> choice;
			switch (choice) { // switch to see what they looekd at
			case 1:
				i++; // so the loop can repeat twice, and they get the chance to look at both options
				cout << descript_1 << endl; // says description of the item in whatever room they are in
				break;
			case 2:
				i++;
				cout << descript_2;
				break;
			}
		}
	}

    int room_num = 1; 
	int room_go = 0;
	 string rom_descript = "";

	 string item_1 = "";
	bool chose_1 = false;
	 string descript_1 = "";

	 string item_2 = "";
	bool chose_2 = false;
	 string descript_2 = "";

	void room_A() {
		rom_descript = "\nYou awake on a bed of stone, distant memories of beautiful colours flash in your mind,\nonly for you to open your eyes to darkness\n\n";
		item_1 = "Hole";
		chose_1 = false;
		descript_1 = "\nyou examine the hole, the slimey sides and the slight dripping of water indicate that it used to be a well.\n\n";
		item_2 = "Mysterious book";
		chose_2 = false;
		descript_2 = "\nyou examine the notebook, as you wipe off dust and rocks off of the cover you're able too read \n'wizard 101... tips, tricks and more!'\n\n";
	}

	void room_B() {
		rom_descript;
		item_1;
		chose_1;
		descript_1;
		item_2;
		chose_2;
		descript_2;

	}
	
	void Move() {
		string direction;
		switch (room_num) {
		case 1: // room a
			cout << "To change rooms type ---- North---- for example" << endl;
			cout << "You can move ---North -- East -- South -- West---\n" << endl;
			cin >> direction;
			if (direction == "North") {
				room_go = 2;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "East") {
				room_go = 3;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "South") {
				room_go = 4;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "West") {
				room_go = 5;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else{
				cout << "@@##ERROR##@@ Make sure you use capitals for ' West' or other directions and make sure you spell correctly\n\n" << endl;
			}
			break;
		case 2:
			cout << "To change rooms type --- North --- for example" << endl;
			cout << "You can move ---East -- South---" << endl;
			cin >> direction;
			if (direction == "East") {
				room_go = 3;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "South") {
				room_go = 1;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else{
				cout << "@@##ERROR##@@ Make sure you use capitals for 'Move West' or other directions and make sure you spell correctly\n\n" << endl;
			}
			break;
		case 3:
			cout << "To change rooms type ---- North---- for example" << endl;
			cout << "You can move ---South -- South West -- West---\n\n" << endl;
			cin >> direction;
			if (direction == "South") {
				room_go = 4;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "West") {
				room_go = 2;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "South West") {
				room_go = 1;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else{
				cout << "@@##ERROR##@@ Make sure you use capitals for 'Move West' or other directions and make sure you spell correctly\n\n" << endl;
			}
				break;
			
		case 4:
			cout << "To change rooms type ---- North---- for example" << endl;
			cout << "You can move ---North -- North West---\n\n" << endl;
			cin >> direction;
			if (direction == "North") {
				room_go = 3;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else if (direction == "North West") {
				room_go = 1;
				cout << "You are going to --" << room_go << "--" << endl;
			}
			else{
				cout << "@@##ERROR##@@ Make sure you use capitals for 'Move West' or other directions and make sure you spell correctly\n\n" << endl;
			}
			break;
			
		}
		room_num = room_go; 
    
	}
	
	// make when room_num changes call another function for the room it changes too






};





int main()
{
	Room* Room_start = new Room;
	Room_start->room_A();
	Room_start->Item_room();
	Room_start->Move();
	
	delete Room_start;
	Room_start = nullptr;
	cout << "end code" << endl;
}