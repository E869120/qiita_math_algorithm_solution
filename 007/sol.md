# 演習問題 7
数式があるので、問題文は省略します。

<br />

# 演習問題 7 の解答＜O(N^3) 解法＞
シグマ記号の定義については、[2-9. 節](https://qiita.com/e869120/items/b4a0493aac567c6a7240#2-9-%E3%82%B7%E3%82%B0%E3%83%9E%E8%A8%98%E5%8F%B7%E3%81%A8%E3%81%AF%E4%BD%95%E3%81%8B)を確認してください。

また、abc というのは a×b×c のことを指します。これに関しては [2-1. 節](https://qiita.com/e869120/items/b4a0493aac567c6a7240#2-1-%E4%B8%AD%E5%AD%A6-1-%E5%B9%B4%E3%83%AC%E3%83%99%E3%83%AB%E3%81%BE%E3%81%A7%E3%81%AE%E5%9F%BA%E6%9C%AC%E7%9A%84%E7%94%A8%E8%AA%9E%E6%95%B0%E5%BC%8F%E3%81%AE%E6%95%B4%E7%90%86)を確認してください。

これを理解すれば、あとは三重ループを書くだけで解くことができます。

詳しくは、[サンプルコード](https://github.com/E869120/qiita_math_algorithm_solution/blob/main/007/code1.cpp)をご覧ください。

<br />

# 演習問題 7 の解答＜O(N) 解法＞
上手く因数分解すると、求める値は、実は (1 + 2 + ... + N)^3 になっています。

そこで、1 + 2 + ... + N の値は O(N) で計算できるので、全体計算量は O(N) となります。

詳しくは、[サンプルコード](https://github.com/E869120/qiita_math_algorithm_solution/blob/main/007/code2.cpp)をご覧ください。

<br />

# 演習問題 7 の解答＜O(1) 解法＞
「1 + 2 + 3 + ... + N = N * (N + 1) / 2」という性質を使うと、計算量が O(1) まで落とせます。

詳しくは、[サンプルコード](https://github.com/E869120/qiita_math_algorithm_solution/blob/main/007/code3.cpp)をご覧ください。
