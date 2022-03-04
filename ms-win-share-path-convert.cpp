/* BSD License
 * author clark.lijiu @ icloud;
 * Let's make a better world for kids and all people;
 */

#include <iostream>
#include <string>
using namespace std;

//convertion back slash to slash
void convert_back_slash_to_slash(string& str) {
    int n = str.length();

    //convertion back slash to slash
    for (int i = 0; i < n; i++) {
        if ('\\' == str[i]) {
            str[i] = '/';
        }
    }
}

//Prefix smb:
//e.g. smb://eseefsn50.emea.nsn-net.net/rotta4internal/5G_2/DS4A/
void prefix_smb(string& str) {
    str = "smb:" + str;
}

int main() {
    string str_orig, str;
    cout<<endl<<"*** convert ms-windows share path(back slash seperated) to slash format path (v 1.1) ***"<<endl;
    cout<<endl<<"*** input SMB \\\\file_place_path please:"<<endl;

    getline(cin>>ws, str_orig);
    cout<<endl<<"*** your input is: "<<endl<<"  "<<str_orig<<endl;

    str = str_orig;
    convert_back_slash_to_slash(str);

    prefix_smb(str);
    cout<<endl<<"*** converted path is as follows, please use it:"<<endl<<"    "<<str<<endl<<endl<<endl;

    cout<<"*** Or, You can use the follows command in console"<<endl;
    cout<<"    to mount the remote folder to a local empty folder:"<<endl;
    cout<<"      mount_smbfs "<<str<<"   LOCAL_EMPTY_FOLDER"<<endl<<endl;
    
    //TODO Try to mount this smb path; mount_smbfs

}
