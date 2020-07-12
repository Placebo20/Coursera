//#include <iostream>
//using namespace std;
//
//void UpdateifGreater(int first, int& second) {
//	if (first > second)
//		second = first;
//}
//
//int main() {
//	int first, second;
//	cin >> first >> second;
//	UpdateifGreater(first, second);
//	if (second == first)
//		cout << "completed" << endl;
//	else
//		cout << "uncompleted" << endl;
//}

//Задание по программированию : Перемещение 

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void MoveStrings(vector<string>& src, vector<string>& dest) { 
//    int i = 0;
//    for (auto x : src) {
//        dest.push_back(x);
//    }
//    src.clear();
//}
//int main()
//{
//    vector<string> source = { "sdf","aaa","bbb" }, destination = { "xxx" };
//    MoveStrings(source, destination);
//    for (auto i : source) {
//        cout << i << " " << endl;
//    }
//    for (auto i : destination) {
//        cout << i << " ";
//    }
//    return 0;
//}

//Тренировочное задание по программированию : Разворот последовательности

//#include <iostream>
//#include <vector>
//using namespace std;
//void Reverse(vector<int>& myvec) {
//    int max = myvec.size();
//    vector<int> c = myvec;
//    for (auto i : c) {
//        myvec[max - 1] = i;
//        max--;
//    }
//}
//int main()
//{
//    vector<int> arr = { 5,4,3,1,2 };
//    Reverse(arr);
//    for (auto i : arr) {
//        cout << i << " ";
//    }
//    return 0;
//}

//Тренировочное задание по программированию : Разворот последовательности — 2

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> Reversed(const vector<int>& v) {
//    int size = myvec.size();
//    vector<int> tmp = myvec;
//    for (auto i : myvec) {
//        tmp[size - 1] = i;
//        size--;
//    }
//    return tmp; 
//}
//int main()
//{
//    vector<int> numbers = { 5,4,3,1,2 };
//    for (auto i : Reversed(numbers)) {
//        cout << i << " ";
//    }
//    return 0;
//}

//Тренировочное задание по программированию: Средняя температура

//#include <iostream>
//#include <vector>
//using namespace std;
//void PrintVector(int j, const vector<int>& myvec) {
//    cout << j << endl;
//    for (auto i : myvec) {
//        cout << i << " ";
//    }
//}
//int main()
//{
//    int max;
//    cin >> max;
//    vector<int> v;
//    int sum = 0;
//    for (int i = 0; i < max; i++)
//    {
//        int s;
//        cin >> s;
//        v.push_back(s);
//        sum += s;
//    }
//    int d = sum / max;
//    int count = 0;
//    vector<int> z;
//    int index = 0;
//    for (auto i : v) {
//        if (i > d) {
//            count++;
//            z.push_back(index);
//        }
//        index++;
//    }
//    PrintVector(count, z);
//    return 0;
//}

//Задание по программированию: Очередь

//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//void Worry(int& i, vector<bool>& x) {
//    x[i] = true;
//}
//void Quiet(int& i, vector<bool>& x) {
//    x[i] = false;
//}
//void Come(int n, vector<bool>& x) {
//    int q = x.size();
//    x.resize(q + (n));
//}
//void Worry_count(const vector<bool>& x) {
//    int cns = 0;
//    for (auto i : x) {
//        if (i == 1) {
//            cns++;
//        }
//    }
//    cout << cns << endl;
//}
//int main()
//{
//    int Q;
//    cin >> Q;
//    vector<bool> tmp;
//    for (int i = 0; Q > i; i++) {
//        string s;
//        int col;
//        cin >> s;
//        if (s == "WORRY_COUNT") {
//            Worry_count(tmp);
//        }
//        else {
//            cin >> col; 
//            if (s == "WORRY") { 
//                Worry(col, tmp);
//            }
//            else if (s == "QUIET") {
//                Quiet(col, tmp);
//            }
//            else if (s == "COME") { 
//                Come(col, tmp); 
//            }
//        }
//    }
//    return 0;
//}

//Задание по программированию: Ежемесячные дела

//#include <string>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void Next_month(int& index, const vector<int>& YID, vector<vector<string>>& DFT) { 
//    index++;
//    if (index > 11)index = 0; 
//    vector<vector<string>> NewMonth = DFT; 
//    int a = DFT.size(); 
//    int b = YID[index];
//    DFT.resize(b); 
//    const int e = b - 1; 
//    if (a > b) {
//        for (b; a > b; b++) {
//            DFT[e].insert(end(DFT[e]), begin(NewMonth[b]), end(NewMonth[b]));
//        }
//    }
//    NewMonth.clear();
//}
//void Task_display(int day, const vector<vector<string>>& tfd) {
//    cout << tfd[day - 1].size();
//    for (auto i : tfd[day - 1]) {
//        cout << " " << i; 
//    }
//}
//int main()
//{
//    int k;
//    cin >> k; 
//    vector<int> day_year = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
//    vector<vector<string>> dailytask; 
//    int index_of_month = 0; 
//    dailytask.resize(day_year[index_of_month], {});
//    for (int i = 0; k > i; i++) { 
//        string comand; 
//        int day; 
//        string task;
//        cin >> comand; 
//        if (comand == "NEXT") { 
//            Next_month(index_of_month, day_year, dailytask); 
//        }
//        else if (comand == "DUMP") { 
//            cin >> day;
//            Task_display(day, dailytask); 
//        }
//        else if (comand == "ADD") { 
//            cin >> day >> task; 
//            dailytask[day - 1].push_back(task); 
//        }
//    }
//    return 0;
//}

//Тренировочное задание по программированию: Анаграммы

//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//map<char, int> BuildCharCounters(const string& a) { 
//    map <char, int> s1;
//    for (const auto& ch : a) { 
//        ++s1[ch];
//    }     
//    return s1;
//}
//int main() {
//    int i;
//    cin >> i;
//    string a, b;
//    vector<string> v; 
//    for (i; i > 0; i--) { 
//        cin >> a >> b; 
//        if (BuildCharCounters(a) == BuildCharCounters(b)) {
//            v.push_back("YES");
//        }
//        else {
//            v.push_back("NO");
//        }
//    }
//    for (auto r : v) {
//        cout << r << endl;
//    }
//    return 0;
//}

//Задание по программированию: Автобусные остановки

//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//void All_buses(const map<string, vector<string>>& f) {
//    if (f.size() == 0) cout << "No buses" << endl;
//    else {
//        for (const auto& i : f) {
//            cout << "Bus " << i.first << ":";
//            for (const auto& d : i.second) {
//                cout << " " << d;
//            }
//            cout << endl;
//        }
//    }
//}
//void BusforStop(const string& s, const map<string, vector<string>>& f, const vector<string>& busm) {
//    int k = 0;
//    vector<string> v;
//    for (const auto& i : f) {
//        for (const auto& n : i.second) {
//            if (n == s) {
//                v.push_back(i.first);
//                k++;
//            }
//        }
//    }
//    if (k > 0) {
//        for (const auto& w : busm) {
//            for (auto z : v) {
//                if (z == w) { 
//                    cout << w << " ";
//                }
//            }
//        }
//    }
//    else if (k == 0) cout << "No stop";
//    cout << endl;
//}
//void Stopforbus(const string& s, const map<string, vector<string>>& f, const vector<string>& busm) {
//    int l = 0; 
//    for (auto i : f) {
//        if (i.first == s) {
//            for (auto m : i.second) {
//                cout << "Stop " << m << ":";
//                int l2 = 0; 
//                vector<string> v;
//                for (auto r : f) {
//                    for (auto n : r.second) {
//                        
//                        if (n == m && r.first != s) {
//                            v.push_back(r.first);
//                            l2++;
//                        }
//                    }
//                }
//                if (l2 == 0) cout << " no interchange";
//                else if (l2 > 0) {
//                    for (const auto& w : busm) { 
//                        for (auto z : v) { 
//                            if (z == w) {
//                                cout << " " << w;
//                            }
//                        }
//                    }
//                }
//                cout << endl;
//            }
//            l++;
//        }
//    }
//    if (l == 0) cout << "No bus" << endl;
//}
//int main()
//{
//    int Q;
//    cin >> Q;
//    map<string, vector<string>> bsmap;
//    vector<string> busm;
//    for (Q; Q > 0; Q--) { 
//        string comand, bus, stop;
//        cin >> comand;
//        if (comand == "NEW_BUS") {
//            int sc; 
//            cin >> bus >> sc; 
//            busm.push_back(bus);
//            for (sc; sc > 0; sc--) {
//                cin >> stop;
//                bsmap[bus].push_back(stop);
//            }
//        }
//        else if (comand == "BUSES_FOR_STOP") {
//            cin >> stop;
//            BusforStop(stop, bsmap, busm); 
//        }
//        else if (comand == "STOPS_FOR_BUS") {
//            cin >> bus;
//            Stopforbus(bus, bsmap, busm);
//        }
//        else if (comand == "ALL_BUSES") {
//            All_buses(bsmap);
//        }
//    }
//    return 0;
//}

//Задание по программированию: Автобусные остановки — 2

//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//
//int main() {
//    int Q, i;
//    string stop;
//    map<vector<string>, int> bs;
//    cin >> Q;
//    for (Q; Q > 0; Q--) {
//        vector<string> v;
//        cin >> i;
//        for (int z = 0; z < i; z++) {
//            cin >> stop;
//            v.push_back(stop);
//        }
//        if (bs.count(v)) {
//            cout << "Already exists for " << bs[v] << endl;
//        }
//        else {
//            bs[v];
//            int r = bs.size();
//            bs[v] = r;
//            cout << "New bus " << bs[v] << endl;
//        }
//    }
//    return 0;
//}

//Задание по программированию : Синонимы

//#include <iostream>
//#include <string>
//#include <set>
//#include <map>
//using namespace std;
//using sorted_pair = pair<string, string>;
//sorted_pair make_sorted_pair(const std::string& word1, const string& word2) {
//    return (word1 <= word2) ? make_pair(word1, word2) : make_pair(word2, word1);
//}
//bool check(const set<sorted_pair>& synonyms, const string& word1, const string& word2) {
//    return synonyms.count(make_sorted_pair(word1, word2)) != 0;
//}
//void add(set<sorted_pair>& synonyms, map<string, unsigned>& synonyms_count, const string& word1, const string& word2) {
//    if (check(synonyms, word1, word2)) return;
//    ++synonyms_count[word1];
//    ++synonyms_count[word2];
//    synonyms.insert(make_sorted_pair(word1, word2));
//
//}
//int main() {
//    set<sorted_pair> synonyms;
//    map<string, unsigned> synonyms_count;
//    int i;
//    string comand, word1, word2;
//    cin >> i;
//    for (i; i > 0; i--) {
//        cin >> comand;
//        if (comand == "ADD") {
//            cin >> word1 >> word2;
//            add(synonyms, synonyms_count, word1, word2);
//        }
//        else if (comand == "COUNT") {
//            string word;
//            cin >> word;
//            cout << synonyms_count[word] << endl;
//        }
//        else if (comand == "CHECK") {
//            string word1, word2;
//            cin >> word1 >> word2;
//
//            if (check(synonyms, word1, word2)) {
//                cout << "YES" << endl;
//            }
//            else cout << "NO" << endl;
//        }
//    }
//    return 0;
//}

//Задание по программированию : Автобусные остановки — 3

//#include <iostream>
//#include <string>
//#include <set>
//#include <map>
//using namespace std;
//int main() {
//    set<string> bus_stops;
//    map<set<string>, int> marshrut;
//    int i, count_stop, number_marshrut = 0;
//    string stop;
//    cin >> i;
//    for (i; i > 0; i--) {
//        cin >> count_stop;
//        for (count_stop; count_stop > 0; --count_stop) {
//            cin >> stop;
//            bus_stops.insert(stop); 
//        }
//        if (!marshrut.count(bus_stops)) {
//            marshrut[bus_stops] = ++number_marshrut;
//            cout << "New bus " << number_marshrut << endl;
//        }
//        else {
//            cout << "Already exists for " << marshrut[bus_stops] << endl;
//        }
//        bus_stops.clear();
//    }
//    return 0;
//}

//Тренировочное задание по программированию: Количество уникальных строк

//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//
//int main() {
//    int Q;
//    string str;
//    set<string> bs;
//    cin >> Q;
//    for (Q; Q > 0; Q--) {
//        cin >> str;
//        bs.insert(str);
//    }
//    cout << bs.size();
//    return 0;
//}

//Тренировочное задание по программированию : Множество значений словаря

//#include <iostream>
//#include <string>
//#include <map>
//#include <set>
//using namespace std;
//
//set<string> BuildMapValuesSet(const map<int, string>& m) {
//    set<string> s;
//    for (auto i : m) {
//        s.insert(i.second);
//    }
//    return s;
//}

//Задание по программированию : Сортировка целых чисел по модулю

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//int main() {
//    int N, num;
//    vector<int> v;
//    cin >> N;
//    for (N; N > 0; --N) {
//        cin >> num;
//        v.push_back(num);
//    }
//    sort(begin(v), end(v), [](const int& x, const int& y) {
//        return abs(x) < abs(y);
//        });
//    for (const auto& i : v) {
//        cout << i << " ";
//    }
//    return 0;
//}

//Задание по программированию : Сортировка без учёта регистра

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <cctype> 
//
//using namespace std;
//
//string str_to_low(const string& s) { 
//    string result;
//    for (auto i : s) { 
//        result += tolower(i); 
//    }
//    return result;
//}
//bool srt(string x, string y) {
//    return str_to_low(x) < str_to_low(y); 
//}
//int main() {
//    int N;
//    string str;
//    vector<string> v;
//    cin >> N;
//    for (N; N > 0; --N) {
//        cin >> str; 
//        v.push_back(str);
//    }
//    
//    sort(begin(v), end(v), srt);
//    for (const auto& i : v) {
//        cout << i << " "; 
//    }
//    return 0;
//}

//Тренировочное задание по программированию : Отсортированные строки

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class SortedStrings {
//public:
//    void AddString(const string& s) {
//        v.push_back(s);
//    }
//    vector<string> GetSortedStrings() {
//        sort(begin(v), end(v));
//        return v;
//    }
//private:
//    vector<string> v; 
//};

//Задание по программированию : Имена и фамилии — 1

//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//struct FullName { 
//    string Name;
//    string Soname;
//};
//class Person {
//public:
//    void ChangeFirstName(int year, const string& first_name) {
//        if (YearNameSoname.count(year) == 0) YearNameSoname[year].Soname = "";
//        YearNameSoname[year].Name = first_name;
//    }
//    void ChangeLastName(int year, const string& last_name) {
//        if (YearNameSoname.count(year) == 0) YearNameSoname[year].Name = "";
//        YearNameSoname[year].Soname = last_name;
//    }
//    string GetFullName(int year) {
//        if (YearNameSoname.size() == 0) { 
//            return "Incognito";
//        }
//        else {
//            for (const auto& i : YearNameSoname) {
//                if (year < i.first) return "Incognito";
//                break;
//            }
//        }
//       
//        string nm = "";
//        string sn = "";
//        for (const auto& i : YearNameSoname) {
//            
//            if (i.first <= year && i.second.Soname != "") sn = i.second.Soname;
//            
//            if (i.first <= year && i.second.Name != "") nm = i.second.Name;
//        }
//        if (nm == "") return sn + " with unknown first name";
//        else if (sn == "") return nm + " with unknown last name";
//        else return nm + " " + sn;
//    }
//private: 
//    map<int, FullName> YearNameSoname;
//};

//Задание по программированию : Имена и фамилии — 2

//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//struct FullName { 
//    string Name;
//    string Soname;
//};
//class Person {
//public:
//    void ChangeFirstName(int year, const string& first_name) {
//        if (YearNameSoname.count(year) == 0) YearNameSoname[year].Soname = ""; 
//        YearNameSoname[year].Name = first_name; 
//    }
//    void ChangeLastName(int year, const string& last_name) {
//        if (YearNameSoname.count(year) == 0) YearNameSoname[year].Name = ""; 
//        YearNameSoname[year].Soname = last_name; 
//    }
//    string GetFullName(int year) {
//        if (YearNameSoname.size() == 0) { 
//            return "Incognito"; 
//        }
//        else {
//            for (const auto& i : YearNameSoname) {
//                if (year < i.first) return "Incognito"; 
//                break; 
//            }
//        }
//        
//        string nm = "";
//        string sn = "";
//        for (const auto& i : YearNameSoname) {
//            
//            if (i.first <= year && i.second.Soname != "") sn = i.second.Soname;
//            if (i.first <= year && i.second.Name != "") nm = i.second.Name; 
//        }
//        if (nm == "") return sn + " with unknown first name"; 
//        else if (sn == "") return nm + " with unknown last name"; 
//        else return nm + " " + sn; 
//    }
//    string GetFullNameWithHistory(int year) {
//        if (YearNameSoname.size() == 0) { 
//            return "Incognito"; 
//        }
//        else {
//            for (const auto& i : YearNameSoname) {
//                if (year < i.first) return "Incognito"; 
//                break; 
//            }
//        }
//        //иначе
//        string nm = "";
//        string sn = "";
//        vector<string> secondnames; 
//        vector<string> firstnames;
//        for (const auto& i : YearNameSoname) { 
//            
//            if (i.first <= year && i.second.Soname != "") { 
//                if (i.second.Soname != sn && sn != "") { 
//                    secondnames.push_back(sn);
//                }
//                sn = i.second.Soname; 
//            }
//            if (i.first <= year && i.second.Name != "") { 
//                if (i.second.Name != nm && nm != "") {
//                    firstnames.push_back(nm);
//                }
//                nm = i.second.Name;
//            }
//        }
//        
//        string secnames_string = "", firstnames_string = "";
//        if (secondnames.size() > 0) { 
//            secnames_string += " (" + secondnames[secondnames.size() - 1];
//            if (secondnames.size() > 1) {
//                for (int i = secondnames.size() - 1; i > 0; --i) {
//                    secnames_string += ", " + secondnames[i - 1]; 
//                }
//            }
//            secnames_string += ")"; 
//        }
//       
//        if (firstnames.size() > 0) {
//            firstnames_string += " (" + firstnames[firstnames.size() - 1];
//            if (firstnames.size() > 1) {
//                for (int i = firstnames.size() - 1; i > 0; --i) {
//                    firstnames_string += ", " + firstnames[i - 1];
//                }
//            }
//            firstnames_string += ")";
//        }
//        
//        if (nm == "") return sn + secnames_string + " with unknown first name";
//        else if (sn == "") return nm + firstnames_string + " with unknown last name";
//        else return nm + firstnames_string + " " + sn + secnames_string;
//    }
//private: 
//    map<int, FullName> YearNameSoname; 
//};

//Задание по программированию: Имена и фамилии — 3

//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//struct FullName { 
//    string Name;
//    string Soname;
//};
//class Person {
//public:
//    Person(const string& first_name, const string& last_name, int year) {
//        YearNameSoname[year] = { first_name, last_name };
//        birth_year = year;
//        for (auto& i : YearNameSoname) {
//            if (i.first < year) YearNameSoname.erase(i.first);
//        }
//    }
//    void ChangeFirstName(int year, const string& first_name) {
//        for (auto& i : YearNameSoname) {
//            if (year > i.first) {
//                if (YearNameSoname.count(year) == 0) YearNameSoname[year].Soname = "";
//                YearNameSoname[year].Name = first_name;
//            }
//            break;
//        }
//    }
//    void ChangeLastName(int year, const string& last_name) {
//        for (auto& i : YearNameSoname) {
//            if (year > i.first) {
//                if (YearNameSoname.count(year) == 0) YearNameSoname[year].Name = "";
//                YearNameSoname[year].Soname = last_name;
//            }
//            break;
//        }
//    }
//    string GetFullName(int year) const {
//        if (birth_year != 0 && year < birth_year) return "No person";
//        else if (YearNameSoname.size() == 0) {
//            return "Incognito";
//        }
//        else {
//            for (const auto& i : YearNameSoname) {
//                if (year < i.first) return "Incognito";
//                break;
//            }
//        }
//        
//        string nm = "";
//        string sn = "";
//        for (const auto& i : YearNameSoname) {
//            if (i.first <= year && i.second.Soname != "") sn = i.second.Soname;
//            if (i.first <= year && i.second.Name != "") nm = i.second.Name;
//        }
//        if (nm == "") return sn + " with unknown first name";
//        else if (sn == "") return nm + " with unknown last name";
//        else return nm + " " + sn;
//    }
//    string GetFullNameWithHistory(int year) const {
//        if (birth_year != 0 && year < birth_year) return "No person";
//        else if (YearNameSoname.size() == 0) {
//            return "Incognito";
//        }
//        else {
//            for (const auto& i : YearNameSoname) {
//                if (year < i.first) return "Incognito";
//                break; 
//            }
//        }
//        
//        string nm = "";
//        string sn = "";
//        vector<string> secondnames;
//        vector<string> firstnames; 
//        for (const auto& i : YearNameSoname) { 
//            if (i.first <= year && i.second.Soname != "") {
//                if (i.second.Soname != sn && sn != "") {
//                    secondnames.push_back(sn);
//                }
//                sn = i.second.Soname;
//            }
//            if (i.first <= year && i.second.Name != "") {
//                if (i.second.Name != nm && nm != "") {
//                    firstnames.push_back(nm);
//                }
//                nm = i.second.Name;
//            }
//        }
//        
//        string secnames_string = "", firstnames_string = "";
//        if (secondnames.size() > 0) {
//            secnames_string += " (" + secondnames[secondnames.size() - 1];
//            if (secondnames.size() > 1) {
//                for (int i = secondnames.size() - 1; i > 0; --i) {
//                    secnames_string += ", " + secondnames[i - 1];
//                }
//            }
//            secnames_string += ")";
//        }
//        
//        if (firstnames.size() > 0) {
//            firstnames_string += " (" + firstnames[firstnames.size() - 1];
//            if (firstnames.size() > 1) {
//                for (int i = firstnames.size() - 1; i > 0; --i) {
//                    firstnames_string += ", " + firstnames[i - 1];
//                }
//            }
//            firstnames_string += ")";
//        }
//
//        if (nm == "") return sn + secnames_string + " with unknown first name";
//        else if (sn == "") return nm + firstnames_string + " with unknown last name";
//        else return nm + firstnames_string + " " + sn + secnames_string;
//    }
//private: 
//    map<int, FullName> YearNameSoname; 
//    int birth_year = 0;
//};

//Задание по программированию : Структура LectureTitle

//#include <iostream>
//#include <vector>
//using namespace std;
//struct Specialization {
//    string value;
//    explicit Specialization(string new_val) {
//        value = new_val;
//    }
//};
//struct Course {
//    string value;
//    explicit Course(string new_val) {
//        value = new_val;
//    }
//};
//struct Week {
//    string value;
//    explicit Week(string new_val) {
//        value = new_val;
//    }
//};
//struct LectureTitle {
//    string specialization;
//    string course;
//    string week;
//    LectureTitle(Specialization new_s, Course new_c, Week new_w) {
//        specialization = new_s.value;
//        course = new_c.value;
//        week = new_w.value;
//    }
//};

//Тренировочное задание по программированию: Обратимая функция

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class FunctionPart {
//public:
//    FunctionPart(char new_operation, double new_value) {
//        value = new_value;
//        operation = new_operation;
//    }
//    double Apply(const double& sourse_value) const {
//        if (operation == '+') {
//            return sourse_value + value;
//        }
//        else if (operation == '-') {
//            return sourse_value - value;
//        }
//        else if (operation == '*') {
//            return sourse_value * value;
//        }
//        else {
//            return sourse_value / value;
//        }
//    }
//    void Invert() {
//        if (operation == '+') {
//            operation = '-';
//        }
//        else if (operation == '-') {
//            operation = '+';
//        }
//        else if (operation == '*') {
//            operation = '/';
//        }
//        else {
//            operation = '*';
//        }
//    }
//private:
//    char operation;
//    double value;
//};
//class Function {
//public:
//    void AddPart(char operation, double value) {
//        parts.push_back({ operation, value });
//    }
//    double Apply(double value) const {
//        for (const FunctionPart& part : parts) {
//            value = part.Apply(value);
//        }
//        return value;
//    }
//    void Invert() {
//        for (FunctionPart& part : parts) {
//            part.Invert();
//        }
//        reverse(begin(parts), end(parts));
//    }
//private:
//    vector<FunctionPart> parts;
//};

//Задание по программированию: Работа с файлами

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//    ifstream input("input.txt");
//    string line;
//    ofstream output("output.txt", ios::app);
//    while (getline(input, line)) {
//        cout << line << "\n"; //закомментируем эту строку, для 2 части
//        output << line << "\n"; //закомментируем эту строку, для 1 части
//    }
//    return 0;
//}

//Тренировочное задание по программированию : Вывод с точностью

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    ifstream input("input.txt");
//    double line;
//    cout << fixed << setprecision(3);
//    while (input) {
//        input >> line;
//        cout << line << endl;
//    }
//    return 0;
//}

//Задание по программированию : Чтение и вывод таблицы

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//using namespace std;
//int main() {
//    ifstream input("input.txt");
//    string lines;
//    int N, M;
//    
//    input >> N >> M;
//    input.ignore(1);
//    for (int i = N; i > 0; --i) {
//        for (int z = M; z > 1; --z) {
//            getline(input, lines, ',');
//            cout << setw(10) << lines << " ";
//        }
//        getline(input, lines);
//        cout << setw(10) << lines << endl;
//    }
//    return 0;
//}

//Тренировочное задание по программированию: Список студентов

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct Student {
//    string Name;
//    string Soname;
//    int Day;
//    int Month;
//    int Year;
//};
//
//int main() {
//    int n, m;
//    string name;
//    string soname;
//    int day;
//    int month;
//    int year;
//    vector<Student> vec;
//    cin >> n;
//        for (int i = 0; i < n; ++i) {
//            cin >> name >> soname >> day >> month >> year;
//            vec.push_back({ name, soname, day, month, year });
//        }
//    cin >> m;
//    string command;
//    int key;
//    for (int j = 0; j < m; ++j) {
//        cin >> command >> key;
//        if (vec.size() < key || key <= 0) {
//            cout << "bad request" << endl;
//        }
//        else if (command == "name") {
//            cout << vec[key - 1].Name << " " << vec[key - 1].Soname << endl;
//        }
//        else if (command == "date") {
//            cout << vec[key - 1].Day << "." << vec[key - 1].Month << "." << vec[key - 1].Year << endl;
//        }
//        else {
//            cout << "bad request" << endl;
//        }
//    }
//    return 0;
//}

//Задание по программированию: Класс Rational

//#include <iostream>
//#include <sstream>
//#include <cmath>
//#include <string>
//#include <set>
//#include <map>
//#include <vector>
//using namespace std;
//class Rational {
//public:
//    Rational() {
//        num = 0;
//        den = 1;
//    }
//    Rational(int numerator, int denominator) {
//        if (denominator < 0) {
//            if (numerator < 0) {
//                denominator = abs(denominator);
//                numerator = abs(numerator);
//            }
//            else {
//                denominator = abs(denominator);
//                numerator = numerator - 2 * numerator;
//            }
//        }
//        if (numerator == 0) {
//            denominator = 1;
//        }
//        
//        int nod = Nod(abs(numerator), abs(denominator));
//        num = numerator / nod;
//        den = denominator / nod;
//    }
//    int Numerator() const {
//        return num;
//    }
//    int Denominator() const {
//        return den;
//    }
//private:
//    int num;
//    int den;
//
//    int Nod(int a, int b) {
//        while (a > 0 && b > 0) {
//            if (a > b) {
//                a %= b;
//            }
//            else {
//                b %= a;
//            }
//        }
//        return a + b;
//    }
//};
//bool operator == (Rational a, Rational b) { 
//    if ((a.Numerator() == b.Numerator()) && (a.Denominator() == b.Denominator())) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//Rational operator + (Rational a, Rational b) {
//    int p = (a.Numerator() * b.Denominator()) + (b.Numerator() * a.Denominator());
//    int q = a.Denominator() * b.Denominator();
//    return Rational(p, q);
//}
//Rational operator - (Rational a, Rational b) {
//    int p = (a.Numerator() * b.Denominator()) - (b.Numerator() * a.Denominator());
//    int q = a.Denominator() * b.Denominator();
//    return Rational(p, q);
//}
//Rational operator * (Rational a, Rational b) {
//    return Rational((a.Numerator() * b.Numerator()), (a.Denominator() * b.Denominator()));
//}
//Rational operator / (Rational a, Rational b) {
//    return Rational((a.Numerator() * b.Denominator()), (a.Denominator() * b.Numerator()));
//}
//istream& operator >> (istream& stream, Rational& r) {
//    
//    int p, q;
//    if (stream >> p && stream.ignore(1) && stream >> q) {
//        r = { p, q };
//    }
//    return stream;
//}
//
//ostream& operator << (ostream& stream, const Rational& r) {
//    stream << r.Numerator() << "/" << r.Denominator();
//    return stream;
//}
//bool operator > (Rational a, Rational b) {
//    return (a.Numerator() / (double)a.Denominator()) > double(b.Numerator() / (double)b.Denominator());
//}
//bool operator < (Rational a, Rational b) {
//    return (a.Numerator() / (double)a.Denominator()) < (b.Numerator() / (double)b.Denominator());
//}
//int main() {
//    {
//        const set<Rational> rs = { { 1, 2 },{ 1, 25 },{ 3, 4 },{ 3, 4 },{ 1, 2 } };
//        if (rs.size() != 3) {
//            cout << "Wrong amount of items in the set" << endl;
//            return 1;
//        }
//
//        vector<Rational> v;
//        for (auto x : rs) {
//            v.push_back(x);
//        }
//        if (v != vector<Rational>{ {1, 25}, { 1, 2 }, { 3, 4 }}) {
//            cout << "Rationals comparison works incorrectly" << endl;
//            return 2;
//        }
//    }
//
//    {
//        map<Rational, int> count;
//        ++count[{1, 2}];
//        ++count[{1, 2}];
//
//        ++count[{2, 3}];
//
//        if (count.size() != 2) {
//            cout << "Wrong amount of items in the map" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}

//Тренировочное задание по программированию: Калькулятор обыкновенных дробей

//#include <iostream>
//#include <exception>
//#include <sstream>
//#include <cmath>
//#include <string>
//#include <map>
//using namespace std;
//class Rational {
//public:
//    Rational() {
//        num = 0;
//        den = 1;
//    }
//    Rational(int numerator, int denominator) {
//        if (denominator == 0) throw 1;
//        else if (denominator < 0) {
//            if (numerator < 0) {
//                denominator = abs(denominator);
//                numerator = abs(numerator);
//            }
//            else {
//                denominator = abs(denominator);
//                numerator = numerator - 2 * numerator;
//            }
//        }
//        if (numerator == 0) {
//            denominator = 1;
//        }
//        int nod = Nod(abs(numerator), abs(denominator));
//        num = numerator / nod;
//        den = denominator / nod;
//    }
//    int Numerator() const {
//        return num;
//    }
//    int Denominator() const {
//        return den;
//    }
//private:
//    int num;
//    int den;
//
//    int Nod(int a, int b) {
//        while (a > 0 && b > 0) {
//            if (a > b) {
//                a %= b;
//            }
//            else {
//                b %= a;
//            }
//        } //while
//        return a + b;
//    }
//};
//bool operator == (Rational a, Rational b) {
//    if ((a.Numerator() == b.Numerator()) && (a.Denominator() == b.Denominator())) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//Rational operator + (Rational a, Rational b) {
//    int p = (a.Numerator() * b.Denominator()) + (b.Numerator() * a.Denominator());
//    int q = a.Denominator() * b.Denominator();
//    return Rational(p, q);
//}
//Rational operator - (Rational a, Rational b) {
//    int p = (a.Numerator() * b.Denominator()) - (b.Numerator() * a.Denominator());
//    int q = a.Denominator() * b.Denominator();
//    return Rational(p, q);
//}
//Rational operator * (Rational a, Rational b) {
//    return Rational((a.Numerator() * b.Numerator()), (a.Denominator() * b.Denominator()));
//}
//Rational operator / (Rational a, Rational b) {
//    if (b.Numerator() == 0) throw 2;
//    return Rational((a.Numerator() * b.Denominator()), (a.Denominator() * b.Numerator()));
//}
//istream& operator >> (istream& stream, Rational& r) {
//    int p, q;
//    if (stream >> p && stream.ignore(1) && stream >> q) {
//        r = { p, q };
//    }
//    return stream;
//}
//
//ostream& operator << (ostream& stream, const Rational& r) {
//    stream << r.Numerator() << "/" << r.Denominator();
//    return stream;
//}
//bool operator > (Rational a, Rational b) {
//    return (a.Numerator() / (double)a.Denominator()) > double(b.Numerator() / (double)b.Denominator());
//}
//bool operator < (Rational a, Rational b) {
//    return (a.Numerator() / (double)a.Denominator()) < (b.Numerator() / (double)b.Denominator());
//}
//int main() {
//    try
//    {
//        Rational a, b;
//        char ch;
//        cin >> a >> ch >> b;
//        if (ch == '+') cout << a + b;
//        else if (ch == '-') cout << a - b;
//        else if (ch == '*') cout << a * b;
//        else cout << a / b;
//    }
//    catch (int f) { //ловим исключения по номеру
//        if (f == 1) cout << "Invalid argument";
//        else cout << "Division by zero";
//    }
//
//    return 0;
//}

//

//#include <iostream>
//#include <exception>
//#include <sstream>
//#include <cmath>
//#include <string>
//using namespace std;
//class Rational {
//public:
//    Rational() {
//        num = 0;
//        den = 1;
//    }
//    Rational(int numerator, int denominator) {
//        if (denominator == 0) throw invalid_argument("invalid_argument");
//        else if (denominator < 0) {
//            if (numerator < 0) {
//                denominator = abs(denominator);
//                numerator = abs(numerator);
//            }
//            else {
//                denominator = abs(denominator);
//                numerator = numerator - 2 * numerator;
//            }
//        }
//        if (numerator == 0) {
//            denominator = 1;
//        }
//        int nod = Nod(abs(numerator), abs(denominator));
//        num = numerator / nod;
//        den = denominator / nod;
//    }
//    int Numerator() const {
//        return num;
//    }
//    int Denominator() const {
//        return den;
//    }
//private:
//    int num;
//    int den;
//
//    int Nod(int a, int b) {
//        while (a > 0 && b > 0) {
//            if (a > b) {
//                a %= b;
//            }
//            else {
//                b %= a;
//            }
//        } //while
//        return a + b;
//    }
//};
//Rational operator / (Rational a, Rational b) {
//    if (b.Numerator() == 0) throw domain_error("domain_error");
//    return Rational((a.Numerator() * b.Denominator()), (a.Denominator() * b.Numerator()));
//}
//istream& operator >> (istream& stream, Rational& r) {
//    //if (stream) return stream;
//    int p, q;
//    if (stream >> p && stream.ignore(1) && stream >> q) {
//        r = { p, q };
//    }
//    return stream;
//}
//ostream& operator << (ostream& stream, const Rational& r) {
//    stream << r.Numerator() << "/" << r.Denominator();
//    return stream;
//}
//int main() {
//    try {
//        Rational r(1, 0);
//        cout << "Doesn't throw in case of zero denominator" << endl;
//        return 1;
//    }
//    catch (invalid_argument&) {
//    }
//
//    try {
//        auto x = Rational(1, 2) / Rational(0, 1);
//        cout << "Doesn't throw in case of division by zero" << endl;
//        return 2;
//    }
//    catch (domain_error&) {
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}

//

//#include <exception>
//#include <system_error>
//
//using namespace std;
//
//class TimeServer {
//public:
//    string GetCurrentTime() {
//        // поместим вызов функции AskTimeServer в try-catch блок
//        try {
//            last_fetched_time = AskTimeServer();
//        }
//        catch (const system_error&) {  // ловим только system_error
//        }
//        // возвращаем значение поля — либо обновлённое, либо нет
//        return last_fetched_time;
//    }
//
//private:
//    string last_fetched_time = "00:00:00";
//};

//Тренировочное задание по программированию: Справочник столиц

//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main() {
//    int Q;
//    string command;
//    string country;
//    string capital;
//    string old_capital;
//    string old_country_name;
//    string new_country_name;
//    string out;
//    map<string, string> m;
//    vector<string> output;
//    cin >> Q; //Вводим число запросов
//
//    while (Q != 0) { //Проводим Q операций
//        cin >> command; //Вводим команду
//        if (command == "CHANGE_CAPITAL") {
//            Q--;
//            cin >> country;
//            cin >> capital;
//
//            if (m[country] == "") {
//                m[country] = capital;
//                output.push_back("Introduce new country " + country + " with capital " + capital);
//            }
//            else {
//                if (m[country] != capital) {
//                    old_capital = m[country];
//                    m[country] = capital;
//                    output.push_back("Country " + country + " has changed its capital from " + old_capital + " to " + capital);
//                }
//                else {
//                    output.push_back("Country " + country + " hasn't changed its capital");
//                }
//            }
//        }
//        if (command == "RENAME") {
//            Q--;
//            cin >> old_country_name;
//            cin >> new_country_name;
//            if (old_country_name != new_country_name && m[old_country_name] != "") {
//                m[new_country_name] = m[old_country_name];
//                output.push_back("Country " + old_country_name + " with capital " + m[old_country_name] + " has been renamed to " + new_country_name);
//            }
//            else {
//                output.push_back("Incorrect rename, skip");
//            }
//            m.erase(old_country_name);
//
//        }
//        if (command == "ABOUT") {
//            Q--;
//            cin >> country;
//            if (m[country] != "") {
//                output.push_back("Country " + country + " has capital " + m[country]);
//            }
//            else {
//                m.erase(country);
//                output.push_back("Country " + country + " doesn't exist");
//            }
//        }
//        if (command == "DUMP") {
//            Q--;
//            if (m.size() != 0) {
//                out = "";
//                for (auto c : m) {
//                    if (out == "") {
//                        out = (c.first + "/" + c.second);
//                    }
//                    else {
//                        out += (" " + c.first + "/" + c.second);
//                    }
//                }
//                output.push_back(out);
//            }
//            else {
//                output.push_back("There are no countries in the world");
//            }
//        }
//    }
//    for (string c : output) {
//        cout << c << endl;
//    }
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//class Weather {
//public:
//    Weather(const string& new_state, int new_temperature) {
//        state = new_state;
//        temperature = new_temperature;
//        cout << 'c';
//    }
//    ~Weather() {
//        cout << 'd';
//    }
//private:
//    string state;
//    int temperature;
//};
//Weather GetMayWeather(int day) {
//    if (day == 9) {
//        cout << 'b';
//        return { "clear", 10 };
//    }
//    else {
//        cout << 'b';
//        return { "cloudy", 10 };
//    }
//}
//
//int main() {
//    vector<int> days(2, 1);
//    for (int day : days) {
//        cout << 'a';
//        Weather weather = GetMayWeather(day);
//        cout << 'e';
//    }
//    cout << 'f';
//    return 0;
//}