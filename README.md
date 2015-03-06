# d732
d732: 二分搜尋法

[高中生解題平台](http://zerojudge.tw/), [d732: 二分搜尋法](http://zerojudge.tw/ShowProblem?problemid=d732)

我的解法在 [main.c](https://github.com/wemee/d732/blob/master/main.c)

這一題我覺我的寫得漂亮的地方是，函式`search`的引數`m`，我使用call by address

因為`search`的引數`m`是要搜尋的目的數字，不能也不會改變，不需要一直call by value浪費記憶體

所以直接call by address

---

> 內容 ：
> 
給你一個嚴格遞增的數列A1,A2,A3.....> An(1<=n<=100000), 
> 
> &下面有幾個問題的詢問數k(1<=K<=100000),
> 
以及k個詢問的整數x,求數列中是否存在一個Ai(1<=i<=n)> 的值與X相等?
> 
> 輸入說明 ： 
第一行包含兩個整數n,> k分別表示數列長度以及詢問數,
> 
第二行包含n個整數第i(1<=i<=n)> 個整數依序為數列中Ai的值,
> 
> 第三行包含k個詢問的整數x. 
> 
> 輸出說明 ： 
> 對於每個詢問整數x對應一行輸出:
> 
> 輸出i的值
> 
> 其中1<=i<=n且Ai=x
> 
> 若沒有這樣的i值請輸出0代替.
> 
> 範例輸入 ：
> 
> 5 5
> 
> 1 3 4 7 9
> 
> 3 1 9 7 -2
> 
> 範例輸出 ：
> 
> 2
> 
> 1
> 
> 5
> 
> 4
> 
> 0
