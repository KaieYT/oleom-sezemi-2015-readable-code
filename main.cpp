#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    //イテレータを用いる
    vector<string> recipename; //レシピ名
    vector<string> recipeurl; //レシピID
    vector<string> ::iterator it;

    //recipeにデータを読み出して入れる
    ifstream recipedata(argv[1]);
    //ファイルが開けない場合エラーを返す
    if(!recipedata){
        cout << "can't open file" << endl;
        return -1;
    }
    
    //レシピ名，URLを格納
    string str;
    while (getline(recipedata,str,' ')){
        recipename.push_back(str);
        getline(recipedata,str);
        recipeurl.push_back(str);
    }
    
    //引数が3つ以上ある場合 レシピIDを取得
    int selectnum = 0;
    if(argc >= 3){
        selectnum = atoi(argv[2]);
    }
    
    //3つ目の引数に対応したレシピ，URLを出力
    for(it = recipename.begin() ; it != recipename.end() ; it++){
        int recipenum = it - recipename.begin() + 1;  //レシピID
        if(selectnum == 0 || selectnum == recipenum){ //指定なしの時すべて表示
            cout << recipenum << " : " << recipename.at(recipenum - 1) << " "
            <<　recipeurl.at(recipenum - 1) << endl;
        }
    }
    return 0;
}
