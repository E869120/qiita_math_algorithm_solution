# 演習問題 6
1 xor 2 xor 3 xor ... xor N を求めるプログラムを書いてください。

ただし、時間計算量 O(N) かけても良いですが、O(1) で解けるアルゴリズムも存在します。

<br />

# 演習問題 6 の解答＜O(N) 解法＞
xor の定義については [2-5. 節](https://qiita.com/e869120/items/b4a0493aac567c6a7240#2-5-%E8%AB%96%E7%90%86%E6%BC%94%E7%AE%97%E3%81%A8%E3%81%AF%E4%BD%95%E3%81%8B-andorxor) で確認してください。

そこで、xor の計算順序は関係ないので、

* 1 xor 2 = 3
* 3 xor 3 = 0
* 0 xor 4 = 4
* 4 xor 5 = 1
* 1 xor 6 = 7
* 7 xor 7 = 0
* 以下略

といった感じで、左から順に計算していけば良いです。なお、a xor b の値は C++ の場合「a^b」で計算できます。詳しくは[サンプルコード](https://github.com/E869120/qiita_math_algorithm_solution/blob/main/006/code1.cpp)をご覧ください。

<br />

# 演習問題 7 の解答＜O(1) 解法＞
よく考えると、

* (0 xor 1 xor 2 xor 3) = 0
* (4 xor 5 xor 6 xor 7) = 0
* (8 xor 9 xor 10 xor 11) = 0
* (12 xor 13 xor 14 xor 15) = 0
* 以下略

が成り立っていることが分かります。これは、左端がどのような 4 の倍数でも成り立つ性質です。

その性質を使うと、求めるべき値は以下のようになります。よって O(1) で計算できます。

| 条件 | 求めるべき値 |
|:---:|:---:|
| N が 4 の倍数 | N |
| N が 4 で割って 1 余る整数 | (N-1) xor N |
| N が 4 で割って 2 余る整数 | (N-2) xor (N-1) xor N |
| N が 4 で割って 3 余る整数 | 0 |

詳しくは[サンプルコード](https://github.com/E869120/qiita_math_algorithm_solution/blob/main/006/code2.cpp)をご覧ください。
