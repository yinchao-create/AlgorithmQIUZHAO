第一周学习总结

    五毒神掌刷题法

    .深有体会，过遍数真的很重要，非常烧脑的地方即使第一次费劲理解了，过几天再接触还是得思索一会才能理清。
    .温故而知新真的很有道理，只有遍数过够了知识才能熟练掌握。

    数据结构

    .数据结构可分为存储结构（顺序与和链式）和逻辑结构（线性与非线性）。
    .一维结构：数组、链表、栈、队列、集合、映射等
    .二维结构：树、图、堆、并查集、字典树等
    .特殊机构：位运算、布隆过滤器、LRU Cache等

    算法

    .if-else switch ->branch
    .for,while loop ->循环，迭代
    .递归
    .搜索：深度优先搜索，广度优先搜索，A*
    .动态规划（dp）
    .二分查找
    .贪心
    .数学，几何

    新的API改写Deque

    Deque<String> deque = new LinkedList<String>();

	deque.addFirst("a");
	deque.addFirst("b");
	deque.addFirst("c");
	System.out.println(deque);

	String str = deque.peekFirst();
	System.out.println(str);
	System.out.println(deque);

	while (deque.size > 0) {
	  System.out.println(deque.removeFirst());
	}
	System.out.println(deque);

   体会
   学习如逆水行舟，需要耐力和坚持，进一寸有进一寸的欢愉，革命尚未成功同志仍需努力！