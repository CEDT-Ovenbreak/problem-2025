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
            }
        }
        //============================================//

        bool PLEASE_FILL_CONDITION_HERE = false;
    public:
        bool AddItem(Item item) {
            if (_capItem >= 2)
                throw std::bad_alloc();
            
            //============================================//
            if (PLEASE_FILL_CONDITION_HERE) {
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
    // จำนวนตัวละครภายในเกม
    int charCount = 0;
    cin >> charCount;
    Character characters[charCount];

    for (int i = 0; i < charCount; i++) {
        string characterName; cin >> characterName;
        characters[i] = Character(characterName);
    }

    // Input the items for each character
    // Outer-loop for each character
    for (int i = 0; i < charCount; i++) {
        // Inner-loop for each item
        // Each character has 2 items
        for (int j=0; j<2; j++) {
            // พี่ประกาศตัวแปร string, int, float มารับค่าเพื่อสร้าง Item ไม่เป็น ช่วยพี่ด้วยยย
            Item item(itemName, durability, damage);
            characters[i].AddItem(item);
        }
    }

    // Who is the strongest character?
    int maxIdx = 0;
    for (int i=0; i<charCount; i++) {
        // พี่จะใช้ Loop นี้เพื่อหาตัวละครที่มี Damage สูงสุด แต่น้องจะใช้แบบอื่นก็ได้นะ
        // ตัว `i` พี่สร้างขึ้นมาเพื่อใช้ลูป index เอาข้อมูลของแต่ละตัวละคร
        // พี่รู้ว่าใช้ characters[i].GetDamage() เพื่อรับค่า Damage ของตัวละครได้
        // แต่ ChadGPT บอกพี่ว่าให้ใช้ `maxIdx` เพื่อเก็บ index ของตัวละครที่ Damage สูงสุด
        // รบกวนน้องช่วยพี่ด้วยนะครับ ฮืออฮืออออฮือออ พี่จะไปหาแมว UIIAIUIIIAI แล้ว T T
        // @HINT: สามารถใช้เครื่องหมาย `>` หรือ `<` เพื่อเปรียบเทียบ Damage ของตัวละครได้โดยตรง ไม่ต้องใช้ GetDamage() ก็ได้

    }

    return 0;
}