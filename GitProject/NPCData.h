#pragma once
struct NPCData
{
public:
	NPCData(char* name);
private:
	char* name;
	
	//address
	int houseNumber;
	char* streetAddress;

	//birthday
	int birthYear; //year
	int birthMonth; //month
	int birthDay; //day

	float playerOpinion; //The NPC's opinion of the player

	float currentHP;
	float maxHP;

	int money;
	
};