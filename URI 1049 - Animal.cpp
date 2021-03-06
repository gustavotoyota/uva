/*-----------------------------*\
 | Gustavo Toyota - 02/11/2016 |
 | URI 1049 - Animal           |
\*-----------------------------*/

#include <iostream>
#include <map>
#include <string>

#define Debug(x) cout << "Debug: " << #x " = " << (x) << '\n'
#define ullint unsigned long long int
#define llint long long int
#define tup make_tuple
#define MIN(type) numeric_limits<type>::min()
#define MAX(type) numeric_limits<type>::max()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<string, map<string, map<string, string> > > animals;
    animals["vertebrado"]["ave"]["carnivoro"] = "aguia";
    animals["vertebrado"]["ave"]["onivoro"] = "pomba";
    animals["vertebrado"]["mamifero"]["onivoro"] = "homem";
    animals["vertebrado"]["mamifero"]["herbivoro"] = "vaca";
    animals["invertebrado"]["inseto"]["hematofago"] = "pulga";
    animals["invertebrado"]["inseto"]["herbivoro"] = "lagarta";
    animals["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
    animals["invertebrado"]["anelideo"]["onivoro"] = "minhoca";
    
    string id1, id2, id3;
    cin >> id1 >> id2 >> id3;
    cout << animals[id1][id2][id3] << "\n";

	return 0;
}