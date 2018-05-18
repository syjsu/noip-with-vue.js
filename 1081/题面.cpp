/*当你数次提交却始终wa的时候是不是曾经怀疑人生,这
不是你的问题，而是题目有错，真正的题目是《字符串
的展开》，感谢fangle发现这个错误，下面给出题面：
	在初赛普及组的“阅读程序写结果”的问题中，我们曾给出一个字符串展开的例子：如果
在输入的字符串中，含有类似于“d-h”或者“4-8”的字串，我们就把它当作一种简写，输出
时，用连续递增的字母获数字串替代其中的减号，即，将上面两个子串分别输出为“defgh”
和“45678”。在本题中，我们通过增加一些参数的设置，使字符串的展开更为灵活。具体
约定如下：

1：遇到下面的情况需要做字符串的展开：在输入的字符串中，出现了减号“-”，减号两侧同
为小写字母或同为数字，且按照ASCII码的顺序，减号右边的字符严格大于左边的字符。
2：参数p1：展开方式。p1=1时，对于字母子串，填充小写字母；p1=2时，对于字母子串，
填充大写字母。这两种情况下数字子串的填充方式相同。p1=3时，不论是字母子串还是
数字字串，都用与要填充的字母个数相同的星号“*”来填充。
3：参数p2：填充字符的重复个数。p2=k表示同一个字符要连续填充k个。例如，当p2=3时，
子串“d-h”应扩展为“deeefffgggh”。减号两边的字符不变。
4：参数p3：是否改为逆序：p3=1表示维持原来顺序，p3=2表示采用逆序输出，注意这时候
仍然不包括减号两端的字符。例如当p1=1、p2=2、p3=2时，子串“d-h”应扩展为“dggffeeh”。
5：如果减号右边的字符恰好是左边字符的后继，只删除中间的减号，例如：“d-e”应输出为“
de ”，“3-4”应输出为“34”。如果减号右边的字符按照ASCII码的顺序小于或等于左边字
符，输出 时，要保留中间的减号，例如：“d-d”应输出为“d-d”，“3-1”应输出为“3-1”。
*/