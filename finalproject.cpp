#include <iostream>
using namespace std;

int startgame()
{
int choice;
cout<<"Ready for an awesome adventure? Enter 1 for yes or 2 for no: ";
cin>>choice;
if(choice==1)
	cout<<"Luke...I am your father..."<<endl;
	//Introducion
	//Actual game
	if(choice==2)
	cout<<"Darn...<<endl";
	//End game
else
	cout<<"press 1 or 2 only!"<<endl;
	//Have the user input a number again.
}
/*
Introduction

	cout<<"Welcome to the land of dungeons and dragons!"<<endl;
	cout<<"You have just came in time! A dragon has been terrorizing the town and will not stop until it has been defeated!"<<endl;
	cout<<"We will equip you with a sword, shield and potions. You will have to go through the forest, then the mountain, and lastly the dungeon."<<endl; 
	cout<<"There are going to be enemies in these areas. You will need to defend yourself through smart means."<<endl;
	cout<<"Thankfully, we have small base camps around where you can heal yourself. You can rest in these places before continuing on your journey."<<endl;
	
Location check:
	cout<<"You are currently in: (location)<<endl;

Rest stops:
	User gains 1 potion at each stop. At the final stop, the user gets  2 potions and 1 holy water.
	
Battle system:
	cout<<"A/An (enemy name) appears!"<<endl;
	cout<<"What will you do?"<<endl;
	int decision;
	1:Fight! -> The user attacks with his or her sword. Random number of damage. 10% chance to miss.
	2:Defend -> User defends with shield. Reduced damage from enemy by 1/2.
	3:Item	 -> Heal with potion. HP = MAX, or use holy water, which does a huge amount of damage to enemies (15 - 20)
	4:Run away -> Be a coward and run away in fear. 40% chance of escape.
	
	If enemy loses all hp, the user wins!
	If the user loses, it's game over.
	After defeating an enemy, the user grows 1 level and arrives at a new location.
	Enemies have a 10% chance of dropping a potion, 5% chance of dropping holy water.

User class:
	User has 20 HP, starts with 2 potions, 1 holy water.
	Sword does a random amount of damage between 5 and 10.
	Shield reduces damage taken, explained in battle system.
	User can pick a potion to heal him or herself.  (GOOD USE OF ARRAY!)
	If item is used, # of that item = item-1.
	Print statement if no items are left.
	
Enemy class:
	Different classes for different enemies.
	First enemy has 8 HP, Second has 16, Third has 24, Dragon (final boss) has 40.
	As the game continues, the enemies grow stronger.
	
Ending:
	If the dragon is defeated, the user wins!
	End the program.

What we need:
	Header files for the user and enemies.
	Functions for gameplay, and a main function.
	A third files for all attributes to the classes.
	