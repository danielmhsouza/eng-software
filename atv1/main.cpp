//executar no terminal:
//g++ -g -o Teste .\main.cpp
//Teste

#include <iostream>
#include <vector>

using namespace std;

class Character
{
	public:
		string name;
		string classe;
		string race;
		
		Character(string name, string classe, string race)
		{
			this->name = name;
			this->classe = classe;
			this->race = race;
		}
};

class User
{
	public:
		string name;
		int id;
		vector<Character> characters;
		
		User(int id, string name)
		{
			this->id = id;
			this->name = name;
		}
		
		void addCharacter(string name, string classe, string race)
		{
			Character c(name, classe, race);
			this->characters.push_back(c);
		}
};

class Game
{
};

class Plataform
{
	public:
		vector<User> users;
		vector<int>::iterator it;
		
		Plataform()
		{
			//busca na banco e popula a lista users;
		}
		void addUser(User user)
		{
			this->users.push_back(user);
		}
};

int main()
{
	cout << "*************TESTE RODANDO*************\n\n";
	
	Plataform plat;
	
	User u(plat.users.size()+1, "User 1");
	u.addCharacter("Personagem", "ladino", "elfo");
	
	plat.addUser(u);
	
	User u2(plat.users.size()+1, "User 2");
	u2.addCharacter("Personagem", "Barbaro", "Anao");
	
	plat.addUser(u2);
	
	for(int i = 0; i < plat.users.size(); i++)
	{
		cout << "Nome: " << plat.users[i].name << endl; 
		cout << "Raca: " << plat.users[i].characters[0].race << endl;
		cout << "-----------------" << endl;
	}
	
	return 0;
}
