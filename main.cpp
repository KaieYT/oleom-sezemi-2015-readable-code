#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
//イテレータを用いる
    vector<string> recipe;
    vector<string> ::iterator it;

//recipeにデータを読み出して入れる
    ifstream recipedata(argv[1]);
    string str;
    while (getline(recipedata,str)){
        recipe.push_back(str);
    }

//recipeの最初から最後まで出力
    for(it = recipe.begin();it != recipe.end();it++){
        cout << *it << endl;
    }
    
    return 0;
}
