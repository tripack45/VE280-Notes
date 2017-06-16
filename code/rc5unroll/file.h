class File {
    string name;
public:
    File(string file) : name(file) {
        cout << "Opended : " << name << endl; }
    ~File() { 
        cout << "Closed " << name << endl; }
};
