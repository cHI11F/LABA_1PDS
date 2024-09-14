#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bool p, q;

    cout << "Vvedit znachennya p (0 abo 1): ";
    cin >> p;

    cout << "Vvedit znachennya q (0 abo 1): ";
    cin >> q;

    
    bool andResult = p && q;
    bool orResult = p || q; 
    bool xorResult = p ^ q;
    bool implicationResult = !p || q; 
    bool equivalenceResult = (p && q) || (!p && !q);

    
    cout << "Konyunktsiya (p AND q): " << andResult << endl;
    cout << "Dizyunktsiya (p OR q): " << orResult << endl;
    cout << "Alternatyvne 'abo' (p XOR q): " << xorResult << endl;
    cout << "Implikatsiya (p -> q): " << implicationResult << endl;
    cout << "Ekvyvalentnist (p <-> q): " << equivalenceResult << endl;

    
    bitset<8> b1("11111000"); 
    bitset<8> b2("10100110");

    bitset<8> orResultBit = b1 | b2;
    bitset<8> andResultBit = b1 & b2;
    bitset<8> xorResultBit = b1 ^ b2;

    
    cout << "Bitovyi OR: " << orResultBit << endl;
    cout << "Bitovyi AND: " << andResultBit << endl;
    cout << "Bitovyi XOR: " << xorResultBit << endl;

    return 0;
}
