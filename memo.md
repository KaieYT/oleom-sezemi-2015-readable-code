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