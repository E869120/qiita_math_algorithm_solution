# 演習問題 3
整数 N を引数として、

* N が素数なら true
* N が素数ではない（合成数である）なら false

を返す関数 func を含むプログラムを書いてください。

<br />

# 演習問題 3 の解答
関数がどういうものかは、[2-2. 節](https://qiita.com/e869120/items/b4a0493aac567c6a7240#2-2-%E9%96%A2%E6%95%B0%E3%81%A8%E3%81%AF%E4%BD%95%E3%81%8B-%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%A0%E5%AE%9F%E8%A3%85%E3%81%A7%E9%87%8D%E8%A6%81) で確認してください。

プログラミング言語における関数は、実数値を返すものとは限らず、bool 値を返すものや、何も返さないもの（void 型）にまで拡張することができます。

また、素数の判定は 2, 3, ..., sqrt(N) で割っていき、どれでも割れなければ素数、と返せば良いです。

詳しくは[サンプルコード]()をご覧ください。