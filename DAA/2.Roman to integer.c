int romanToInt(char * s) {
    // Define a mapping of Roman numeral symbols to their corresponding integer values
    int roman_map[256] = {0};  // Initialize all values to 0 (use ASCII values)
    roman_map['I'] = 1;
    roman_map['V'] = 5;
    roman_map['X'] = 10;
    roman_map['L'] = 50;
    roman_map['C'] = 100;
    roman_map['D'] = 500;
    roman_map['M'] = 1000;

    int total = 0;
    int length = strlen(s);

    // Traverse the Roman numeral string and convert it to an integer
    for (int i = 0; i < length; i++) {
        // If current numeral is smaller than the next numeral, subtract it
        if (i + 1 < length && roman_map[s[i]] < roman_map[s[i + 1]]) {
            total -= roman_map[s[i]];
        } else {
            total += roman_map[s[i]];
        }
    }

    return total;
}
