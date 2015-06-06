###実際のコード
https://github.com/oleom/oleom-sezemi-2015-readable-code/main.cpp

### どうしてリーダブルだと思っているかの説明
変数定義，読み込み，表示の処理が見やすくなった．

### この書き方の一言説明
処理毎に段落を分けた



###実際のコード
//recipeの最初から最後まで出力
for(it = recipe.begin();it != recipe.end();it++){

int recipenum = it-recipe.begin()+1;
cout << recipenum << ": " << *it << endl;

}


### どうしてリーダブルだと思っているかの説明
recipenumに一度代入する事で何を表しているかを理解しやすくなった

### この書き方の一言説明
理解しやすい名前の変数

//ここから保田引き継ぎ
###引き継ぎされたもののメモ
###各処理ごとに改行があり，かつコメントが記述されていて何をしたいのかが
分かりやすい．
ex.
//イテレータを用いる
//recipeにデータを読み出して入れる

処理ごとに関数を分割する冗長な書き方ではなく，コンパクトにまとまっている．
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

###保田の工夫
各処理ごとに行をまとめて記述
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

ファイルが読み込めなかったときの記述(どういう対応をとるのか明示)
//ファイルが開けない場合エラーを返す
if(!recipedata){
cout << "can't open file" << endl;
return -1;
}

変数名が理解できるように．とくにレシピデータ，URLなど
vector<string> recipename; //レシピ名
vector<string> recipeurl; //レシピID
vector<string> ::iterator it;

