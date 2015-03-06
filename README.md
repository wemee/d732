# d732
d732: 二分搜尋法

[高中生解題平台](http://zerojudge.tw/), [d732: 二分搜尋法](http://zerojudge.tw/ShowProblem?problemid=d732)

我的解法在 [main.c](https://github.com/wemee/d732/blob/master/main.c)

這一題我覺我的寫得漂亮的地方是，函式`search`的引數`m`，我使用call by address

因為`search`的引數`m`是要搜尋的目的數字，不能也不會改變，不需要一直call by value浪費記憶體

所以直接call by address
