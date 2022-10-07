#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
  string meridiem = s.substr(s.size() - 2, 2);
  s = s.substr(0, s.size() - 2);

  istringstream ss(s);
  string token;
  vector<string> spStr;
  while (getline(ss, token, ':')) {
    spStr.push_back(token);
    }
    int hh;
    string shh = spStr.at(0);
     hh = stoi(shh);
    cout<<shh<<endl;
    if(meridiem == "PM"){
        if(hh != 12){
            hh += 12;
        }
        cout<<"PM";
        if(hh == 24) hh = 0;
    }
    else if (meridiem == "AM"){
        if(hh == 12) hh = 0;
    }
    cout << hh;
    if(hh < 10) spStr.at(0) = "0"+to_string(hh);
    else spStr.at(0) = to_string(hh);

    return spStr.at(0)+":"+spStr.at(1)+":"+spStr.at(2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
