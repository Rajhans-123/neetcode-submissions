class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (auto& str : strs) {
            encoded_string += to_string(str.size()) + "#" + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        size_t i = 0;
        
        while (i < s.size()) {
            // Find the position of the next '#' delimiter
            size_t delimiter_pos = s.find('#', i);
            
            // Extract the length segment and convert to integer
            int length = stoi(s.substr(i, delimiter_pos - i));
            
            // Move index past the '#' delimiter
            i = delimiter_pos + 1;
            
            // Extract the original string based on parsed length
            decoded_strs.push_back(s.substr(i, length));
            
            // Move index past the extracted string content
            i += length;
        }
        return decoded_strs;
    }
};
