#include <iostream>
#include <string>

using namespace std;


//when player types use on notebook page, get the player to flip it over and find another spell on the back of it
// fighting system, spell system, do all of the string stuff
// make a look function to let player see items in the room, using string stuff
// make a move function using the string stuff so player can move whenever, except in battle


class Player
{
public:
	int health = 100;
	const int MAX_HEALTH = 100;
	int damage = 10;


	Player() {
		cout << "Player has been constructed" << endl;
	}
	~Player() {
		cout << "Player has been deconstructed" << endl;
	}

};

class Orc : public Player
{
public:
	Orc() {
		cout << "the orc has risen" << endl;
	}
	~Orc() {
		cout << "the orc has been defeated" << endl;
	}

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
	bool Bspellbook = false;
	bool Bkey = false;
	bool Bpage = false;
	bool Bheal = false;

	void Use(string inv[7]) { //check to see if player has item in inv
		inv[1] = "SpellBook";
		inv[2] = " ";
		inv[3] = " ";
		inv[4] = " ";
	}

};

class key : public item {
public:
	key() {
		cout << "key has been picked up" << endl;
	}
	~key() {
		cout << "key has been removed" << endl;
	}
	void key_code() {
		int Kcode = 4459;
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
		for (int i = 0; i < 2; i++) {
			cout << "The items in this room are ----" << item_1 << "---- and ----" << item_2 << "----" << endl; // displaying items in each room
			cout << "Type    1    or    2    to examine each item.\n" << endl; // user input
			cin >> choice;
			switch (choice) { // switch to see what they looekd at
			case 1:
				cout << descript_1 << endl; // says description of the item in whatever room they are in
				break;
			case 2:
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
		rom_descript = "\nYou walk into a room, similar to the last but only without the gaping whole in the roof.\n";
		item_1 = "Key";
		chose_1 = false;
		descript_1 = "\nYou examine the key, it seems like every other key you've seen. \nMaybe you can use this for something...\n\n";
		item_2 = "Green Lump";
		chose_2 = false;
		descript_2 = "\nThere seems to be a strange moving lump in the corner furthest away from the door, \nYou poke it and it begins to wake up...\n\n"; //INSERT ORC FIGHT SOMEWHERE

	}

	void room_C() {
		rom_descript = "\nThe room feels as if it's being heated by something...";
		item_1 = "Notebook Page";
		chose_1 = false;
		descript_1 = "\nThe heat is radiating off of this piece of paper, you can feel the heat of it, but it is not burning you.\nThe title of this page is, ---FireBall---\n\n";
		item_2 = "Wall Writing";
		chose_2 = false;
		descript_2 = "\nIt went by unnoticed when you first walked in, but now that you are closer the words seem to be shinning.\nIt reads	   ' finish my journey '\n\n";

	}

	void room_D() {
		rom_descript = "\nThe smell of rotting flesh attacks your nostrils when you enter, this room seems darker than the rest...";
		item_1 = "Pool of regeneration"; // regens full health but -5 health every turn?
		chose_1 = false;
		descript_1 = "\na small puddle of water is infront of you, there is a small sign above the puddle that says\n'Pool Of Regeneration'\n\n";
		item_2 = "sword";
		chose_2 = false;
		descript_2 = "\nYou reach over to grab the sword, but like it has a mind of its own, it spins around and lunges at you\n\n"; // code fight
	}

	void room_E() {
		rom_descript = "An illuminated red door is on the other side of the room, A large pile of bones blocks your path there";
		item_1 = "Door";
		chose_1 = false;
		descript_1 = "the bones crunch under your feet as you walk towards the door\nThe bones begin to rumble and a skeleton witch appears\n\n";
		item_2 = "Bones";
		chose_2 = false;
		descript_2 = "You start searching through the bones, they seem to be of all species of everykind, not one bone looks the same\nThe bones begin to rumble and a skeleton witch appears\n\n";
	} // code skeleton witch fight

	void room_F() {
		rom_descript = " ";
		item_1 = " ";
		chose_1 = " ";
		descript_1 = " ";
		item_2 = " ";
		chose_2 = " ";
		descript_2 = " ";
	}

	void Move() {
		string direction;
		switch (room_num) {
		case 1: // room a
			cout << "To change rooms type ----Direction---- for example" << endl;
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
			else {
				cout << "@@##ERROR##@@ Make sure you use capitals for ' West' or other directions and make sure you spell correctly\n\n" << endl;
				Move();
			}
			break;
		case 2:
			cout << "To change rooms type ----Direction---- for example" << endl;
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
			else {
				cout << "@@##ERROR##@@ Make sure you use capitals for 'Move West' or other directions and make sure you spell correctly\n\n" << endl;
				Move();
			}
			break;
		case 3:
			cout << "To change rooms type ----Direction---- for example" << endl;
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
			else {
				cout << "@@##ERROR##@@ Make sure you use capitals for 'Move West' or other directions and make sure you spell correctly\n\n" << endl;
				Move();
			}
			break;

		case 4:
			cout << "To change rooms type ----Direction---- for example" << endl;
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
			else {
				cout << "@@##ERROR##@@ Make sure you use capitals for 'Move West' or other directions and make sure you spell correctly\n\n" << endl;
				Move();
			}
			break;

		}
		room_num = room_go;

	}

	void Rom_Switch() {
		cout << room_go << endl;
		rom_descript = " ";
		item_1 = " ";
		chose_1 = " ";
		descript_1 = " ";
		item_2 = " ";
		chose_2 = " ";
		descript_2 = " ";
		switch (room_go)
		{
		case 1:
			room_A();
			break;

		case 2:
			room_B();
			break;
		case 3:
			room_C();
			break;
		case 4:
			room_D();
			break;
		case 5:
			room_E();
			break;
		case 6:
			room_F();
			break;

		}
	}
};



int main()
{
	cout << "press   'n'   for next" << endl;
	string input;
	while (input != "n") {
		cin >> input;

		Room* Room_start = new Room;
		Room_start->room_A();
		Room_start->Item_room();
		Room_start->Move();
		Room_start->Rom_Switch();
		// set up a overloaded operator to check the room number and to activate whatever room the player goes too, or a switch function, Rom_switch is tempoary fix
		Room_start->Item_room();
		Room_start->Move();
		Room_start->Rom_Switch();
		Room_start->Item_room();


		delete Room_start;
		Room_start = nullptr;
		cout << "end code" << endl;

	} // code a while thingy ma bob so when the player uses the key on the door it skips the repeating of rooms n stuff, and then do the boss fight
}