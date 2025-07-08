/**
 * Not Copyright (c) 2025, Nisit Chula.
 * 
 * Crosaaria Game
 * This code is a part of a simple game project.
 * 
 */
#include<iostream>
class Item {
    // DO NOT MODIFY BELOW THIS LINE
    private:
        std::string _name;
        int _durability;
        float _dmg;
        bool PLEASE_FILL_CONDITION_HERE = true;
    public:
        std::string GetName() {
            return _name;
        }
        void SetName(std::string name) {
            _name = name;
        }
        int GetDurability() {
            return _durability;
        }
        void SetDurability(int durability) {
            _durability = durability;
        }
        float GetDamage() {
            return _dmg;
        }
        void SetDamage(int damage) {
            _dmg = damage;
        }
    Item() : _name("null"), _durability(0), _dmg(0.0f) {}
    Item(std::string name, int durability, float dmg) 
        : _name(name), _durability(durability), _dmg(dmg) {}
    // DO NOT MODIFY ABOVE THIS LINE
};

class Character {
    private:
        std::string charName;
        float playerDamage = 0.0f;
        Item inventory[2];

        size_t _capItem = 0;

        //============================================//
        void CalculateDamage() {
            playerDamage = 0.0f;
            for (size_t i = 0; i < _capItem; i++) {
                // วิธีการรับค่า Damage ของ Item ให้ใช้ inventory[i].GetDamage()
                // หากน้องต้องการบวกค่า Damage ให้ Player จะต้องใช้ตัวแปร `playerDamage`
                playerDamage += inventory[i].GetDamage();
            }
        }
        //============================================//
    public:
        bool AddItem(Item item) {
            if (_capItem >= 2)
                throw std::bad_alloc();
            
            //============================================//
            if (item.GetDurability() > 10) {
                // ให้น้อง ๆ ใช้คำสั่ง 3 ตัวนี้เพื่อเพิ่ม Item ให้กับตัวละคร
                inventory[_capItem] = item;
                _capItem++;
                CalculateDamage();
            }
            //============================================//
            return true;
        }

        bool RemoveItem() {
            if (_capItem == 0)
                throw std::bad_alloc();

            _capItem--;
            inventory[_capItem] = Item();
            CalculateDamage();
            
            return true;
        }

        float GetDamage() {
            return playerDamage;
        }

        std::string GetName() {
            return charName;
        }

        bool operator<(const Character& other) {
            return (this->playerDamage < other.playerDamage) ? true : false;
        }

        bool operator>(const Character& other) {
            return (this->playerDamage > other.playerDamage) ? true : false;
        }

    Character() : charName("null"), playerDamage(0.0f), _capItem(0) {}
    Character(std::string name): charName(name), playerDamage(0.0f), _capItem(0) {}
};
using namespace std;
int main() {
    int charCount = 0;
    cin >> charCount;
    Character characters[charCount];
    for (int i = 0; i < charCount; i++) {
        string characterName; cin >> characterName;
        characters[i] = Character(characterName);
    }

    for (int i = 0; i < charCount; i++) {
        for (int j=0; j<2; j++) {
            string itemName; int durability; float damage;
            cin >> itemName >> durability >> damage;
            Item item(itemName, durability, damage);
            characters[i].AddItem(item);

        }
    }

    // Who is the strongest character?
    int maxIdx = 0;
    for (int i=0; i<charCount; i++) {
        if (characters[i] > characters[maxIdx]) {
            maxIdx = i;
        }
    }

    cout << characters[maxIdx].GetName() << " is the strongest with " << characters[maxIdx].GetDamage() << " units" << endl;

    return 0;
}