c++ 
===

recipeにrecipe-data1.txtのデータを用いて実行すると
txt内のレシピを全て（３つ）表示する

例
./recipe recipe-data1.txtを実行する事で内部データを表示する

//保田引き継ぎ
仕様6
recipeにrecipe-data1.txtのデータ，表示したいレシピIDを用いて実行すると
txt内の対応するIDのレシピを(全)表示する．


c++ main.cpp でコンパイル．
./a.outにrecipe-data1.txt，表示したいレシピのIDを引数として実行する．
レシピIDを指定しない場合，すべてのレシピを表示する．
例:./a.out recipe-data1.txt 3 

仕様7
recipeにrecipe-data1.txtのデータ，表示したいレシピIDを用いて実行すると
txt内の対応するIDのレシピ，URLを(全)表示する．

c++ main.cpp でコンパイル．
./a.outにrecipe-data1.txt，表示したいレシピのIDを引数として実行する．
レシピIDを指定しない場合，すべてのレシピとURLを表示する．
例:./a.out recipe-data1.txt 3 
