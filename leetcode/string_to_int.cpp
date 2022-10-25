int myAtoi(string s) {
        //return stoi(s);
        int j = 0;
        int i = 0;
        for(; i < s.length(); i++){
            if(s[i] >= '0' and s[i] <= '9' ){
                j = i+1;
                while(j < s.length() and s[j] >= 48 and s[j] <= 57){
                    j++;
                }
                if(s[i-1]=='+' or s[i-1] == '-'){
                    i--;
                }
                break;
            }
        }
        string c = s.substr(i,j-i);
        //cout<<c;
        return stoi(c);
    }

//using STL
    // int myAtoi(string s) {
    // int r = 0;
    //     stringstream ss;
    //     ss << s;
    //     ss >> r;
    //     return r;
    // }
