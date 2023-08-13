class Solution {
private:
    map<char,int> _traducciones;
    void cargarTraducciones() {
        _traducciones['I'] = 1;
        _traducciones['V'] = 5;
        _traducciones['X'] = 10;
        _traducciones['L'] = 50;
        _traducciones['C'] = 100;
        _traducciones['D'] = 500;
        _traducciones['M'] = 1000;
    }

public:
    int romanToInt(string s) {
        cargarTraducciones();
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            if (i+1 < s.length() && _traducciones[s[i]] < _traducciones[s[i+1]]) {
                res -= _traducciones[s[i]];
            } else {
                res += _traducciones[s[i]];
            }
        }
        return res;
    }
};

